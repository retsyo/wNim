/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   F:\nim\dist\mingw64\bin\gcc.exe -c  -w -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN  -IF:\nim\lib -o O:\nim\wnim\release\examples\nimcache\winim_commdlg.o O:\nim\wnim\release\examples\nimcache\winim_commdlg.c */
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
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct tyObject_OPENFILENAMEA_IWsqczjO6q3oljIkWT8AZg tyObject_OPENFILENAMEA_IWsqczjO6q3oljIkWT8AZg;
typedef struct tyObject_OPENFILENAMEW_QPxmzpM9c6XgCUkufuFS3bA tyObject_OPENFILENAMEW_QPxmzpM9c6XgCUkufuFS3bA;
typedef struct tyObject_TCHOOSECOLORA_4Hm9aseV06kgYRkWmrJBJDQ tyObject_TCHOOSECOLORA_4Hm9aseV06kgYRkWmrJBJDQ;
typedef struct tyObject_TCHOOSECOLORW_vt8jDycRX1uMmXg9bpVONBg tyObject_TCHOOSECOLORW_vt8jDycRX1uMmXg9bpVONBg;
typedef struct tyObject_FINDREPLACEA_x7I0MGQeytRs5THUEx6gDA tyObject_FINDREPLACEA_x7I0MGQeytRs5THUEx6gDA;
typedef struct tyObject_FINDREPLACEW_gjxzxt1WuH8N5ekTmrEYqg tyObject_FINDREPLACEW_gjxzxt1WuH8N5ekTmrEYqg;
typedef struct tyObject_TCHOOSEFONTA_I9b9bkHIfeRzKZ9cMvWKSbzRw tyObject_TCHOOSEFONTA_I9b9bkHIfeRzKZ9cMvWKSbzRw;
typedef struct tyObject_TCHOOSEFONTW_l9bBUAUht8bwMW4LYIH0qCw tyObject_TCHOOSEFONTW_l9bBUAUht8bwMW4LYIH0qCw;
typedef struct tyObject_TPRINTDLGA_ed439a6QCY11TA9aPrvY1XNw tyObject_TPRINTDLGA_ed439a6QCY11TA9aPrvY1XNw;
typedef struct tyObject_TPRINTDLGW_L9cIxeSNz1yP1pb1qzbWk6Q tyObject_TPRINTDLGW_L9cIxeSNz1yP1pb1qzbWk6Q;
typedef struct tyObject_TPRINTDLGEXA_Fc4ApT3pYWC4iTUojP2eyw tyObject_TPRINTDLGEXA_Fc4ApT3pYWC4iTUojP2eyw;
typedef struct tyObject_TPRINTDLGEXW_oCIbLynl9cFeREKrW3CCjrQ tyObject_TPRINTDLGEXW_oCIbLynl9cFeREKrW3CCjrQ;
typedef struct tyObject_TPAGESETUPDLGA_WRQE70ioaogAV9cumBQHlhg tyObject_TPAGESETUPDLGA_WRQE70ioaogAV9cumBQHlhg;
typedef struct tyObject_TPAGESETUPDLGW_X7mXTDgc0qwgCqShXkY6zg tyObject_TPAGESETUPDLGW_X7mXTDgc0qwgCqShXkY6zg;
typedef struct tyObject_IPrintDialogCallback_8Bpmlgb3SzszUfz5suxUCA tyObject_IPrintDialogCallback_8Bpmlgb3SzszUfz5suxUCA;
typedef struct tyObject_IPrintDialogCallbackVtbl_x8LD4nVtuUYEzMJZ0Kz9bHQ tyObject_IPrintDialogCallbackVtbl_x8LD4nVtuUYEzMJZ0Kz9bHQ;
typedef struct tyObject_IUnknownVtbl_jF4R4hWZYkQD9a5uVek42vg tyObject_IUnknownVtbl_jF4R4hWZYkQD9a5uVek42vg;
typedef struct tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw;
typedef struct tyObject_GUID_vR9aKCQzKs1RAi9cxPq9bGGlA tyObject_GUID_vR9aKCQzKs1RAi9cxPq9bGGlA;
typedef struct tyObject_IPrintDialogServices_gJ7ZjCkpdRr3BYFCflq9cZQ tyObject_IPrintDialogServices_gJ7ZjCkpdRr3BYFCflq9cZQ;
typedef struct tyObject_DEVMODEW_Uko7qei83Yna9cTm7xqpm5w tyObject_DEVMODEW_Uko7qei83Yna9cTm7xqpm5w;
typedef struct tyObject_IPrintDialogServicesVtbl_wvhI59c5iIWD8MKM6vfJUig tyObject_IPrintDialogServicesVtbl_wvhI59c5iIWD8MKM6vfJUig;
typedef struct tyObject_LOGFONTA_ayLEApts5laMsW9bylfjOag tyObject_LOGFONTA_ayLEApts5laMsW9bylfjOag;
typedef struct tyObject_LOGFONTW_HgUEcqmFKsVS3dk9cdQDtqA tyObject_LOGFONTW_HgUEcqmFKsVS3dk9cdQDtqA;
typedef struct tyObject_PRINTPAGERANGE_knyGryaz7cCtEUrojFzwYQ tyObject_PRINTPAGERANGE_knyGryaz7cCtEUrojFzwYQ;
typedef struct tyObject_POINT_eU7ttD7IK05SomCeB4DvtQ tyObject_POINT_eU7ttD7IK05SomCeB4DvtQ;
typedef struct tyObject_RECT_PJphXZpzNeU5sJMvI3zTPw tyObject_RECT_PJphXZpzNeU5sJMvI3zTPw;
typedef union tyObject_DEVMODEW_UNION1_9cMp186XjXJHxRUvLXPE6lw tyObject_DEVMODEW_UNION1_9cMp186XjXJHxRUvLXPE6lw;
typedef struct tyObject_DEVMODEW_UNION1_STRUCT1_U9ad9catgzRbLRm9bxmTlFvEg tyObject_DEVMODEW_UNION1_STRUCT1_U9ad9catgzRbLRm9bxmTlFvEg;
typedef struct tyObject_DEVMODEW_UNION1_STRUCT2_uNJnayH4X8DwKz8IWp15FQ tyObject_DEVMODEW_UNION1_STRUCT2_uNJnayH4X8DwKz8IWp15FQ;
typedef struct tyObject_POINTL_AkmAxQT2hNZH8UKD41H2Hw tyObject_POINTL_AkmAxQT2hNZH8UKD41H2Hw;
typedef union tyObject_DEVMODEW_UNION2_9bquAqbtSvS7BR9ai3aFvebQ tyObject_DEVMODEW_UNION2_9bquAqbtSvS7BR9ai3aFvebQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(NI32, tyProc_mVXOb7jWqp4Jo1LduS9bPxA) (tyObject_OPENFILENAMEA_IWsqczjO6q3oljIkWT8AZg* P1);
typedef N_STDCALL_PTR(NI32, tyProc_ri43SDy9cxT6wQrQ7RqUxJg) (tyObject_OPENFILENAMEW_QPxmzpM9c6XgCUkufuFS3bA* P1);
typedef N_STDCALL_PTR(NI16, tyProc_OWfSvVyJ0UeWGoy7Df2NJg) (NCSTRING P1, NCSTRING P2, NU16 P3);
typedef N_STDCALL_PTR(NI16, tyProc_mne9cmLVtlw7aXBXor9bszdw) (NU16* P1, NU16* P2, NU16 P3);
typedef N_STDCALL_PTR(NI32, tyProc_4sevyjU4ImAoC2GlSvt5sQ) (tyObject_TCHOOSECOLORA_4Hm9aseV06kgYRkWmrJBJDQ* P1);
typedef N_STDCALL_PTR(NI32, tyProc_G9cVC4YCMi8dOtxZU8UOsMw) (tyObject_TCHOOSECOLORW_vt8jDycRX1uMmXg9bpVONBg* P1);
typedef N_STDCALL_PTR(NI, tyProc_XA4GnqygRBfjEUiN9caYAeA) (tyObject_FINDREPLACEA_x7I0MGQeytRs5THUEx6gDA* P1);
typedef N_STDCALL_PTR(NI, tyProc_6SXgKcejbJGCV9b0bA4q9bpw) (tyObject_FINDREPLACEW_gjxzxt1WuH8N5ekTmrEYqg* P1);
typedef N_STDCALL_PTR(NI32, tyProc_uEILy6iAC9codB9b3UqnHAaA) (tyObject_TCHOOSEFONTA_I9b9bkHIfeRzKZ9cMvWKSbzRw* P1);
typedef N_STDCALL_PTR(NI32, tyProc_BLxlTIREa5VdJVIg9bji3yw) (tyObject_TCHOOSEFONTW_l9bBUAUht8bwMW4LYIH0qCw* P1);
typedef N_STDCALL_PTR(NI32, tyProc_nIRhNkfh6yN5Z5KjGM9c36A) (tyObject_TPRINTDLGA_ed439a6QCY11TA9aPrvY1XNw* P1);
typedef N_STDCALL_PTR(NI32, tyProc_E0KSPnR19b9aIdroFCNP29cBg) (tyObject_TPRINTDLGW_L9cIxeSNz1yP1pb1qzbWk6Q* P1);
typedef N_STDCALL_PTR(NI32, tyProc_nyevyHwQIVD07W8rmBr4Og) (tyObject_TPRINTDLGEXA_Fc4ApT3pYWC4iTUojP2eyw* P1);
typedef N_STDCALL_PTR(NI32, tyProc_HcrCQ2BjH1TBxtcHsT2osQ) (tyObject_TPRINTDLGEXW_oCIbLynl9cFeREKrW3CCjrQ* P1);
typedef N_STDCALL_PTR(NI32, tyProc_9bXer9a4ps9aSGctILcxWReVw) (void);
typedef N_STDCALL_PTR(NI32, tyProc_N9c5mwOmXGVwBIKrFPybicw) (tyObject_TPAGESETUPDLGA_WRQE70ioaogAV9cumBQHlhg* P1);
typedef N_STDCALL_PTR(NI32, tyProc_7AEjJshati05DkZTE9bPYmQ) (tyObject_TPAGESETUPDLGW_X7mXTDgc0qwgCqShXkY6zg* P1);
struct tyObject_IPrintDialogCallback_8Bpmlgb3SzszUfz5suxUCA {
tyObject_IPrintDialogCallbackVtbl_x8LD4nVtuUYEzMJZ0Kz9bHQ* lpVtbl;
};
typedef N_STDCALL_PTR(NI32, tyProc_9bWBI5aELdW2XHTbyYNjFXQ) (tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw* self, tyObject_GUID_vR9aKCQzKs1RAi9cxPq9bGGlA* riid, void** ppvObject);
typedef N_STDCALL_PTR(NI32, tyProc_3MBg39aXrFJCcyBWUf6B79aQ) (tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw* self);
struct tyObject_IUnknownVtbl_jF4R4hWZYkQD9a5uVek42vg {
tyProc_9bWBI5aELdW2XHTbyYNjFXQ QueryInterface;
tyProc_3MBg39aXrFJCcyBWUf6B79aQ AddRef;
tyProc_3MBg39aXrFJCcyBWUf6B79aQ Release;
};
typedef N_STDCALL_PTR(NI32, tyProc_qz5YvuWEytcV2Osxtx4XFg) (tyObject_IPrintDialogCallback_8Bpmlgb3SzszUfz5suxUCA* self);
typedef N_STDCALL_PTR(NI32, tyProc_lIg6yzzXT8HbBtjmf1vTvw) (tyObject_IPrintDialogCallback_8Bpmlgb3SzszUfz5suxUCA* self, NI hDlg, NI32 uMsg, NU64 wParam, NI64 lParam, NI64* pResult);
struct tyObject_IPrintDialogCallbackVtbl_x8LD4nVtuUYEzMJZ0Kz9bHQ {
  tyObject_IUnknownVtbl_jF4R4hWZYkQD9a5uVek42vg Sup;
tyProc_qz5YvuWEytcV2Osxtx4XFg InitDone;
tyProc_qz5YvuWEytcV2Osxtx4XFg SelectionChange;
tyProc_lIg6yzzXT8HbBtjmf1vTvw HandleMessage;
};
struct tyObject_IPrintDialogServices_gJ7ZjCkpdRr3BYFCflq9cZQ {
tyObject_IPrintDialogServicesVtbl_wvhI59c5iIWD8MKM6vfJUig* lpVtbl;
};
typedef N_STDCALL_PTR(NI32, tyProc_BQ9cqs1AAm2MGY02wvBvudg) (tyObject_IPrintDialogServices_gJ7ZjCkpdRr3BYFCflq9cZQ* self, tyObject_DEVMODEW_Uko7qei83Yna9cTm7xqpm5w* pDevMode, NI32* pcbSize);
typedef N_STDCALL_PTR(NI32, tyProc_EolJ4YM36g82dyKNpMBZ9aw) (tyObject_IPrintDialogServices_gJ7ZjCkpdRr3BYFCflq9cZQ* self, NU16* pPrinterName, NI32* pcchSize);
struct tyObject_IPrintDialogServicesVtbl_wvhI59c5iIWD8MKM6vfJUig {
  tyObject_IUnknownVtbl_jF4R4hWZYkQD9a5uVek42vg Sup;
tyProc_BQ9cqs1AAm2MGY02wvBvudg GetCurrentDevMode;
tyProc_EolJ4YM36g82dyKNpMBZ9aw GetCurrentPrinterName;
tyProc_EolJ4YM36g82dyKNpMBZ9aw GetCurrentPortName;
};
typedef N_STDCALL_PTR(NU64, tyProc_yaJrLVbc3Qmov28CM7URMQ) (NI P1, NI32 P2, NU64 P3, NI64 P4);
struct tyObject_OPENFILENAMEA_IWsqczjO6q3oljIkWT8AZg {
NI32 lStructSize;
NI hwndOwner;
NI hInstance;
NCSTRING lpstrFilter;
NCSTRING lpstrCustomFilter;
NI32 nMaxCustFilter;
NI32 nFilterIndex;
NCSTRING lpstrFile;
NI32 nMaxFile;
NCSTRING lpstrFileTitle;
NI32 nMaxFileTitle;
NCSTRING lpstrInitialDir;
NCSTRING lpstrTitle;
NI32 Flags;
NU16 nFileOffset;
NU16 nFileExtension;
NCSTRING lpstrDefExt;
NI64 lCustData;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnHook;
NCSTRING lpTemplateName;
void* pvReserved;
NI32 dwReserved;
NI32 FlagsEx;
};
struct tyObject_OPENFILENAMEW_QPxmzpM9c6XgCUkufuFS3bA {
NI32 lStructSize;
NI hwndOwner;
NI hInstance;
NU16* lpstrFilter;
NU16* lpstrCustomFilter;
NI32 nMaxCustFilter;
NI32 nFilterIndex;
NU16* lpstrFile;
NI32 nMaxFile;
NU16* lpstrFileTitle;
NI32 nMaxFileTitle;
NU16* lpstrInitialDir;
NU16* lpstrTitle;
NI32 Flags;
NU16 nFileOffset;
NU16 nFileExtension;
NU16* lpstrDefExt;
NI64 lCustData;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnHook;
NU16* lpTemplateName;
void* pvReserved;
NI32 dwReserved;
NI32 FlagsEx;
};
struct tyObject_TCHOOSECOLORA_4Hm9aseV06kgYRkWmrJBJDQ {
NI32 lStructSize;
NI hwndOwner;
NI hInstance;
NI32 rgbResult;
NI32* lpCustColors;
NI32 Flags;
NI64 lCustData;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnHook;
NCSTRING lpTemplateName;
};
struct tyObject_TCHOOSECOLORW_vt8jDycRX1uMmXg9bpVONBg {
NI32 lStructSize;
NI hwndOwner;
NI hInstance;
NI32 rgbResult;
NI32* lpCustColors;
NI32 Flags;
NI64 lCustData;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnHook;
NU16* lpTemplateName;
};
struct tyObject_FINDREPLACEA_x7I0MGQeytRs5THUEx6gDA {
NI32 lStructSize;
NI hwndOwner;
NI hInstance;
NI32 Flags;
NCSTRING lpstrFindWhat;
NCSTRING lpstrReplaceWith;
NU16 wFindWhatLen;
NU16 wReplaceWithLen;
NI64 lCustData;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnHook;
NCSTRING lpTemplateName;
};
struct tyObject_FINDREPLACEW_gjxzxt1WuH8N5ekTmrEYqg {
NI32 lStructSize;
NI hwndOwner;
NI hInstance;
NI32 Flags;
NU16* lpstrFindWhat;
NU16* lpstrReplaceWith;
NU16 wFindWhatLen;
NU16 wReplaceWithLen;
NI64 lCustData;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnHook;
NU16* lpTemplateName;
};
struct tyObject_TCHOOSEFONTA_I9b9bkHIfeRzKZ9cMvWKSbzRw {
NI32 lStructSize;
NI hwndOwner;
NI hDC;
tyObject_LOGFONTA_ayLEApts5laMsW9bylfjOag* lpLogFont;
NI32 iPointSize;
NI32 Flags;
NI32 rgbColors;
NI64 lCustData;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnHook;
NCSTRING lpTemplateName;
NI hInstance;
NCSTRING lpszStyle;
NU16 nFontType;
NU16 MISSING_ALIGNMENT;
NI32 nSizeMin;
NI32 nSizeMax;
};
struct tyObject_TCHOOSEFONTW_l9bBUAUht8bwMW4LYIH0qCw {
NI32 lStructSize;
NI hwndOwner;
NI hDC;
tyObject_LOGFONTW_HgUEcqmFKsVS3dk9cdQDtqA* lpLogFont;
NI32 iPointSize;
NI32 Flags;
NI32 rgbColors;
NI64 lCustData;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnHook;
NU16* lpTemplateName;
NI hInstance;
NU16* lpszStyle;
NU16 nFontType;
NU16 MISSING_ALIGNMENT;
NI32 nSizeMin;
NI32 nSizeMax;
};
struct tyObject_TPRINTDLGA_ed439a6QCY11TA9aPrvY1XNw {
NI32 lStructSize;
NI hwndOwner;
NI hDevMode;
NI hDevNames;
NI hDC;
NI32 Flags;
NU16 nFromPage;
NU16 nToPage;
NU16 nMinPage;
NU16 nMaxPage;
NU16 nCopies;
NI hInstance;
NI64 lCustData;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnPrintHook;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnSetupHook;
NCSTRING lpPrintTemplateName;
NCSTRING lpSetupTemplateName;
NI hPrintTemplate;
NI hSetupTemplate;
};
struct tyObject_TPRINTDLGW_L9cIxeSNz1yP1pb1qzbWk6Q {
NI32 lStructSize;
NI hwndOwner;
NI hDevMode;
NI hDevNames;
NI hDC;
NI32 Flags;
NU16 nFromPage;
NU16 nToPage;
NU16 nMinPage;
NU16 nMaxPage;
NU16 nCopies;
NI hInstance;
NI64 lCustData;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnPrintHook;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnSetupHook;
NU16* lpPrintTemplateName;
NU16* lpSetupTemplateName;
NI hPrintTemplate;
NI hSetupTemplate;
};
struct tyObject_TPRINTDLGEXA_Fc4ApT3pYWC4iTUojP2eyw {
NI32 lStructSize;
NI hwndOwner;
NI hDevMode;
NI hDevNames;
NI hDC;
NI32 Flags;
NI32 Flags2;
NI32 ExclusionFlags;
NI32 nPageRanges;
NI32 nMaxPageRanges;
tyObject_PRINTPAGERANGE_knyGryaz7cCtEUrojFzwYQ* lpPageRanges;
NI32 nMinPage;
NI32 nMaxPage;
NI32 nCopies;
NI hInstance;
NCSTRING lpPrintTemplateName;
tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw* lpCallback;
NI32 nPropertyPages;
NI* lphPropertyPages;
NI32 nStartPage;
NI32 dwResultAction;
};
struct tyObject_TPRINTDLGEXW_oCIbLynl9cFeREKrW3CCjrQ {
NI32 lStructSize;
NI hwndOwner;
NI hDevMode;
NI hDevNames;
NI hDC;
NI32 Flags;
NI32 Flags2;
NI32 ExclusionFlags;
NI32 nPageRanges;
NI32 nMaxPageRanges;
tyObject_PRINTPAGERANGE_knyGryaz7cCtEUrojFzwYQ* lpPageRanges;
NI32 nMinPage;
NI32 nMaxPage;
NI32 nCopies;
NI hInstance;
NU16* lpPrintTemplateName;
tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw* lpCallback;
NI32 nPropertyPages;
NI* lphPropertyPages;
NI32 nStartPage;
NI32 dwResultAction;
};
struct tyObject_POINT_eU7ttD7IK05SomCeB4DvtQ {
NI32 x;
NI32 y;
};
struct tyObject_RECT_PJphXZpzNeU5sJMvI3zTPw {
NI32 left;
NI32 top;
NI32 right;
NI32 bottom;
};
struct tyObject_TPAGESETUPDLGA_WRQE70ioaogAV9cumBQHlhg {
NI32 lStructSize;
NI hwndOwner;
NI hDevMode;
NI hDevNames;
NI32 Flags;
tyObject_POINT_eU7ttD7IK05SomCeB4DvtQ ptPaperSize;
tyObject_RECT_PJphXZpzNeU5sJMvI3zTPw rtMinMargin;
tyObject_RECT_PJphXZpzNeU5sJMvI3zTPw rtMargin;
NI hInstance;
NI64 lCustData;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnPageSetupHook;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnPagePaintHook;
NCSTRING lpPageSetupTemplateName;
NI hPageSetupTemplate;
};
struct tyObject_TPAGESETUPDLGW_X7mXTDgc0qwgCqShXkY6zg {
NI32 lStructSize;
NI hwndOwner;
NI hDevMode;
NI hDevNames;
NI32 Flags;
tyObject_POINT_eU7ttD7IK05SomCeB4DvtQ ptPaperSize;
tyObject_RECT_PJphXZpzNeU5sJMvI3zTPw rtMinMargin;
tyObject_RECT_PJphXZpzNeU5sJMvI3zTPw rtMargin;
NI hInstance;
NI64 lCustData;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnPageSetupHook;
tyProc_yaJrLVbc3Qmov28CM7URMQ lpfnPagePaintHook;
NU16* lpPageSetupTemplateName;
NI hPageSetupTemplate;
};
struct tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw {
tyObject_IUnknownVtbl_jF4R4hWZYkQD9a5uVek42vg* lpVtbl;
};
typedef NU8 tyArray_cdsir9aPB24hAk6k77P9b9bCA[8];
struct tyObject_GUID_vR9aKCQzKs1RAi9cxPq9bGGlA {
NI32 Data1;
NU16 Data2;
NU16 Data3;
tyArray_cdsir9aPB24hAk6k77P9b9bCA Data4;
};
typedef NU16 tyArray_9a9aAlfXLJPjHXnuFdEbFDFg[32];
struct tyObject_DEVMODEW_UNION1_STRUCT1_U9ad9catgzRbLRm9bxmTlFvEg {
NI16 dmOrientation;
NI16 dmPaperSize;
NI16 dmPaperLength;
NI16 dmPaperWidth;
NI16 dmScale;
NI16 dmCopies;
NI16 dmDefaultSource;
NI16 dmPrintQuality;
};
struct tyObject_POINTL_AkmAxQT2hNZH8UKD41H2Hw {
NI32 x;
NI32 y;
};
struct tyObject_DEVMODEW_UNION1_STRUCT2_uNJnayH4X8DwKz8IWp15FQ {
tyObject_POINTL_AkmAxQT2hNZH8UKD41H2Hw dmPosition;
NI32 dmDisplayOrientation;
NI32 dmDisplayFixedOutput;
};
union tyObject_DEVMODEW_UNION1_9cMp186XjXJHxRUvLXPE6lw {
tyObject_DEVMODEW_UNION1_STRUCT1_U9ad9catgzRbLRm9bxmTlFvEg struct1;
tyObject_DEVMODEW_UNION1_STRUCT2_uNJnayH4X8DwKz8IWp15FQ struct2;
};
union tyObject_DEVMODEW_UNION2_9bquAqbtSvS7BR9ai3aFvebQ {
NI32 dmDisplayFlags;
NI32 dmNup;
};
struct tyObject_DEVMODEW_Uko7qei83Yna9cTm7xqpm5w {
tyArray_9a9aAlfXLJPjHXnuFdEbFDFg dmDeviceName;
NU16 dmSpecVersion;
NU16 dmDriverVersion;
NU16 dmSize;
NU16 dmDriverExtra;
NI32 dmFields;
tyObject_DEVMODEW_UNION1_9cMp186XjXJHxRUvLXPE6lw union1;
NI16 dmColor;
NI16 dmDuplex;
NI16 dmYResolution;
NI16 dmTTOption;
NI16 dmCollate;
tyArray_9a9aAlfXLJPjHXnuFdEbFDFg dmFormName;
NU16 dmLogPixels;
NI32 dmBitsPerPel;
NI32 dmPelsWidth;
NI32 dmPelsHeight;
tyObject_DEVMODEW_UNION2_9bquAqbtSvS7BR9ai3aFvebQ union2;
NI32 dmDisplayFrequency;
NI32 dmICMMethod;
NI32 dmICMIntent;
NI32 dmMediaType;
NI32 dmDitherType;
NI32 dmReserved1;
NI32 dmReserved2;
NI32 dmPanningWidth;
NI32 dmPanningHeight;
};
typedef NIM_CHAR tyArray_x9aRkN8DVcTBDUl3hEPJutg[32];
struct tyObject_LOGFONTA_ayLEApts5laMsW9bylfjOag {
NI32 lfHeight;
NI32 lfWidth;
NI32 lfEscapement;
NI32 lfOrientation;
NI32 lfWeight;
NU8 lfItalic;
NU8 lfUnderline;
NU8 lfStrikeOut;
NU8 lfCharSet;
NU8 lfOutPrecision;
NU8 lfClipPrecision;
NU8 lfQuality;
NU8 lfPitchAndFamily;
tyArray_x9aRkN8DVcTBDUl3hEPJutg lfFaceName;
};
struct tyObject_LOGFONTW_HgUEcqmFKsVS3dk9cdQDtqA {
NI32 lfHeight;
NI32 lfWidth;
NI32 lfEscapement;
NI32 lfOrientation;
NI32 lfWeight;
NU8 lfItalic;
NU8 lfUnderline;
NU8 lfStrikeOut;
NU8 lfCharSet;
NU8 lfOutPrecision;
NU8 lfClipPrecision;
NU8 lfQuality;
NU8 lfPitchAndFamily;
tyArray_9a9aAlfXLJPjHXnuFdEbFDFg lfFaceName;
};
struct tyObject_PRINTPAGERANGE_knyGryaz7cCtEUrojFzwYQ {
NI32 nFromPage;
NI32 nToPage;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(NI32, InitDone_3rgDF4SsYWgHVTvNPXm39aAcommdlg)(tyObject_IPrintDialogCallback_8Bpmlgb3SzszUfz5suxUCA* self);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI32, SelectionChange_3rgDF4SsYWgHVTvNPXm39aA_2commdlg)(tyObject_IPrintDialogCallback_8Bpmlgb3SzszUfz5suxUCA* self);
static N_INLINE(NI32, HandleMessage_rEDEJu1u7VI39aoMvDUg2ogcommdlg)(tyObject_IPrintDialogCallback_8Bpmlgb3SzszUfz5suxUCA* self, NI hDlg, NI32 uMsg, NU64 wParam, NI64 lParam, NI64* pResult);
static N_INLINE(NI32, GetCurrentDevMode_9bmJM9a46T0DIVgs1U4trvNAcommdlg)(tyObject_IPrintDialogServices_gJ7ZjCkpdRr3BYFCflq9cZQ* self, tyObject_DEVMODEW_Uko7qei83Yna9cTm7xqpm5w* pDevMode, NI32* pcbSize);
static N_INLINE(NI32, GetCurrentPrinterName_9at9aRJTqmFezKo6mAMdIAeAcommdlg)(tyObject_IPrintDialogServices_gJ7ZjCkpdRr3BYFCflq9cZQ* self, NU16* pPrinterName, NI32* pcchSize);
static N_INLINE(NI32, GetCurrentPortName_D0pzAseESpJRjgadnhRxxQcommdlg)(tyObject_IPrintDialogServices_gJ7ZjCkpdRr3BYFCflq9cZQ* self, NU16* pPortName, NI32* pcchSize);
N_LIB_PRIVATE N_NIMCALL(tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw*, winimConverterIPrintDialogCallbackToIUnknown_9bWxTX2tUAn5p9c9akZwB1ztg)(tyObject_IPrintDialogCallback_8Bpmlgb3SzszUfz5suxUCA* x);
N_LIB_PRIVATE N_NIMCALL(tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw*, winimConverterIPrintDialogServicesToIUnknown_vg0wPLWC0NZCSFT25PBH0A)(tyObject_IPrintDialogServices_gJ7ZjCkpdRr3BYFCflq9cZQ* x);
static void* TM_j9bsvYo6jhGJJJAdtSNN6fg_2;
tyProc_mVXOb7jWqp4Jo1LduS9bPxA Dl_409913_;
tyProc_ri43SDy9cxT6wQrQ7RqUxJg Dl_409916_;
tyProc_mVXOb7jWqp4Jo1LduS9bPxA Dl_409919_;
tyProc_ri43SDy9cxT6wQrQ7RqUxJg Dl_409922_;
tyProc_OWfSvVyJ0UeWGoy7Df2NJg Dl_409925_;
tyProc_mne9cmLVtlw7aXBXor9bszdw Dl_409930_;
tyProc_4sevyjU4ImAoC2GlSvt5sQ Dl_409935_;
tyProc_G9cVC4YCMi8dOtxZU8UOsMw Dl_409938_;
tyProc_XA4GnqygRBfjEUiN9caYAeA Dl_409941_;
tyProc_6SXgKcejbJGCV9b0bA4q9bpw Dl_409944_;
tyProc_XA4GnqygRBfjEUiN9caYAeA Dl_409947_;
tyProc_6SXgKcejbJGCV9b0bA4q9bpw Dl_409950_;
tyProc_uEILy6iAC9codB9b3UqnHAaA Dl_409953_;
tyProc_BLxlTIREa5VdJVIg9bji3yw Dl_409956_;
tyProc_nIRhNkfh6yN5Z5KjGM9c36A Dl_409959_;
tyProc_E0KSPnR19b9aIdroFCNP29cBg Dl_409962_;
tyProc_nyevyHwQIVD07W8rmBr4Og Dl_409965_;
tyProc_HcrCQ2BjH1TBxtcHsT2osQ Dl_409968_;
tyProc_9bXer9a4ps9aSGctILcxWReVw Dl_409971_;
tyProc_N9c5mwOmXGVwBIKrFPybicw Dl_409973_;
tyProc_7AEjJshati05DkZTE9bPYmQ Dl_409976_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
tyProc_ri43SDy9cxT6wQrQ7RqUxJg Dl_410098_;
tyProc_ri43SDy9cxT6wQrQ7RqUxJg Dl_410101_;
tyProc_mne9cmLVtlw7aXBXor9bszdw Dl_410104_;
tyProc_G9cVC4YCMi8dOtxZU8UOsMw Dl_410109_;
tyProc_6SXgKcejbJGCV9b0bA4q9bpw Dl_410112_;
tyProc_6SXgKcejbJGCV9b0bA4q9bpw Dl_410115_;
tyProc_BLxlTIREa5VdJVIg9bji3yw Dl_410118_;
tyProc_E0KSPnR19b9aIdroFCNP29cBg Dl_410121_;
tyProc_HcrCQ2BjH1TBxtcHsT2osQ Dl_410124_;
tyProc_7AEjJshati05DkZTE9bPYmQ Dl_410127_;
STRING_LITERAL(TM_j9bsvYo6jhGJJJAdtSNN6fg_4, "comdlg32", 8);
STRING_LITERAL(TM_j9bsvYo6jhGJJJAdtSNN6fg_5, "comdlg32", 8);

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

static N_INLINE(NI32, InitDone_3rgDF4SsYWgHVTvNPXm39aAcommdlg)(tyObject_IPrintDialogCallback_8Bpmlgb3SzszUfz5suxUCA* self) {
	NI32 result;
	nimfr_("InitDone", "commdlg.nim");
	result = (NI32)0;
	nimln_(590, "commdlg.nim");
	result = (*(*self).lpVtbl).InitDone(self);
	popFrame();
	return result;
}

static N_INLINE(NI32, SelectionChange_3rgDF4SsYWgHVTvNPXm39aA_2commdlg)(tyObject_IPrintDialogCallback_8Bpmlgb3SzszUfz5suxUCA* self) {
	NI32 result;
	nimfr_("SelectionChange", "commdlg.nim");
	result = (NI32)0;
	nimln_(591, "commdlg.nim");
	result = (*(*self).lpVtbl).SelectionChange(self);
	popFrame();
	return result;
}

static N_INLINE(NI32, HandleMessage_rEDEJu1u7VI39aoMvDUg2ogcommdlg)(tyObject_IPrintDialogCallback_8Bpmlgb3SzszUfz5suxUCA* self, NI hDlg, NI32 uMsg, NU64 wParam, NI64 lParam, NI64* pResult) {
	NI32 result;
	nimfr_("HandleMessage", "commdlg.nim");
	result = (NI32)0;
	nimln_(592, "commdlg.nim");
	result = (*(*self).lpVtbl).HandleMessage(self, hDlg, uMsg, wParam, lParam, pResult);
	popFrame();
	return result;
}

static N_INLINE(NI32, GetCurrentDevMode_9bmJM9a46T0DIVgs1U4trvNAcommdlg)(tyObject_IPrintDialogServices_gJ7ZjCkpdRr3BYFCflq9cZQ* self, tyObject_DEVMODEW_Uko7qei83Yna9cTm7xqpm5w* pDevMode, NI32* pcbSize) {
	NI32 result;
	nimfr_("GetCurrentDevMode", "commdlg.nim");
	result = (NI32)0;
	nimln_(593, "commdlg.nim");
	result = (*(*self).lpVtbl).GetCurrentDevMode(self, pDevMode, pcbSize);
	popFrame();
	return result;
}

static N_INLINE(NI32, GetCurrentPrinterName_9at9aRJTqmFezKo6mAMdIAeAcommdlg)(tyObject_IPrintDialogServices_gJ7ZjCkpdRr3BYFCflq9cZQ* self, NU16* pPrinterName, NI32* pcchSize) {
	NI32 result;
	nimfr_("GetCurrentPrinterName", "commdlg.nim");
	result = (NI32)0;
	nimln_(594, "commdlg.nim");
	result = (*(*self).lpVtbl).GetCurrentPrinterName(self, pPrinterName, pcchSize);
	popFrame();
	return result;
}

static N_INLINE(NI32, GetCurrentPortName_D0pzAseESpJRjgadnhRxxQcommdlg)(tyObject_IPrintDialogServices_gJ7ZjCkpdRr3BYFCflq9cZQ* self, NU16* pPortName, NI32* pcchSize) {
	NI32 result;
	nimfr_("GetCurrentPortName", "commdlg.nim");
	result = (NI32)0;
	nimln_(595, "commdlg.nim");
	result = (*(*self).lpVtbl).GetCurrentPortName(self, pPortName, pcchSize);
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw*, winimConverterIPrintDialogCallbackToIUnknown_9bWxTX2tUAn5p9c9akZwB1ztg)(tyObject_IPrintDialogCallback_8Bpmlgb3SzszUfz5suxUCA* x) {
	tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw* result;
	nimfr_("winimConverterIPrintDialogCallbackToIUnknown", "commdlg.nim");
	result = (tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw*)0;
	nimln_(596, "commdlg.nim");
	result = ((tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw*) (x));
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw*, winimConverterIPrintDialogServicesToIUnknown_vg0wPLWC0NZCSFT25PBH0A)(tyObject_IPrintDialogServices_gJ7ZjCkpdRr3BYFCflq9cZQ* x) {
	tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw* result;
	nimfr_("winimConverterIPrintDialogServicesToIUnknown", "commdlg.nim");
	result = (tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw*)0;
	nimln_(597, "commdlg.nim");
	result = ((tyObject_IUnknown_GaCOTm3fAeQng3LkqGK9cpw*) (x));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, winim_commdlgInit000)(void) {
	nimfr_("commdlg", "commdlg.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, winim_commdlgDatInit000)(void) {
if (!((TM_j9bsvYo6jhGJJJAdtSNN6fg_2 = nimLoadLibrary((NimStringDesc*) &TM_j9bsvYo6jhGJJJAdtSNN6fg_4))
)) nimLoadLibraryError((NimStringDesc*) &TM_j9bsvYo6jhGJJJAdtSNN6fg_5);
	Dl_409913_ = (tyProc_mVXOb7jWqp4Jo1LduS9bPxA) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "GetOpenFileNameA");
	Dl_409916_ = (tyProc_ri43SDy9cxT6wQrQ7RqUxJg) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "GetOpenFileNameW");
	Dl_409919_ = (tyProc_mVXOb7jWqp4Jo1LduS9bPxA) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "GetSaveFileNameA");
	Dl_409922_ = (tyProc_ri43SDy9cxT6wQrQ7RqUxJg) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "GetSaveFileNameW");
	Dl_409925_ = (tyProc_OWfSvVyJ0UeWGoy7Df2NJg) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "GetFileTitleA");
	Dl_409930_ = (tyProc_mne9cmLVtlw7aXBXor9bszdw) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "GetFileTitleW");
	Dl_409935_ = (tyProc_4sevyjU4ImAoC2GlSvt5sQ) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "ChooseColorA");
	Dl_409938_ = (tyProc_G9cVC4YCMi8dOtxZU8UOsMw) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "ChooseColorW");
	Dl_409941_ = (tyProc_XA4GnqygRBfjEUiN9caYAeA) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "FindTextA");
	Dl_409944_ = (tyProc_6SXgKcejbJGCV9b0bA4q9bpw) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "FindTextW");
	Dl_409947_ = (tyProc_XA4GnqygRBfjEUiN9caYAeA) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "ReplaceTextA");
	Dl_409950_ = (tyProc_6SXgKcejbJGCV9b0bA4q9bpw) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "ReplaceTextW");
	Dl_409953_ = (tyProc_uEILy6iAC9codB9b3UqnHAaA) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "ChooseFontA");
	Dl_409956_ = (tyProc_BLxlTIREa5VdJVIg9bji3yw) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "ChooseFontW");
	Dl_409959_ = (tyProc_nIRhNkfh6yN5Z5KjGM9c36A) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "PrintDlgA");
	Dl_409962_ = (tyProc_E0KSPnR19b9aIdroFCNP29cBg) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "PrintDlgW");
	Dl_409965_ = (tyProc_nyevyHwQIVD07W8rmBr4Og) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "PrintDlgExA");
	Dl_409968_ = (tyProc_HcrCQ2BjH1TBxtcHsT2osQ) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "PrintDlgExW");
	Dl_409971_ = (tyProc_9bXer9a4ps9aSGctILcxWReVw) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "CommDlgExtendedError");
	Dl_409973_ = (tyProc_N9c5mwOmXGVwBIKrFPybicw) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "PageSetupDlgA");
	Dl_409976_ = (tyProc_7AEjJshati05DkZTE9bPYmQ) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "PageSetupDlgW");
	Dl_410098_ = (tyProc_ri43SDy9cxT6wQrQ7RqUxJg) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "GetOpenFileNameW");
	Dl_410101_ = (tyProc_ri43SDy9cxT6wQrQ7RqUxJg) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "GetSaveFileNameW");
	Dl_410104_ = (tyProc_mne9cmLVtlw7aXBXor9bszdw) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "GetFileTitleW");
	Dl_410109_ = (tyProc_G9cVC4YCMi8dOtxZU8UOsMw) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "ChooseColorW");
	Dl_410112_ = (tyProc_6SXgKcejbJGCV9b0bA4q9bpw) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "FindTextW");
	Dl_410115_ = (tyProc_6SXgKcejbJGCV9b0bA4q9bpw) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "ReplaceTextW");
	Dl_410118_ = (tyProc_BLxlTIREa5VdJVIg9bji3yw) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "ChooseFontW");
	Dl_410121_ = (tyProc_E0KSPnR19b9aIdroFCNP29cBg) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "PrintDlgW");
	Dl_410124_ = (tyProc_HcrCQ2BjH1TBxtcHsT2osQ) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "PrintDlgExW");
	Dl_410127_ = (tyProc_7AEjJshati05DkZTE9bPYmQ) nimGetProcAddr(TM_j9bsvYo6jhGJJJAdtSNN6fg_2, "PageSetupDlgW");
}

