/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   F:\nim\dist\mingw64\bin\gcc.exe -c  -w -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN  -IF:\nim\lib -o O:\nim\wnim\release\examples\nimcache\stdlib_lists.o O:\nim\wnim\release\examples\nimcache\stdlib_lists.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tyObject_DoublyLinkedList_lS8cbiVegM6G2dXDZSjosA tyObject_DoublyLinkedList_lS8cbiVegM6G2dXDZSjosA;
typedef struct tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple_Q9cGQekOok3ahAXVy9axgf9aA tyTuple_Q9cGQekOok3ahAXVy9axgf9aA;
typedef struct tyObject_wEventcolonObjectType__uUaAHKFmAV5MWgXoDq0lQQ tyObject_wEventcolonObjectType__uUaAHKFmAV5MWgXoDq0lQQ;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct RootObj RootObj;
typedef struct tyObject_wWindowcolonObjectType__JkYbaVH1UCpF9cuhB5gH9c4w tyObject_wWindowcolonObjectType__JkYbaVH1UCpF9cuhB5gH9c4w;
typedef struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct tyObject_wResizablecolonObjectType__wctsRw6gBM4o9b7WTG7sM9aA tyObject_wResizablecolonObjectType__wctsRw6gBM4o9b7WTG7sM9aA;
typedef struct tyObject_VariablecolonObjectType__lxa06ORp9bdmcVMa6w4sGbw tyObject_VariablecolonObjectType__lxa06ORp9bdmcVMa6w4sGbw;
typedef struct tySequence_ycFDskWNp4jtk39aIuuDoHA tySequence_ycFDskWNp4jtk39aIuuDoHA;
typedef struct tyTuple_FtZxsWeKlOo83uVL9c4OOmg tyTuple_FtZxsWeKlOo83uVL9c4OOmg;
typedef struct tyObject_wStatusBarcolonObjectType__vo8kVIAtbX1itw5NocPmLg tyObject_wStatusBarcolonObjectType__vo8kVIAtbX1itw5NocPmLg;
typedef struct tyObject_wToolBarcolonObjectType__2sEaVgZyXWY9cWOfPC9cBlSQ tyObject_wToolBarcolonObjectType__2sEaVgZyXWY9cWOfPC9cBlSQ;
typedef struct tyObject_wFontcolonObjectType__X29b7QPs6exs9afv638QYRrQ tyObject_wFontcolonObjectType__X29b7QPs6exs9afv638QYRrQ;
typedef struct tyObject_wBrushcolonObjectType__wtTQ9a2eLTnt89be63Xu9cFtw tyObject_wBrushcolonObjectType__wtTQ9a2eLTnt89be63Xu9cFtw;
typedef struct tyObject_wCursorcolonObjectType__L42FjqGXK6RB9a40yintB9aw tyObject_wCursorcolonObjectType__L42FjqGXK6RB9a40yintB9aw;
typedef struct tyObject_Table_Nzd0y9bF9cqcqPaWbUEDIDXQ tyObject_Table_Nzd0y9bF9cqcqPaWbUEDIDXQ;
typedef struct tySequence_9cOTMEBwo55wzlZjPFOYQHg tySequence_9cOTMEBwo55wzlZjPFOYQHg;
typedef struct tyObject_wAcceleratorTablecolonObjectType__Jf9cEoqNXWroaftMQTNNUDg tyObject_wAcceleratorTablecolonObjectType__Jf9cEoqNXWroaftMQTNNUDg;
typedef struct tyObject_wSizingInfocolonObjectType__Aa2dIYi6KZnI9ckxCpb5Xww tyObject_wSizingInfocolonObjectType__Aa2dIYi6KZnI9ckxCpb5Xww;
typedef struct tyObject_wDraggableInfocolonObjectType__2BZLwTupJRTWgL4PaL9cWZw tyObject_wDraggableInfocolonObjectType__2BZLwTupJRTWgL4PaL9cWZw;
typedef struct tyObject_wControlcolonObjectType__yeTY9aITRoONBr9bxxLt04SA tyObject_wControlcolonObjectType__yeTY9aITRoONBr9bxxLt04SA;
typedef struct tySequence_T0z34G8Ya9cBkfJWxv7RbzA tySequence_T0z34G8Ya9cBkfJWxv7RbzA;
typedef struct tyObject_wGdiObjectcolonObjectType__8tqtxPp3JdHT18Fg357l6Q tyObject_wGdiObjectcolonObjectType__8tqtxPp3JdHT18Fg357l6Q;
typedef struct tyTuple_5FmmQw5czEqyIS6OX5ADRQ tyTuple_5FmmQw5czEqyIS6OX5ADRQ;
typedef struct tySequence_0YDEcvfYupp19cAmp9bz9c5EA tySequence_0YDEcvfYupp19cAmp9bz9c5EA;
typedef struct tyTuple_KNeKpKPHFicng4e3OvpAWQ tyTuple_KNeKpKPHFicng4e3OvpAWQ;
typedef struct tyTuple_aAVnisOFnmoSd9cfJ9aQgJNw tyTuple_aAVnisOFnmoSd9cfJ9aQgJNw;
typedef struct tyObject_wToolBarToolcolonObjectType__Mevf0bX1yAVjI8KJD0HIqw tyObject_wToolBarToolcolonObjectType__Mevf0bX1yAVjI8KJD0HIqw;
typedef struct tyObject_ACCEL_IwPxdEWRYYSQ39bY1mW9aFeQ tyObject_ACCEL_IwPxdEWRYYSQ39bY1mW9aFeQ;
typedef struct tyObject_wBitmapcolonObjectType__iQ6sGy0YDhzCvfKqbg9anUw tyObject_wBitmapcolonObjectType__iQ6sGy0YDhzCvfKqbg9anUw;
typedef struct tyObject_wMenucolonObjectType__fCPsDvxqCFVsAnPEAAb0Jw tyObject_wMenucolonObjectType__fCPsDvxqCFVsAnPEAAb0Jw;
typedef struct tyObject_wMenuBasecolonObjectType__sJxVdMGMr78Iy2Qznhvbjg tyObject_wMenuBasecolonObjectType__sJxVdMGMr78Iy2Qznhvbjg;
typedef struct tySequence_GEQhRx9bHjh7gn2K1qTnG8A tySequence_GEQhRx9bHjh7gn2K1qTnG8A;
typedef struct tyObject_CountTable_9cp9cpkNj9aQOr76ZTLeDIRUA tyObject_CountTable_9cp9cpkNj9aQOr76ZTLeDIRUA;
typedef struct tySequence_ZQphAAUq7LCG9brR1SFDrPg tySequence_ZQphAAUq7LCG9brR1SFDrPg;
typedef struct tyObject_wMenuItemcolonObjectType__Fz7rKvpEKh9aDf9chc3kE2qw tyObject_wMenuItemcolonObjectType__Fz7rKvpEKh9aDf9chc3kE2qw;
typedef struct tyTuple_yh69bd2OuOhYRzIjAmTKbdA tyTuple_yh69bd2OuOhYRzIjAmTKbdA;
struct tyObject_DoublyLinkedList_lS8cbiVegM6G2dXDZSjosA {
tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w* head;
tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w* tail;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_wEventcolonObjectType__uUaAHKFmAV5MWgXoDq0lQQ* event, void* ClE_0);
void* ClE_0;
} tyProc_YYUaYYVWar3sptHT4LdXug;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc_IIomJ6ptE6vfJ5zRbATgkQ;
struct tyTuple_Q9cGQekOok3ahAXVy9axgf9aA {
NI32 Field0;
NI Field1;
tyProc_YYUaYYVWar3sptHT4LdXug Field2;
tyProc_IIomJ6ptE6vfJ5zRbATgkQ Field3;
NI Field4;
NIM_BOOL Field5;
};
struct tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w {
tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w* next;
tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w* prev;
tyTuple_Q9cGQekOok3ahAXVy9axgf9aA value;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct RootObj {
TNimType* m_type;
};
typedef NI8 tyArray_EUdzkGykm9crxB9b8gAu6G8g[256];
struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
struct tyObject_wEventcolonObjectType__uUaAHKFmAV5MWgXoDq0lQQ {
  RootObj Sup;
tyObject_wWindowcolonObjectType__JkYbaVH1UCpF9cuhB5gH9c4w* mWindow;
NI mOrigin;
NI32 mMsg;
NI mId;
NU64 mWparam;
NI64 mLparam;
NI mUserData;
NIM_BOOL mSkip;
NI mPropagationLevel;
NI64 mResult;
tyArray_EUdzkGykm9crxB9b8gAu6G8g mKeyStatus;
tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ mMousePos;
tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ mClientPos;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_wResizablecolonObjectType__wctsRw6gBM4o9b7WTG7sM9aA {
  RootObj Sup;
tyObject_VariablecolonObjectType__lxa06ORp9bdmcVMa6w4sGbw* mLeft;
tyObject_VariablecolonObjectType__lxa06ORp9bdmcVMa6w4sGbw* mRight;
tyObject_VariablecolonObjectType__lxa06ORp9bdmcVMa6w4sGbw* mTop;
tyObject_VariablecolonObjectType__lxa06ORp9bdmcVMa6w4sGbw* mBottom;
};
struct tyTuple_FtZxsWeKlOo83uVL9c4OOmg {
NI Field0;
NI Field1;
NI Field2;
NI Field3;
};
struct tyObject_Table_Nzd0y9bF9cqcqPaWbUEDIDXQ {
tySequence_9cOTMEBwo55wzlZjPFOYQHg* data;
NI counter;
};
struct tyObject_wWindowcolonObjectType__JkYbaVH1UCpF9cuhB5gH9c4w {
  tyObject_wResizablecolonObjectType__wctsRw6gBM4o9b7WTG7sM9aA Sup;
NI mHwnd;
tyObject_wWindowcolonObjectType__JkYbaVH1UCpF9cuhB5gH9c4w* mParent;
tySequence_ycFDskWNp4jtk39aIuuDoHA* mChildren;
tyTuple_FtZxsWeKlOo83uVL9c4OOmg mMargin;
tyObject_wStatusBarcolonObjectType__vo8kVIAtbX1itw5NocPmLg* mStatusBar;
tyObject_wToolBarcolonObjectType__2sEaVgZyXWY9cWOfPC9cBlSQ* mToolBar;
tyObject_wFontcolonObjectType__X29b7QPs6exs9afv638QYRrQ* mFont;
NI32 mBackgroundColor;
NI32 mForegroundColor;
tyObject_wBrushcolonObjectType__wtTQ9a2eLTnt89be63Xu9cFtw* mBackgroundBrush;
tyObject_wCursorcolonObjectType__L42FjqGXK6RB9a40yintB9aw* mCursor;
tyObject_wCursorcolonObjectType__L42FjqGXK6RB9a40yintB9aw* mOverrideCursor;
tyObject_Table_Nzd0y9bF9cqcqPaWbUEDIDXQ mSystemConnectionTable;
tyObject_Table_Nzd0y9bF9cqcqPaWbUEDIDXQ mConnectionTable;
tyObject_wAcceleratorTablecolonObjectType__Jf9cEoqNXWroaftMQTNNUDg* mAcceleratorTable;
tyObject_wWindowcolonObjectType__JkYbaVH1UCpF9cuhB5gH9c4w* mSaveFocus;
NIM_BOOL mFocusable;
tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ mMaxSize;
tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ mMinSize;
NI mDummyParent;
NIM_BOOL mMouseInWindow;
tyObject_wSizingInfocolonObjectType__Aa2dIYi6KZnI9ckxCpb5Xww* mSizingInfo;
tyObject_wDraggableInfocolonObjectType__2BZLwTupJRTWgL4PaL9cWZw* mDraggableInfo;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tyObject_VariablecolonObjectType__lxa06ORp9bdmcVMa6w4sGbw {
NimStringDesc* mName;
NF value;
};
struct tyObject_wControlcolonObjectType__yeTY9aITRoONBr9bxxLt04SA {
  tyObject_wWindowcolonObjectType__JkYbaVH1UCpF9cuhB5gH9c4w Sup;
};
typedef NI32 tyArray_5SV2SHwn9afaDnWBL2ydsJw[256];
struct tyObject_wStatusBarcolonObjectType__vo8kVIAtbX1itw5NocPmLg {
  tyObject_wControlcolonObjectType__yeTY9aITRoONBr9bxxLt04SA Sup;
NI mFiledNumbers;
tyArray_5SV2SHwn9afaDnWBL2ydsJw mWidths;
};
struct tyObject_wToolBarcolonObjectType__2sEaVgZyXWY9cWOfPC9cBlSQ {
  tyObject_wControlcolonObjectType__yeTY9aITRoONBr9bxxLt04SA Sup;
tySequence_T0z34G8Ya9cBkfJWxv7RbzA* mTools;
};
struct tyObject_wGdiObjectcolonObjectType__8tqtxPp3JdHT18Fg357l6Q {
  RootObj Sup;
NI mHandle;
};
struct tyObject_wFontcolonObjectType__X29b7QPs6exs9afv638QYRrQ {
  tyObject_wGdiObjectcolonObjectType__8tqtxPp3JdHT18Fg357l6Q Sup;
NF mPointSize;
NI mFamily;
NI mWeight;
NIM_BOOL mItalic;
NIM_BOOL mUnderline;
NimStringDesc* mFaceName;
NI mEncoding;
};
struct tyObject_wBrushcolonObjectType__wtTQ9a2eLTnt89be63Xu9cFtw {
  tyObject_wGdiObjectcolonObjectType__8tqtxPp3JdHT18Fg357l6Q Sup;
NI32 mColor;
NI32 mStyle;
};
struct tyObject_wCursorcolonObjectType__L42FjqGXK6RB9a40yintB9aw {
  tyObject_wGdiObjectcolonObjectType__8tqtxPp3JdHT18Fg357l6Q Sup;
NIM_BOOL mDeletable;
NIM_BOOL mIconResource;
};
struct tyTuple_5FmmQw5czEqyIS6OX5ADRQ {
NI Field0;
NI32 Field1;
tyObject_DoublyLinkedList_lS8cbiVegM6G2dXDZSjosA Field2;
};
struct tyObject_wAcceleratorTablecolonObjectType__Jf9cEoqNXWroaftMQTNNUDg {
  RootObj Sup;
NI mHandle;
tySequence_0YDEcvfYupp19cAmp9bz9c5EA* mAccels;
NIM_BOOL mModified;
};
struct tyTuple_KNeKpKPHFicng4e3OvpAWQ {
NIM_BOOL Field0;
NIM_BOOL Field1;
NIM_BOOL Field2;
NIM_BOOL Field3;
};
struct tyTuple_aAVnisOFnmoSd9cfJ9aQgJNw {
tyTuple_Q9cGQekOok3ahAXVy9axgf9aA Field0;
tyTuple_Q9cGQekOok3ahAXVy9axgf9aA Field1;
tyTuple_Q9cGQekOok3ahAXVy9axgf9aA Field2;
};
struct tyObject_wSizingInfocolonObjectType__Aa2dIYi6KZnI9ckxCpb5Xww {
tyTuple_FtZxsWeKlOo83uVL9c4OOmg border;
NIM_BOOL dragging;
tyTuple_KNeKpKPHFicng4e3OvpAWQ ready;
tyTuple_FtZxsWeKlOo83uVL9c4OOmg offset;
tyTuple_aAVnisOFnmoSd9cfJ9aQgJNw connection;
};
struct tyObject_wDraggableInfocolonObjectType__2BZLwTupJRTWgL4PaL9cWZw {
NIM_BOOL enable;
NIM_BOOL inClient;
NIM_BOOL dragging;
tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ startMousePos;
tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ startPos;
tyTuple_aAVnisOFnmoSd9cfJ9aQgJNw connection;
};
struct tyObject_ACCEL_IwPxdEWRYYSQ39bY1mW9aFeQ {
NU8 fVirt;
NU16 key;
NU16 cmd;
};
struct tyObject_wToolBarToolcolonObjectType__Mevf0bX1yAVjI8KJD0HIqw {
  RootObj Sup;
tyObject_wBitmapcolonObjectType__iQ6sGy0YDhzCvfKqbg9anUw* mBitmap;
NimStringDesc* mShortHelp;
NimStringDesc* mLongHelp;
tyObject_wMenucolonObjectType__fCPsDvxqCFVsAnPEAAb0Jw* mMenu;
};
struct tyObject_wBitmapcolonObjectType__iQ6sGy0YDhzCvfKqbg9anUw {
  tyObject_wGdiObjectcolonObjectType__8tqtxPp3JdHT18Fg357l6Q Sup;
NI mWidth;
NI mHeight;
NI mDepth;
};
struct tyObject_wMenuBasecolonObjectType__sJxVdMGMr78Iy2Qznhvbjg {
  RootObj Sup;
NI mHmenu;
};
struct tyObject_CountTable_9cp9cpkNj9aQOr76ZTLeDIRUA {
tySequence_ZQphAAUq7LCG9brR1SFDrPg* data;
NI counter;
};
struct tyObject_wMenucolonObjectType__fCPsDvxqCFVsAnPEAAb0Jw {
  tyObject_wMenuBasecolonObjectType__sJxVdMGMr78Iy2Qznhvbjg Sup;
tyObject_wBitmapcolonObjectType__iQ6sGy0YDhzCvfKqbg9anUw* mBitmap;
tySequence_GEQhRx9bHjh7gn2K1qTnG8A* mItemList;
tyObject_CountTable_9cp9cpkNj9aQOr76ZTLeDIRUA mParentMenuCountTable;
};
struct tyTuple_yh69bd2OuOhYRzIjAmTKbdA {
tyObject_wMenuBasecolonObjectType__sJxVdMGMr78Iy2Qznhvbjg* Field0;
NI Field1;
};
typedef NU8 tyEnum_wMenuItemKind_xoUEUOF1NJDD46SUwt05kQ;
struct tyObject_wMenuItemcolonObjectType__Fz7rKvpEKh9aDf9chc3kE2qw {
  RootObj Sup;
NI mId;
tyEnum_wMenuItemKind_xoUEUOF1NJDD46SUwt05kQ mKind;
NimStringDesc* mText;
NimStringDesc* mHelp;
tyObject_wBitmapcolonObjectType__iQ6sGy0YDhzCvfKqbg9anUw* mBitmap;
tyObject_wMenucolonObjectType__fCPsDvxqCFVsAnPEAAb0Jw* mSubmenu;
tyObject_wMenucolonObjectType__fCPsDvxqCFVsAnPEAAb0Jw* mParentMenu;
};
struct tySequence_ycFDskWNp4jtk39aIuuDoHA {
  TGenericSeq Sup;
  tyObject_wWindowcolonObjectType__JkYbaVH1UCpF9cuhB5gH9c4w* data[SEQ_DECL_SIZE];
};
struct tySequence_9cOTMEBwo55wzlZjPFOYQHg {
  TGenericSeq Sup;
  tyTuple_5FmmQw5czEqyIS6OX5ADRQ data[SEQ_DECL_SIZE];
};
struct tySequence_T0z34G8Ya9cBkfJWxv7RbzA {
  TGenericSeq Sup;
  tyObject_wToolBarToolcolonObjectType__Mevf0bX1yAVjI8KJD0HIqw* data[SEQ_DECL_SIZE];
};
struct tySequence_0YDEcvfYupp19cAmp9bz9c5EA {
  TGenericSeq Sup;
  tyObject_ACCEL_IwPxdEWRYYSQ39bY1mW9aFeQ data[SEQ_DECL_SIZE];
};
struct tySequence_GEQhRx9bHjh7gn2K1qTnG8A {
  TGenericSeq Sup;
  tyObject_wMenuItemcolonObjectType__Fz7rKvpEKh9aDf9chc3kE2qw* data[SEQ_DECL_SIZE];
};
struct tySequence_ZQphAAUq7LCG9brR1SFDrPg {
  TGenericSeq Sup;
  tyTuple_yh69bd2OuOhYRzIjAmTKbdA data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef_MnGD0WmAe2c3Xp0ormG9bWA)(void* p, NI op);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, append_nonmUPxAZwt1UM9bgJBcx1A_2)(tyObject_DoublyLinkedList_lS8cbiVegM6G2dXDZSjosA* L, tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w* n);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w*, newDoublyLinkedNode_l0KbVZhfZxOXf7LVHURkew)(tyTuple_Q9cGQekOok3ahAXVy9axgf9aA* value);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(void, genericAssign)(void* dest, void* src, TNimType* mt);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
TNimType NTI_lS8cbiVegM6G2dXDZSjosA_;
TNimType NTI_1vaaI59c77NJCwY6W4au9c8w_;
extern TNimType NTI_Q9cGQekOok3ahAXVy9axgf9aA_;
TNimType NTI_MnGD0WmAe2c3Xp0ormG9bWA_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_GgdsoWf9aLiRcyab0ssmwlQ_4, "L.tail.next == nil ", 19);
static N_NIMCALL(void, Marker_tyRef_MnGD0WmAe2c3Xp0ormG9bWA)(void* p, NI op) {
	tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w* a;
	a = (tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w*)p;
	nimGCvisit((void*)(*a).next, op);
	nimGCvisit((void*)(*a).prev, op);
	nimGCvisit((void*)(*a).value.Field2.ClE_0, op);
	nimGCvisit((void*)(*a).value.Field3.ClE_0, op);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "gc.nim");
	nimln_(191, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	popFrame();
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(132, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(211, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "gc.nim");
	nimln_(218, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(219, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "gc.nim");
	nimln_(264, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		nimln_(398, "system.nim");
		nimln_(264, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	nimln_(265, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		nimln_(398, "system.nim");
		nimln_(265, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	nimln_(266, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, remove_nonmUPxAZwt1UM9bgJBcx1A)(tyObject_DoublyLinkedList_lS8cbiVegM6G2dXDZSjosA* L, tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w* n) {
	nimfr_("remove", "lists.nim");
	nimln_(192, "lists.nim");
	{
		if (!(n == (*L).tail)) goto LA3_;
		unsureAsgnRef((void**) (&(*L).tail), (*n).prev);
	}
	LA3_: ;
	nimln_(193, "lists.nim");
	{
		if (!(n == (*L).head)) goto LA7_;
		unsureAsgnRef((void**) (&(*L).head), (*n).next);
	}
	LA7_: ;
	nimln_(194, "lists.nim");
	{
		nimln_(398, "system.nim");
		nimln_(194, "lists.nim");
		if (!!(((*n).next == NIM_NIL))) goto LA11_;
		asgnRef((void**) (&(*(*n).next).prev), (*n).prev);
	}
	LA11_: ;
	nimln_(195, "lists.nim");
	{
		nimln_(398, "system.nim");
		nimln_(195, "lists.nim");
		if (!!(((*n).prev == NIM_NIL))) goto LA15_;
		asgnRef((void**) (&(*(*n).prev).next), (*n).next);
	}
	LA15_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, append_nonmUPxAZwt1UM9bgJBcx1A_2)(tyObject_DoublyLinkedList_lS8cbiVegM6G2dXDZSjosA* L, tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w* n) {
	nimfr_("append", "lists.nim");
	nimln_(164, "lists.nim");
	asgnRef((void**) (&(*n).next), NIM_NIL);
	nimln_(165, "lists.nim");
	asgnRef((void**) (&(*n).prev), (*L).tail);
	nimln_(166, "lists.nim");
	{
		nimln_(398, "system.nim");
		nimln_(166, "lists.nim");
		if (!!(((*L).tail == NIM_NIL))) goto LA3_;
		nimln_(167, "lists.nim");
		{
			if (!!(((*(*L).tail).next == NIM_NIL))) goto LA7_;
			failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_GgdsoWf9aLiRcyab0ssmwlQ_4));
		}
		LA7_: ;
		nimln_(168, "lists.nim");
		asgnRef((void**) (&(*(*L).tail).next), n);
	}
	LA3_: ;
	nimln_(169, "lists.nim");
	unsureAsgnRef((void**) (&(*L).tail), n);
	nimln_(170, "lists.nim");
	{
		if (!((*L).head == NIM_NIL)) goto LA11_;
		unsureAsgnRef((void**) (&(*L).head), n);
	}
	LA11_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w*, newDoublyLinkedNode_l0KbVZhfZxOXf7LVHURkew)(tyTuple_Q9cGQekOok3ahAXVy9axgf9aA* value) {
	tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w* result;
	nimfr_("newDoublyLinkedNode", "lists.nim");
	result = (tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w*)0;
	nimln_(75, "lists.nim");
	result = (tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w*) newObj((&NTI_MnGD0WmAe2c3Xp0ormG9bWA_), sizeof(tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w));
	nimln_(76, "lists.nim");
	genericAssign((void*)(&(*result).value), (void*)value, (&NTI_Q9cGQekOok3ahAXVy9axgf9aA_));
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, append_h1IDYhK7c1jpYI9a7hHYN6Q)(tyObject_DoublyLinkedList_lS8cbiVegM6G2dXDZSjosA* L, tyTuple_Q9cGQekOok3ahAXVy9axgf9aA* value) {
	tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w* T1_;
	nimfr_("append", "lists.nim");
	nimln_(174, "lists.nim");
	T1_ = (tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w*)0;
	T1_ = newDoublyLinkedNode_l0KbVZhfZxOXf7LVHURkew(value);
	append_nonmUPxAZwt1UM9bgJBcx1A_2(L, T1_);
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, initDoublyLinkedList_XTQU4II0r6JwMq5Ij3pi4g)(tyObject_DoublyLinkedList_lS8cbiVegM6G2dXDZSjosA* Result) {
	nimfr_("initDoublyLinkedList", "lists.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_lS8cbiVegM6G2dXDZSjosA_));
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_listsInit000)(void) {
	nimfr_("lists", "lists.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_listsDatInit000)(void) {
static TNimNode* TM_GgdsoWf9aLiRcyab0ssmwlQ_2[2];
static TNimNode* TM_GgdsoWf9aLiRcyab0ssmwlQ_3[3];
static TNimNode TM_GgdsoWf9aLiRcyab0ssmwlQ_0[7];
NTI_lS8cbiVegM6G2dXDZSjosA_.size = sizeof(tyObject_DoublyLinkedList_lS8cbiVegM6G2dXDZSjosA);
NTI_lS8cbiVegM6G2dXDZSjosA_.kind = 18;
NTI_lS8cbiVegM6G2dXDZSjosA_.base = 0;
TM_GgdsoWf9aLiRcyab0ssmwlQ_2[0] = &TM_GgdsoWf9aLiRcyab0ssmwlQ_0[1];
NTI_1vaaI59c77NJCwY6W4au9c8w_.size = sizeof(tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w);
NTI_1vaaI59c77NJCwY6W4au9c8w_.kind = 18;
NTI_1vaaI59c77NJCwY6W4au9c8w_.base = 0;
TM_GgdsoWf9aLiRcyab0ssmwlQ_3[0] = &TM_GgdsoWf9aLiRcyab0ssmwlQ_0[3];
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[3].kind = 1;
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[3].offset = offsetof(tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w, next);
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[3].typ = (&NTI_MnGD0WmAe2c3Xp0ormG9bWA_);
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[3].name = "next";
TM_GgdsoWf9aLiRcyab0ssmwlQ_3[1] = &TM_GgdsoWf9aLiRcyab0ssmwlQ_0[4];
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[4].kind = 1;
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[4].offset = offsetof(tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w, prev);
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[4].typ = (&NTI_MnGD0WmAe2c3Xp0ormG9bWA_);
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[4].name = "prev";
TM_GgdsoWf9aLiRcyab0ssmwlQ_3[2] = &TM_GgdsoWf9aLiRcyab0ssmwlQ_0[5];
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[5].kind = 1;
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[5].offset = offsetof(tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w, value);
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[5].typ = (&NTI_Q9cGQekOok3ahAXVy9axgf9aA_);
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[5].name = "value";
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[2].len = 3; TM_GgdsoWf9aLiRcyab0ssmwlQ_0[2].kind = 2; TM_GgdsoWf9aLiRcyab0ssmwlQ_0[2].sons = &TM_GgdsoWf9aLiRcyab0ssmwlQ_3[0];
NTI_1vaaI59c77NJCwY6W4au9c8w_.node = &TM_GgdsoWf9aLiRcyab0ssmwlQ_0[2];
NTI_MnGD0WmAe2c3Xp0ormG9bWA_.size = sizeof(tyObject_DoublyLinkedNodeObj_1vaaI59c77NJCwY6W4au9c8w*);
NTI_MnGD0WmAe2c3Xp0ormG9bWA_.kind = 22;
NTI_MnGD0WmAe2c3Xp0ormG9bWA_.base = (&NTI_1vaaI59c77NJCwY6W4au9c8w_);
NTI_MnGD0WmAe2c3Xp0ormG9bWA_.marker = Marker_tyRef_MnGD0WmAe2c3Xp0ormG9bWA;
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[1].kind = 1;
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[1].offset = offsetof(tyObject_DoublyLinkedList_lS8cbiVegM6G2dXDZSjosA, head);
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[1].typ = (&NTI_MnGD0WmAe2c3Xp0ormG9bWA_);
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[1].name = "head";
TM_GgdsoWf9aLiRcyab0ssmwlQ_2[1] = &TM_GgdsoWf9aLiRcyab0ssmwlQ_0[6];
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[6].kind = 1;
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[6].offset = offsetof(tyObject_DoublyLinkedList_lS8cbiVegM6G2dXDZSjosA, tail);
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[6].typ = (&NTI_MnGD0WmAe2c3Xp0ormG9bWA_);
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[6].name = "tail";
TM_GgdsoWf9aLiRcyab0ssmwlQ_0[0].len = 2; TM_GgdsoWf9aLiRcyab0ssmwlQ_0[0].kind = 2; TM_GgdsoWf9aLiRcyab0ssmwlQ_0[0].sons = &TM_GgdsoWf9aLiRcyab0ssmwlQ_2[0];
NTI_lS8cbiVegM6G2dXDZSjosA_.node = &TM_GgdsoWf9aLiRcyab0ssmwlQ_0[0];
}

