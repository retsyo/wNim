#====================================================================
#
#               wNim - Nim's Windows GUI Framework
#                 (c) Copyright 2017-2020 Ward
#
#====================================================================

## Some macros used in wNim.

{.experimental, deadCodeElim: on.}

import macros, strutils, strformat

macro property*(x: untyped): untyped =
  ## Add property macro to proc as pragma so that getters/setters can access
  ## as nim's style.
  when defined(Nimdoc):
    result = x
  else:
    var procname = $x.name
    var kind = procname.substr(0, 2)

    if kind == "get" or (kind == "set" and x.params.len == 3):
      var name = substr(procname, 3)
      name[0] = name[0].toLowerAscii

      var params = newSeq[NimNode]()
      var args = newSeq[NimNode]()

      for i, p in x.params:
        params.add p
        if i >= 1: # 0 is return type
          args.add p[0]

      var namenode: NimNode
      if kind == "get":
        namenode = ident(name)
      else:
        namenode = newNimNode(nnkAccQuoted)
        namenode.add ident(name)
        namenode.add ident("=")

      var newproc = newProc(
        name=postfix(namenode, "*"),
        params=params,
        body=newStmtList(newCall(x.name, args)),
        procType=x.kind)

      newProc.pragma = x.pragma
      # not harmful if always add another inline
      newProc.addPragma(ident("inline"))

      result = newStmtList()
      result.add x
      result.add newProc

    else:
      result = x

macro validate*(x: untyped): untyped =
  ## Add validate macro to a proc as pragma to ensure *self* is not nil.
  when defined(Nimdoc):
    result = x
  else:
    var call = newCall(ident("wValidate"), ident("self"))
    if x.body[0].kind == nnkCommentStmt:
      x.body.insert(1, call)
    else:
      x.body.insert(0, call)

    result = x

macro shield*(x: untyped): untyped =
  ## Add export marker to proc but hide it in the document. Used internally.
  when defined(Nimdoc):
    x[0] = ident($x[0] & "__")

  x[0] = postfix(x[0], "*")
  result = x

macro uknlock(x: untyped): untyped {.shield.} =
  x.addPragma(newColonExpr(ident("locks"), newStrLitNode("unknown")))
  result = x

proc createCtor(procdef: NimNode, className: string, hasFinal: bool,
    isExport: bool): NimNode =

  # var comment: NimNode
  # if procdef[procdef.len-1][0].kind == nnkCommentStmt:
  #   comment = procdef[procdef.len-1][0]

  let initParams = procdef.params

  if initParams.len >= 2 and initParams[1][1].eqIdent(className):
    var ctorName = className
    ctorName.removePrefix('w')

    result =
      if isExport:
        newProc(postfix(ident(ctorName), "*"))
      else:
        newProc(ident(ctorName))

    result.addPragma(ident("inline"))
    result.addPragma(ident("discardable"))

    let params = initParams.copy
    params[0] = ident(className)
    params.del(1)
    result.params = params

    var
      line1 = newCall(ident("new"), ident("result"))
      line2 = newCall(newDotExpr(ident("result"), ident("init")))

    if hasFinal:
      line1.add ident("final")

    for i in 1..<params.len:
      for j in 0..<params[i].len - 2: # ^1: default value, ^2: param type
        line2.add params[i][j]

    result.body = newStmtList(newCommentStmtNode("Constructor."), line1, line2)

macro wClass*(name: untyped, body: untyped): untyped =
  ## A macro for building class following wNim's naming convention.
  ## Constructor is generated from initializer and finalizer automatically.
  ##
  ## Example:
  ##
  ## .. code-block:: Nim
  ##   wClass(wMyFrame of wFrame):
  ##     proc init(self: wMyFrame) =
  ##       wFrame(self).init()
  ##
  ##     proc init(self: wMyFrame, title: string) =
  ##       wFrame(self).init(title=title)
  ##
  ##     proc final(self: wMyFrame) =
  ##       wFrame(self).final()
  ##
  ## Output:
  ##
  ## .. code-block:: Nim
  ##   when not declared(wMyFrame):
  ##     type
  ##       wMyFrame = ref object of wFrame
  ##
  ##   proc final(self: wMyFrame) =
  ##     wFrame(self).final()
  ##
  ##   proc init(self: wMyFrame) =
  ##     wFrame(self).init()
  ##
  ##   proc MyFrame(): wMyFrame {.inline, discardable.} =
  ##     new(result, final)
  ##     result.init()
  ##
  ##   proc init(self: wMyFrame; title: string) =
  ##     wFrame(self).init(title=title)
  ##
  ##   proc MyFrame(title: string): wMyFrame {.inline, discardable.} =
  ##     new(result, final)
  ##     result.init(title)

  result = newStmtList()

  let (className, parentName) =
    if name.kind == nnkInfix and name[0].eqIdent("of"): # wClass(wFrame of wWindow)
      ($name[1], $name[2])

    else: # wClass(wFrame)
      ($name, "RootObj")

  # assert className[0] == 'w'

  let code = fmt"""
    when not declared({className}):
      type {className}* = ref object of {parentName}
  """

  result.add parseExpr(code)

  var hasFinal = false

  for procdef in body:
    if procdef.kind == nnkProcDef and procdef.name.eqIdent("final"):
      hasFinal = true
      result.add procdef

  for procdef in body:
    var ctor: NimNode

    if procdef.kind == nnkProcDef and procdef.name.eqIdent("final"):
      continue

    elif procdef.kind == nnkProcDef and procdef.name.eqIdent("init"):
      let isExport = procdef[0].kind == nnkPostfix
      ctor = procdef.createCtor(className, hasFinal, isExport)

    result.add procdef
    if not ctor.isNil: result.add ctor

# add wValidate(self, frame, text, etc) at beginning of static object proc
# method don't need self check becasue it's checked by dispatcher
# not nil don't work will on 0.18.0 and 0.18.1

proc wEventId(initId: cint = -1): cint {.discardable, shield.} =
  var id {.global.}: cint

  if initId != -1:
    id = initId
    result = id
  else:
    id.inc
    result = id

macro DefineEvent(x: untyped): untyped {.shield.} =
  result = newStmtList()
  for name in x:
    result.add newConstStmt(postfix(name, "*"), newCall("wEventId"))

macro DefineIncrement(start: int, x: untyped): untyped {.shield.} =
  var index = int start.intVal
  result = newStmtList()
  for name in x:
    result.add newConstStmt(postfix(name, "*"), newLit(index))
    index.inc

when not defined(release):
  import typetraits

  proc wValidateToPointer(x: ref): (pointer, string) {.shield.} =
    (cast[pointer](unsafeaddr x[]), x.type.name)
  proc wValidateToPointer(x: pointer): (pointer, string) {.shield.} =
    (x, x.type.name)
  proc wValidateToPointer(x: string): (pointer, string) {.shield.} =
    # don't check string isnil anymore (for v0.19)
    (cast[pointer](1), x.type.name)
  proc wValidateToPointer[T](x: seq[T]): (pointer, string) {.shield.} =
    # don't check seq isnil anymore (for v0.19)
    (cast[pointer](1), x.type.name)

  when not isMainModule: # hide from doc
    template wValidate*(vargs: varargs[(pointer, string), wValidateToPointer]): untyped =
      for tup in vargs:
        if tup[0] == nil:
          raise newException(NilAccessError, " not allow nil " & tup[1])

else:
  proc wValidateToPointer*[T](x: T): pointer = nil
  template wValidate*(vargs: varargs[pointer, wValidateToPointer]): untyped = discard

static:
  wEventId(0x8000) # WM_APP
