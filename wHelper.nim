
converter DWORDToInt(x: DWORD): int = int x
converter IntToDWORD(x: int): DWORD = DWORD x

proc `-`(a, b: wPoint): wPoint =
  result = (a.x - b.x, a.y - b.y)

proc `+`(a, b: wPoint): wPoint =
  result = (a.x + b.x, a.y + b.y)


# add wValidate(self, frame, text, etc) at beginning of static object proc
# method don't need self check becasue it's checked by dispatcher
# not nil don't work will on 0.18.0 and 0.18.1

when not defined(release):
  import typetraits

  proc wValidateToPointer*(x: ref): (pointer, string) =
    (cast[pointer](unsafeaddr x[]), x.type.name)
  proc wValidateToPointer*(x: pointer): (pointer, string) =
    (x, x.type.name)
  proc wValidateToPointer*(x: string): (pointer, string) =
    ((if x.isNil: cast[pointer](0) else: cast[pointer](unsafeaddr x)), x.type.name)
  proc wValidateToPointer*[T](x: seq[T]): (pointer, string) =
    (cast[pointer](x), x.type.name)

  template wValidate(vargs: varargs[(pointer, string), wValidateToPointer]): untyped =
    for tup in vargs:
      if tup[0] == nil:
        raise newException(NilAccessError, " not allow nil " & tup[1])

else:
  proc wValidateToPointer*[T](x: T): pointer = nil
  template wValidate(vargs: varargs[pointer, wValidateToPointer]): untyped = discard

proc toRect(r: wRect): RECT =
  result.left = r.x
  result.top = r.y
  result.right = r.x + r.width
  result.bottom = r.y + r.height

proc toWRect(r: RECT): wRect =
  result.x = r.left
  result.y = r.top
  result.width = r.right - r.left
  result.height = r.bottom - r.top

template SendMessage(hwnd, msg, wparam, lparam: typed): untyped =
  SendMessage(hwnd, msg, cast[WPARAM](wparam), cast[LPARAM](lparam))

proc wGetDPI(): int =
  var hdc = GetDC(0)
  result = GetDeviceCaps(hdc, LOGPIXELSY)
  ReleaseDC(0, hdc)

proc toWStyle(style, exstyle: DWORD): wStyle {.inline.} =
  result = exstyle.wStyle shl 32 or style.wStyle

proc toolBarDirection(hwnd: HWND): int =
  case SendMessage(hwnd, TB_GETSTYLE, 0, 0) and CCS_RIGHT
  of CCS_RIGHT: result = wRight
  of CCS_LEFT: result = wLeft
  of CCS_BOTTOM: result = wBottom
  else: result = wTop

proc wGetWinVersion(): float =
  var osv = OSVERSIONINFO(dwOSVersionInfoSize: sizeof(OSVERSIONINFO).DWORD)
  GetVersionEx(osv)
  result = osv.dwMajorVersion.float + osv.dwMinorVersion.float / 10

proc getTextFontSize(text: string, hFont: HANDLE): wSize =
  var
    hdc = GetDC(0)
    prev = SelectObject(hdc, hFont)
    size: SIZE

  GetTextExtentPoint32(hdc, text, text.len, size)
  SelectObject(hdc, prev)
  ReleaseDC(0, hdc)

  result.height = size.cy
  result.width = size.cx

proc getAverageASCIILetterSize(hFont: HANDLE): wSize =
  result = getTextFontSize("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", hFont)
  result.width = (result.width div 26 + 1) div 2

var hwndComboBoxForCountSize {.threadvar.}: HWND

proc getLineControlDefaultHeight(hFont: HANDLE): int =
  # a hack way to get default height from autosize combobox
  # is there a correct way to calculate it?
  if hwndComboBoxForCountSize == 0:
    hwndComboBoxForCountSize = CreateWindowEx(0, WC_COMBOBOX, "", CBS_DROPDOWN, 0, 0, 0, 0, 0, 0, 0, nil)

  var r: RECT
  SendMessage(hwndComboBoxForCountSize, WM_SETFONT, hFont, 0)
  GetWindowRect(hwndComboBoxForCountSize, r)
  result = r.bottom - r.top

proc getTextFontSizeWithCheckMark(text: string, hFont: HANDLE): wSize =
  let
    hdc = GetDC(0)
    prev = SelectObject(hdc, hFont)
    checkWidth = 12 * GetDeviceCaps(hdc, LOGPIXELSX).int div 96 + 1
    checkHeight = 12 * GetDeviceCaps(hdc, LOGPIXELSY).int div 96 + 1
  var textOffset: INT
  GetCharWidth(hdc, '0'.UINT, '0'.UINT, addr textOffset)
  SelectObject(hdc, prev)
  ReleaseDC(0, hdc)

  result = getTextFontSize(text & " ", hFont)
  result.width += checkWidth + textOffset.int div 2
  if result.width < checkHeight: result.width = checkHeight

proc toDateTime(st: SYSTEMTIME): DateTime =
  initDateTime(st.wDay, Month st.wMonth, st.wYear.int, st.wHour, st.wMinute, st.wSecond)

proc toSystemTime(dateTime: DateTime): SYSTEMTIME =
  result.wSecond = WORD dateTime.second
  result.wMinute = WORD dateTime.minute
  result.wHour = WORD dateTime.hour
  result.wYear = WORD dateTime.year
  result.wMonth = WORD dateTime.month
  result.wDay = WORD dateTime.monthday

proc toTime(st: SYSTEMTIME): wTime =
  st.toDateTime().toTime()

proc toSystemTime(time: wTime): SYSTEMTIME =
  result = time.inZone(local()).toSystemTime()


proc wGetMenuItemInfo(hmenu: HMENU, pos: int, fMask = MIIM_STATE): MENUITEMINFO =
  result = MENUITEMINFO(cbSize: sizeof(MENUITEMINFO), fMask: fMask)
  GetMenuItemInfo(hmenu, pos, true, result)

proc wGetMenuItemString(hmenu: HMENU, pos: int, buffer: var TString): int =
  var menuItemInfo = MENUITEMINFO(
    cbSize: sizeof(MENUITEMINFO),
    fMask: MIIM_STRING,
    dwTypeData: &buffer,
    cch: buffer.high)

  if GetMenuItemInfo(hmenu, pos, true, menuItemInfo) != 0:
    result = menuItemInfo.cch

proc wEnableMenu(hmenu: HMENU, pos: int, flag: bool) =
  var menuItemInfo = wGetMenuItemInfo(hmenu, pos)
  if flag:
    menuItemInfo.fState = menuItemInfo.fState and (not MFS_DISABLED)
  else:
    menuItemInfo.fState = menuItemInfo.fState or MFS_DISABLED
  SetMenuItemInfo(hmenu, pos, true, menuItemInfo)

proc wIsMenuEnabled(hmenu: HMENU, pos: int): bool =
  var menuItemInfo = wGetMenuItemInfo(hmenu, pos)
  result = (menuItemInfo.fState and MFS_DISABLED) == 0

proc wCheckMenuItem(hmenu: HMENU, pos: int, flag: bool) =
  var menuItemInfo = wGetMenuItemInfo(hmenu, pos)
  if flag:
    menuItemInfo.fState = menuItemInfo.fState or MFS_CHECKED
  else:
    menuItemInfo.fState = menuItemInfo.fState and (not MFS_CHECKED)
  SetMenuItemInfo(hmenu, pos, true, menuItemInfo)

proc isMouseInWindow(mHwnd: HWND): bool =
  var mousePos: POINT
  GetCursorPos(mousePos)

  var hwnd = WindowFromPoint(mousePos)
  while hwnd != 0 and hwnd != mHwnd:
    hwnd = GetParent(hwnd)

  result = hwnd != 0

proc loadRichDll(): bool =
  var richDllLoaded {.global, threadvar.}: bool
  if not richDllLoaded:
    if LoadLibrary("msftedit.dll") != 0:
      richDllLoaded = true
  result = richDllLoaded

proc getThemeBackgroundColor*(hWnd: HWND): wColor =
  var gResult {.global.}: wColor = wDefaultColor
  if gResult != wDefaultColor:
    return gResult

  type
    GetCurrentThemeName = proc (pszThemeFileName: LPWSTR, dwMaxNameChars: int32, pszColorBuff: LPWSTR, cchMaxColorChars: int32, pszSizeBuff: LPWSTR, cchMaxSizeChars: int32): HRESULT {.stdcall.}
    OpenThemeData = proc (hwnd: HWND, pszClassList: LPCWSTR): HANDLE {.stdcall.}
    CloseThemeData = proc (hTheme: HANDLE): HRESULT {.stdcall.}
    GetThemeColor = proc (hTheme: HANDLE, iPartId, iStateId, iPropId: int32, pColor: ptr wColor): HRESULT {.stdcall.}
    IsAppThemed = proc (): BOOL {.stdcall.}
    IsThemeActive = proc (): BOOL {.stdcall.}

  let
    comctl32Lib = loadLib("comctl32.dll")
    themeLib = loadLib("uxtheme.dll")

  if themeLib != nil:
    # if aero theme is active: use white color
    try:
      if comctl32Lib == nil: raise
      defer: comctl32Lib.unloadLib()

      let
        isAppThemed = cast[IsAppThemed](themeLib.checkedSymAddr("IsThemeActive"))
        isThemeActive = cast[IsThemeActive](themeLib.checkedSymAddr("IsThemeActive"))
        getCurrentThemeName = cast[GetCurrentThemeName](themeLib.checkedSymAddr("GetCurrentThemeName"))

      if isAppThemed() == 0 or isThemeActive() == 0: raise

      var
        themeFile = newWString(1024)
        themeColor = newWString(256)

      if getCurrentThemeName(themeFile, 1024, themeColor, 256, nil, 0).FAILED or
        "Aero" notin $themeFile or "NormalColor" notin $themeColor: raise

      let dllGetVersion = cast[DLLGETVERSIONPROC](comctl32Lib.checkedSymAddr("DllGetVersion"))
      var dvi = DLLVERSIONINFO(cbSize: sizeof(DLLVERSIONINFO).DWORD)
      if dllGetVersion(dvi).FAILED or dvi.dwMajorVersion < 6.DWORD: raise

      gResult = wWHITE
      return gResult

    except: discard

    # check theme color
    try:
      const
        TABP_BODY = 10
        NORMAL = 1
        FILLCOLORHINT = 3821
        FILLCOLOR = 3802

      let
        openThemeData = cast[OpenThemeData](themeLib.checkedSymAddr("OpenThemeData"))
        closeThemeData = cast[CloseThemeData](themeLib.checkedSymAddr("CloseThemeData"))
        getThemeColor = cast[GetThemeColor](themeLib.checkedSymAddr("GetThemeColor"))
        hTheme = openThemeData(hWnd, "TAB")

      if hTheme == 0: raise
      defer: discard closeThemeData(hTheme)

      var color: wColor
      if getThemeColor(hTheme, TABP_BODY, NORMAL, FILLCOLORHINT, addr color).SUCCEEDED and color != 1:
        gResult = color
        return gResult

      if getThemeColor(hTheme, TABP_BODY, NORMAL, FILLCOLOR, addr color).SUCCEEDED:
        gResult = color
        return gResult

    except: discard

  return gResult

# todo
# try to fix windows 10 SetWindowPos problem
# https://blog.forrestthewoods.com/building-a-better-aero-snap-757f68a1305f
# https://stackoverflow.com/questions/32752728/window-positioning-results-in-space-around-windows-on-windows-10
# no lucky for now, DwmAdjust seems works, but only work for showed window


proc GetSystemMargin*(hwnd: HWND): RECT =
  const DWMWA_EXTENDED_FRAME_BOUNDS = 9
  var DwmGetWindowAttribute: proc(hwnd: HWND, dwAttribute: DWORD, pvAttribute: PVOID, cbAttribute: DWORD): HRESULT {.stdcall.}
  let dwmapi = loadLib("dwmapi")
  if not dwmapi.isNil:
    let p = dwmapi.symAddr("DwmGetWindowAttribute")
    if not p.isNil:
      var DwmGetWindowAttribute = cast[DwmGetWindowAttribute.type](p)
      if DwmGetWindowAttribute(hwnd, DWMWA_EXTENDED_FRAME_BOUNDS, addr result, DWORD sizeof(RECT)) == S_OK:
        echo result

proc DwmAdjust*(hwnd: HWND, x, y, width, height: var int) =
  const DWMWA_EXTENDED_FRAME_BOUNDS = 9
  var DwmGetWindowAttribute: proc(hwnd: HWND, dwAttribute: DWORD, pvAttribute: PVOID, cbAttribute: DWORD): HRESULT {.stdcall.}
  let dwmapi = loadLib("dwmapi")
  if not dwmapi.isNil:
    let p = dwmapi.symAddr("DwmGetWindowAttribute")
    if not p.isNil:
      var DwmGetWindowAttribute = cast[DwmGetWindowAttribute.type](p)
      var withMargin, noMargin: RECT
      if DwmGetWindowAttribute(hwnd, DWMWA_EXTENDED_FRAME_BOUNDS, addr withMargin, DWORD sizeof(RECT)) == S_OK:
        GetWindowRect(hwnd, addr noMargin)

        x -= withMargin.left - noMargin.left
        y -= withMargin.top - noMargin.top
        width += (withMargin.left - noMargin.left) + (noMargin.right - withMargin.right)
        height += (withMargin.top - noMargin.top) + (noMargin.bottom - withMargin.bottom)



