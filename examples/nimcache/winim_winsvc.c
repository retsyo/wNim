/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   F:\nim\dist\mingw64\bin\gcc.exe -c  -w -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN  -IF:\nim\lib -o O:\nim\wnim\release\examples\nimcache\winim_winsvc.o O:\nim\wnim\release\examples\nimcache\winim_winsvc.c */
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
typedef struct tyObject_SERVICE_STATUS_FnVXvGwR5d15QgRdgAQq0A tyObject_SERVICE_STATUS_FnVXvGwR5d15QgRdgAQq0A;
typedef struct tyObject_ENUM_SERVICE_STATUSA_bkiuEZIMwjJDQccVkXOyHw tyObject_ENUM_SERVICE_STATUSA_bkiuEZIMwjJDQccVkXOyHw;
typedef struct tyObject_ENUM_SERVICE_STATUSW_AEl9bdc3zWxZfio9acE3kpkQ tyObject_ENUM_SERVICE_STATUSW_AEl9bdc3zWxZfio9acE3kpkQ;
typedef struct tyObject_TQUERY_SERVICE_CONFIGA_o7r4bShpdhlAoO3sk4l1QA tyObject_TQUERY_SERVICE_CONFIGA_o7r4bShpdhlAoO3sk4l1QA;
typedef struct tyObject_TQUERY_SERVICE_CONFIGW_jvvo6GFbZAR4nFxPwt2DKg tyObject_TQUERY_SERVICE_CONFIGW_jvvo6GFbZAR4nFxPwt2DKg;
typedef struct tyObject_TQUERY_SERVICE_LOCK_STATUSA_879abc9cFJABb9agL8GsLp9cqw tyObject_TQUERY_SERVICE_LOCK_STATUSA_879abc9cFJABb9agL8GsLp9cqw;
typedef struct tyObject_TQUERY_SERVICE_LOCK_STATUSW_FfBBd8JAAbNJqd6q19amieg tyObject_TQUERY_SERVICE_LOCK_STATUSW_FfBBd8JAAbNJqd6q19amieg;
typedef struct tyObject_SERVICE_TABLE_ENTRYA_q26TKn6Zf8y30LYGByog5Q tyObject_SERVICE_TABLE_ENTRYA_q26TKn6Zf8y30LYGByog5Q;
typedef struct tyObject_SERVICE_TABLE_ENTRYW_zSCoBre9bXB9cwZG9aoUcpj9bQ tyObject_SERVICE_TABLE_ENTRYW_zSCoBre9bXB9cwZG9aoUcpj9bQ;
typedef struct tyObject_SERVICE_NOTIFYA_wepIbI6pR1CsUHmGcBjlrw tyObject_SERVICE_NOTIFYA_wepIbI6pR1CsUHmGcBjlrw;
typedef struct tyObject_SERVICE_NOTIFYW_EUAyr4a9ch1THcK0RgfKblA tyObject_SERVICE_NOTIFYW_EUAyr4a9ch1THcK0RgfKblA;
typedef struct tyObject_SERVICE_STATUS_PROCESS_klGKMFtDTSwNNM4iTyEDlw tyObject_SERVICE_STATUS_PROCESS_klGKMFtDTSwNNM4iTyEDlw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(NI32, tyProc_ghAMH4yPuOuj19cQP4Z9aryA) (NI hService, NI32 dwServiceType, NI32 dwStartType, NI32 dwErrorControl, NCSTRING lpBinaryPathName, NCSTRING lpLoadOrderGroup, NI32* lpdwTagId, NCSTRING lpDependencies, NCSTRING lpServiceStartName, NCSTRING lpPassword, NCSTRING lpDisplayName);
typedef N_STDCALL_PTR(NI32, tyProc_PwajZovl1CFqsmvF9bRCmPg) (NI hService, NI32 dwServiceType, NI32 dwStartType, NI32 dwErrorControl, NU16* lpBinaryPathName, NU16* lpLoadOrderGroup, NI32* lpdwTagId, NU16* lpDependencies, NU16* lpServiceStartName, NU16* lpPassword, NU16* lpDisplayName);
typedef N_STDCALL_PTR(NI32, tyProc_UFyd6ZuBsDpZKCPItbYrlg) (NI hService, NI32 dwInfoLevel, void* lpInfo);
typedef N_STDCALL_PTR(NI32, tyProc_P13srMBg9b3d3yEV9aW4NCoA) (NI hSCObject);
typedef N_STDCALL_PTR(NI32, tyProc_xv9bWqu9akuCQ7tzQt9ckyWag) (NI hService, NI32 dwControl, tyObject_SERVICE_STATUS_FnVXvGwR5d15QgRdgAQq0A* lpServiceStatus);
typedef N_STDCALL_PTR(NI, tyProc_tYIgF59axvXOlOQX5CLTZ3w) (NI hSCManager, NCSTRING lpServiceName, NCSTRING lpDisplayName, NI32 dwDesiredAccess, NI32 dwServiceType, NI32 dwStartType, NI32 dwErrorControl, NCSTRING lpBinaryPathName, NCSTRING lpLoadOrderGroup, NI32* lpdwTagId, NCSTRING lpDependencies, NCSTRING lpServiceStartName, NCSTRING lpPassword);
typedef N_STDCALL_PTR(NI, tyProc_FlZfgGspSHKH9cye29aToiPQ) (NI hSCManager, NU16* lpServiceName, NU16* lpDisplayName, NI32 dwDesiredAccess, NI32 dwServiceType, NI32 dwStartType, NI32 dwErrorControl, NU16* lpBinaryPathName, NU16* lpLoadOrderGroup, NI32* lpdwTagId, NU16* lpDependencies, NU16* lpServiceStartName, NU16* lpPassword);
typedef N_STDCALL_PTR(NI32, tyProc_iiXhuPILh0V1zdJDoghX4Q) (NI hService, NI32 dwServiceState, tyObject_ENUM_SERVICE_STATUSA_bkiuEZIMwjJDQccVkXOyHw* lpServices, NI32 cbBufSize, NI32* pcbBytesNeeded, NI32* lpServicesReturned);
typedef N_STDCALL_PTR(NI32, tyProc_T3gQOJKmG9cptghURQBv8sw) (NI hService, NI32 dwServiceState, tyObject_ENUM_SERVICE_STATUSW_AEl9bdc3zWxZfio9acE3kpkQ* lpServices, NI32 cbBufSize, NI32* pcbBytesNeeded, NI32* lpServicesReturned);
typedef N_STDCALL_PTR(NI32, tyProc_LOq5N47uHkfWxd0qVvnPoQ) (NI hSCManager, NI32 dwServiceType, NI32 dwServiceState, tyObject_ENUM_SERVICE_STATUSA_bkiuEZIMwjJDQccVkXOyHw* lpServices, NI32 cbBufSize, NI32* pcbBytesNeeded, NI32* lpServicesReturned, NI32* lpResumeHandle);
typedef N_STDCALL_PTR(NI32, tyProc_c79awJTq7eoIgDJqv6J4tqw) (NI hSCManager, NI32 dwServiceType, NI32 dwServiceState, tyObject_ENUM_SERVICE_STATUSW_AEl9bdc3zWxZfio9acE3kpkQ* lpServices, NI32 cbBufSize, NI32* pcbBytesNeeded, NI32* lpServicesReturned, NI32* lpResumeHandle);
typedef N_STDCALL_PTR(NI32, tyProc_7jlOixoyorcyyPODOGbK9aQ) (NI hSCManager, NI32 InfoLevel, NI32 dwServiceType, NI32 dwServiceState, NU8* lpServices, NI32 cbBufSize, NI32* pcbBytesNeeded, NI32* lpServicesReturned, NI32* lpResumeHandle, NCSTRING pszGroupName);
typedef N_STDCALL_PTR(NI32, tyProc_pvyXIHhYZo5knjj3D6cs2Q) (NI hSCManager, NI32 InfoLevel, NI32 dwServiceType, NI32 dwServiceState, NU8* lpServices, NI32 cbBufSize, NI32* pcbBytesNeeded, NI32* lpServicesReturned, NI32* lpResumeHandle, NU16* pszGroupName);
typedef N_STDCALL_PTR(NI32, tyProc_RG35FkpezCEWxEsmp9av8xw) (NI hSCManager, NCSTRING lpDisplayName, NCSTRING lpServiceName, NI32* lpcchBuffer);
typedef N_STDCALL_PTR(NI32, tyProc_RFPFB5IrZwbdzqFqqxvX9cA) (NI hSCManager, NU16* lpDisplayName, NU16* lpServiceName, NI32* lpcchBuffer);
typedef N_STDCALL_PTR(void*, tyProc_fs9cU4GQHNXhC9c5ooHkGrHA) (NI hSCManager);
typedef N_STDCALL_PTR(NI32, tyProc_78ER49aUeWMW9b9c9aDqn5uqBg) (NI32 BootAcceptable);
typedef N_STDCALL_PTR(NI, tyProc_0q9bX4mrHcChAyJ7Zi5zQxw) (NCSTRING lpMachineName, NCSTRING lpDatabaseName, NI32 dwDesiredAccess);
typedef N_STDCALL_PTR(NI, tyProc_rPlzddK3CIpfuGns7PMvVw) (NU16* lpMachineName, NU16* lpDatabaseName, NI32 dwDesiredAccess);
typedef N_STDCALL_PTR(NI, tyProc_F4pnIySk8h1mTzupxR9afkw) (NI hSCManager, NCSTRING lpServiceName, NI32 dwDesiredAccess);
typedef N_STDCALL_PTR(NI, tyProc_dm9ahqXQI23y9bgFRlCwxNZg) (NI hSCManager, NU16* lpServiceName, NI32 dwDesiredAccess);
typedef N_STDCALL_PTR(NI32, tyProc_1anbJ7CdsbtXBFB1XynYug) (NI hService, tyObject_TQUERY_SERVICE_CONFIGA_o7r4bShpdhlAoO3sk4l1QA* lpServiceConfig, NI32 cbBufSize, NI32* pcbBytesNeeded);
typedef N_STDCALL_PTR(NI32, tyProc_Pv7nlFU5JiEBN2LaJnOU1w) (NI hService, tyObject_TQUERY_SERVICE_CONFIGW_jvvo6GFbZAR4nFxPwt2DKg* lpServiceConfig, NI32 cbBufSize, NI32* pcbBytesNeeded);
typedef N_STDCALL_PTR(NI32, tyProc_MQqmdcKUqb2MilAmElbyIQ) (NI hService, NI32 dwInfoLevel, NU8* lpBuffer, NI32 cbBufSize, NI32* pcbBytesNeeded);
typedef N_STDCALL_PTR(NI32, tyProc_OOw4befX3Z5pXZ0NL9ax40g) (NI hSCManager, tyObject_TQUERY_SERVICE_LOCK_STATUSA_879abc9cFJABb9agL8GsLp9cqw* lpLockStatus, NI32 cbBufSize, NI32* pcbBytesNeeded);
typedef N_STDCALL_PTR(NI32, tyProc_IZrcroj81rFJ5EKgSvIANg) (NI hSCManager, tyObject_TQUERY_SERVICE_LOCK_STATUSW_FfBBd8JAAbNJqd6q19amieg* lpLockStatus, NI32 cbBufSize, NI32* pcbBytesNeeded);
typedef N_STDCALL_PTR(NI32, tyProc_iieL7154HpwgPLW0c9aVWWg) (NI hService, NI32 dwSecurityInformation, void* lpSecurityDescriptor, NI32 cbBufSize, NI32* pcbBytesNeeded);
typedef N_STDCALL_PTR(NI32, tyProc_HqIDc9a9bgyYnThyR7ki2fbQ) (NI hService, tyObject_SERVICE_STATUS_FnVXvGwR5d15QgRdgAQq0A* lpServiceStatus);
typedef N_STDCALL_PTR(void, tyProc_Tjolzh1w2dIIpj3oCDGPFw) (NI32 dwControl);
typedef N_STDCALL_PTR(NI, tyProc_Aff8uOH0AyRX1TGwX39c6hw) (NCSTRING lpServiceName, tyProc_Tjolzh1w2dIIpj3oCDGPFw lpHandlerProc);
typedef N_STDCALL_PTR(NI, tyProc_Mc1v7UtQi9bU81Njc6QZatA) (NU16* lpServiceName, tyProc_Tjolzh1w2dIIpj3oCDGPFw lpHandlerProc);
typedef N_STDCALL_PTR(NI32, tyProc_ndjvS5RU9c9c2GJ4RYm9c86yg) (NI32 dwControl, NI32 dwEventType, void* lpEventData, void* lpContext);
typedef N_STDCALL_PTR(NI, tyProc_O9cexjazeJSRZz6Ik7TaRZA) (NCSTRING lpServiceName, tyProc_ndjvS5RU9c9c2GJ4RYm9c86yg lpHandlerProc, void* lpContext);
typedef N_STDCALL_PTR(NI, tyProc_hfVmUyQ1c1dgOL4vN2R9avg) (NU16* lpServiceName, tyProc_ndjvS5RU9c9c2GJ4RYm9c86yg lpHandlerProc, void* lpContext);
typedef N_STDCALL_PTR(NI32, tyProc_OnpmtUlqxIQt4XZobJyA8g) (tyObject_SERVICE_TABLE_ENTRYA_q26TKn6Zf8y30LYGByog5Q* lpServiceStartTable);
typedef N_STDCALL_PTR(NI32, tyProc_9cuPxExcqCYJyGNYis9aAM0w) (tyObject_SERVICE_TABLE_ENTRYW_zSCoBre9bXB9cwZG9aoUcpj9bQ* lpServiceStartTable);
typedef N_STDCALL_PTR(NI32, tyProc_Jz79a7N6jpyNmzFvPLtzNAA) (NI hService, NI32 dwNumServiceArgs, NCSTRING* lpServiceArgVectors);
typedef N_STDCALL_PTR(NI32, tyProc_V1JLx8BrceXu25xyorhl9aw) (NI hService, NI32 dwNumServiceArgs, NU16** lpServiceArgVectors);
typedef N_STDCALL_PTR(NI32, tyProc_ah5wcFv3UG20t2vgXBy0Fg) (void* ScLock);
typedef N_STDCALL_PTR(NI32, tyProc_vTgQNN7CLPs9bea5QNJxCNQ) (NI hService, NI32 dwControl, NI32 dwInfoLevel, void* pControlParams);
typedef N_STDCALL_PTR(NI32, tyProc_mX5cE747pCQwN4gbFeEMwA) (NI hService, NI32 dwNotifyMask, tyObject_SERVICE_NOTIFYA_wepIbI6pR1CsUHmGcBjlrw* pNotifyBuffer);
typedef N_STDCALL_PTR(NI32, tyProc_DJMnlS6gc3r6pMmlwD5Yrg) (NI hService, NI32 dwNotifyMask, tyObject_SERVICE_NOTIFYW_EUAyr4a9ch1THcK0RgfKblA* pNotifyBuffer);
struct tyObject_SERVICE_STATUS_FnVXvGwR5d15QgRdgAQq0A {
NI32 dwServiceType;
NI32 dwCurrentState;
NI32 dwControlsAccepted;
NI32 dwWin32ExitCode;
NI32 dwServiceSpecificExitCode;
NI32 dwCheckPoint;
NI32 dwWaitHint;
};
struct tyObject_ENUM_SERVICE_STATUSA_bkiuEZIMwjJDQccVkXOyHw {
NCSTRING lpServiceName;
NCSTRING lpDisplayName;
tyObject_SERVICE_STATUS_FnVXvGwR5d15QgRdgAQq0A ServiceStatus;
};
struct tyObject_ENUM_SERVICE_STATUSW_AEl9bdc3zWxZfio9acE3kpkQ {
NU16* lpServiceName;
NU16* lpDisplayName;
tyObject_SERVICE_STATUS_FnVXvGwR5d15QgRdgAQq0A ServiceStatus;
};
struct tyObject_TQUERY_SERVICE_CONFIGA_o7r4bShpdhlAoO3sk4l1QA {
NI32 dwServiceType;
NI32 dwStartType;
NI32 dwErrorControl;
NCSTRING lpBinaryPathName;
NCSTRING lpLoadOrderGroup;
NI32 dwTagId;
NCSTRING lpDependencies;
NCSTRING lpServiceStartName;
NCSTRING lpDisplayName;
};
struct tyObject_TQUERY_SERVICE_CONFIGW_jvvo6GFbZAR4nFxPwt2DKg {
NI32 dwServiceType;
NI32 dwStartType;
NI32 dwErrorControl;
NU16* lpBinaryPathName;
NU16* lpLoadOrderGroup;
NI32 dwTagId;
NU16* lpDependencies;
NU16* lpServiceStartName;
NU16* lpDisplayName;
};
struct tyObject_TQUERY_SERVICE_LOCK_STATUSA_879abc9cFJABb9agL8GsLp9cqw {
NI32 fIsLocked;
NCSTRING lpLockOwner;
NI32 dwLockDuration;
};
struct tyObject_TQUERY_SERVICE_LOCK_STATUSW_FfBBd8JAAbNJqd6q19amieg {
NI32 fIsLocked;
NU16* lpLockOwner;
NI32 dwLockDuration;
};
typedef N_STDCALL_PTR(void, tyProc_w23tcoykGiKwJHW5VK53Uw) (NI32 dwNumServicesArgs, NCSTRING* lpServiceArgVectors);
struct tyObject_SERVICE_TABLE_ENTRYA_q26TKn6Zf8y30LYGByog5Q {
NCSTRING lpServiceName;
tyProc_w23tcoykGiKwJHW5VK53Uw lpServiceProc;
};
typedef N_STDCALL_PTR(void, tyProc_fzQJ7HoJ9cDu4yzk6RymgUg) (NI32 dwNumServicesArgs, NU16** lpServiceArgVectors);
struct tyObject_SERVICE_TABLE_ENTRYW_zSCoBre9bXB9cwZG9aoUcpj9bQ {
NU16* lpServiceName;
tyProc_fzQJ7HoJ9cDu4yzk6RymgUg lpServiceProc;
};
typedef N_STDCALL_PTR(void, tyProc_im9buRnIvptJfzdASYMEbBA) (void* pParameter);
struct tyObject_SERVICE_STATUS_PROCESS_klGKMFtDTSwNNM4iTyEDlw {
NI32 dwServiceType;
NI32 dwCurrentState;
NI32 dwControlsAccepted;
NI32 dwWin32ExitCode;
NI32 dwServiceSpecificExitCode;
NI32 dwCheckPoint;
NI32 dwWaitHint;
NI32 dwProcessId;
NI32 dwServiceFlags;
};
struct tyObject_SERVICE_NOTIFYA_wepIbI6pR1CsUHmGcBjlrw {
NI32 dwVersion;
tyProc_im9buRnIvptJfzdASYMEbBA pfnNotifyCallback;
void* pContext;
NI32 dwNotificationStatus;
tyObject_SERVICE_STATUS_PROCESS_klGKMFtDTSwNNM4iTyEDlw ServiceStatus;
NI32 dwNotificationTriggered;
NCSTRING pszServiceNames;
};
struct tyObject_SERVICE_NOTIFYW_EUAyr4a9ch1THcK0RgfKblA {
NI32 dwVersion;
tyProc_im9buRnIvptJfzdASYMEbBA pfnNotifyCallback;
void* pContext;
NI32 dwNotificationStatus;
tyObject_SERVICE_STATUS_PROCESS_klGKMFtDTSwNNM4iTyEDlw ServiceStatus;
NI32 dwNotificationTriggered;
NU16* pszServiceNames;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static void* TM_9aFQBTn9au7g2F9cVig2T2c2w_2;
tyProc_ghAMH4yPuOuj19cQP4Z9aryA Dl_301432_;
tyProc_PwajZovl1CFqsmvF9bRCmPg Dl_301445_;
tyProc_UFyd6ZuBsDpZKCPItbYrlg Dl_301458_;
tyProc_UFyd6ZuBsDpZKCPItbYrlg Dl_301463_;
tyProc_P13srMBg9b3d3yEV9aW4NCoA Dl_301468_;
tyProc_xv9bWqu9akuCQ7tzQt9ckyWag Dl_301471_;
tyProc_tYIgF59axvXOlOQX5CLTZ3w Dl_301476_;
tyProc_FlZfgGspSHKH9cye29aToiPQ Dl_301491_;
tyProc_P13srMBg9b3d3yEV9aW4NCoA Dl_301506_;
tyProc_iiXhuPILh0V1zdJDoghX4Q Dl_301509_;
tyProc_T3gQOJKmG9cptghURQBv8sw Dl_301517_;
tyProc_LOq5N47uHkfWxd0qVvnPoQ Dl_301525_;
tyProc_c79awJTq7eoIgDJqv6J4tqw Dl_301535_;
tyProc_7jlOixoyorcyyPODOGbK9aQ Dl_301545_;
tyProc_pvyXIHhYZo5knjj3D6cs2Q Dl_301557_;
tyProc_RG35FkpezCEWxEsmp9av8xw Dl_301569_;
tyProc_RFPFB5IrZwbdzqFqqxvX9cA Dl_301575_;
tyProc_RG35FkpezCEWxEsmp9av8xw Dl_301581_;
tyProc_RFPFB5IrZwbdzqFqqxvX9cA Dl_301587_;
tyProc_fs9cU4GQHNXhC9c5ooHkGrHA Dl_301593_;
tyProc_78ER49aUeWMW9b9c9aDqn5uqBg Dl_301596_;
tyProc_0q9bX4mrHcChAyJ7Zi5zQxw Dl_301599_;
tyProc_rPlzddK3CIpfuGns7PMvVw Dl_301604_;
tyProc_F4pnIySk8h1mTzupxR9afkw Dl_301609_;
tyProc_dm9ahqXQI23y9bgFRlCwxNZg Dl_301614_;
tyProc_1anbJ7CdsbtXBFB1XynYug Dl_301619_;
tyProc_Pv7nlFU5JiEBN2LaJnOU1w Dl_301625_;
tyProc_MQqmdcKUqb2MilAmElbyIQ Dl_301631_;
tyProc_MQqmdcKUqb2MilAmElbyIQ Dl_301638_;
tyProc_OOw4befX3Z5pXZ0NL9ax40g Dl_301645_;
tyProc_IZrcroj81rFJ5EKgSvIANg Dl_301651_;
tyProc_iieL7154HpwgPLW0c9aVWWg Dl_301657_;
tyProc_HqIDc9a9bgyYnThyR7ki2fbQ Dl_301664_;
tyProc_MQqmdcKUqb2MilAmElbyIQ Dl_301668_;
tyProc_Aff8uOH0AyRX1TGwX39c6hw Dl_301675_;
tyProc_Mc1v7UtQi9bU81Njc6QZatA Dl_301679_;
tyProc_O9cexjazeJSRZz6Ik7TaRZA Dl_301683_;
tyProc_hfVmUyQ1c1dgOL4vN2R9avg Dl_301688_;
tyProc_UFyd6ZuBsDpZKCPItbYrlg Dl_301693_;
tyProc_HqIDc9a9bgyYnThyR7ki2fbQ Dl_301698_;
tyProc_OnpmtUlqxIQt4XZobJyA8g Dl_301702_;
tyProc_9cuPxExcqCYJyGNYis9aAM0w Dl_301706_;
tyProc_Jz79a7N6jpyNmzFvPLtzNAA Dl_301710_;
tyProc_V1JLx8BrceXu25xyorhl9aw Dl_301716_;
tyProc_ah5wcFv3UG20t2vgXBy0Fg Dl_301722_;
tyProc_vTgQNN7CLPs9bea5QNJxCNQ Dl_301725_;
tyProc_vTgQNN7CLPs9bea5QNJxCNQ Dl_301731_;
tyProc_mX5cE747pCQwN4gbFeEMwA Dl_301737_;
tyProc_DJMnlS6gc3r6pMmlwD5Yrg Dl_301742_;
tyProc_PwajZovl1CFqsmvF9bRCmPg Dl_301800_;
tyProc_UFyd6ZuBsDpZKCPItbYrlg Dl_301813_;
tyProc_FlZfgGspSHKH9cye29aToiPQ Dl_301818_;
tyProc_T3gQOJKmG9cptghURQBv8sw Dl_301833_;
tyProc_c79awJTq7eoIgDJqv6J4tqw Dl_301841_;
tyProc_pvyXIHhYZo5knjj3D6cs2Q Dl_301851_;
tyProc_RFPFB5IrZwbdzqFqqxvX9cA Dl_301863_;
tyProc_RFPFB5IrZwbdzqFqqxvX9cA Dl_301869_;
tyProc_rPlzddK3CIpfuGns7PMvVw Dl_301875_;
tyProc_dm9ahqXQI23y9bgFRlCwxNZg Dl_301880_;
tyProc_Pv7nlFU5JiEBN2LaJnOU1w Dl_301885_;
tyProc_MQqmdcKUqb2MilAmElbyIQ Dl_301891_;
tyProc_IZrcroj81rFJ5EKgSvIANg Dl_301898_;
tyProc_Mc1v7UtQi9bU81Njc6QZatA Dl_301904_;
tyProc_hfVmUyQ1c1dgOL4vN2R9avg Dl_301908_;
tyProc_9cuPxExcqCYJyGNYis9aAM0w Dl_301913_;
tyProc_V1JLx8BrceXu25xyorhl9aw Dl_301917_;
tyProc_vTgQNN7CLPs9bea5QNJxCNQ Dl_301923_;
tyProc_DJMnlS6gc3r6pMmlwD5Yrg Dl_301929_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_9aFQBTn9au7g2F9cVig2T2c2w_4, "advapi32", 8);
STRING_LITERAL(TM_9aFQBTn9au7g2F9cVig2T2c2w_5, "advapi32", 8);

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
NIM_EXTERNC N_NOINLINE(void, winim_winsvcInit000)(void) {
	nimfr_("winsvc", "winsvc.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, winim_winsvcDatInit000)(void) {
if (!((TM_9aFQBTn9au7g2F9cVig2T2c2w_2 = nimLoadLibrary((NimStringDesc*) &TM_9aFQBTn9au7g2F9cVig2T2c2w_4))
)) nimLoadLibraryError((NimStringDesc*) &TM_9aFQBTn9au7g2F9cVig2T2c2w_5);
	Dl_301432_ = (tyProc_ghAMH4yPuOuj19cQP4Z9aryA) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "ChangeServiceConfigA");
	Dl_301445_ = (tyProc_PwajZovl1CFqsmvF9bRCmPg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "ChangeServiceConfigW");
	Dl_301458_ = (tyProc_UFyd6ZuBsDpZKCPItbYrlg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "ChangeServiceConfig2A");
	Dl_301463_ = (tyProc_UFyd6ZuBsDpZKCPItbYrlg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "ChangeServiceConfig2W");
	Dl_301468_ = (tyProc_P13srMBg9b3d3yEV9aW4NCoA) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "CloseServiceHandle");
	Dl_301471_ = (tyProc_xv9bWqu9akuCQ7tzQt9ckyWag) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "ControlService");
	Dl_301476_ = (tyProc_tYIgF59axvXOlOQX5CLTZ3w) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "CreateServiceA");
	Dl_301491_ = (tyProc_FlZfgGspSHKH9cye29aToiPQ) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "CreateServiceW");
	Dl_301506_ = (tyProc_P13srMBg9b3d3yEV9aW4NCoA) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "DeleteService");
	Dl_301509_ = (tyProc_iiXhuPILh0V1zdJDoghX4Q) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "EnumDependentServicesA");
	Dl_301517_ = (tyProc_T3gQOJKmG9cptghURQBv8sw) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "EnumDependentServicesW");
	Dl_301525_ = (tyProc_LOq5N47uHkfWxd0qVvnPoQ) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "EnumServicesStatusA");
	Dl_301535_ = (tyProc_c79awJTq7eoIgDJqv6J4tqw) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "EnumServicesStatusW");
	Dl_301545_ = (tyProc_7jlOixoyorcyyPODOGbK9aQ) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "EnumServicesStatusExA");
	Dl_301557_ = (tyProc_pvyXIHhYZo5knjj3D6cs2Q) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "EnumServicesStatusExW");
	Dl_301569_ = (tyProc_RG35FkpezCEWxEsmp9av8xw) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "GetServiceKeyNameA");
	Dl_301575_ = (tyProc_RFPFB5IrZwbdzqFqqxvX9cA) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "GetServiceKeyNameW");
	Dl_301581_ = (tyProc_RG35FkpezCEWxEsmp9av8xw) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "GetServiceDisplayNameA");
	Dl_301587_ = (tyProc_RFPFB5IrZwbdzqFqqxvX9cA) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "GetServiceDisplayNameW");
	Dl_301593_ = (tyProc_fs9cU4GQHNXhC9c5ooHkGrHA) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "LockServiceDatabase");
	Dl_301596_ = (tyProc_78ER49aUeWMW9b9c9aDqn5uqBg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "NotifyBootConfigStatus");
	Dl_301599_ = (tyProc_0q9bX4mrHcChAyJ7Zi5zQxw) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "OpenSCManagerA");
	Dl_301604_ = (tyProc_rPlzddK3CIpfuGns7PMvVw) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "OpenSCManagerW");
	Dl_301609_ = (tyProc_F4pnIySk8h1mTzupxR9afkw) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "OpenServiceA");
	Dl_301614_ = (tyProc_dm9ahqXQI23y9bgFRlCwxNZg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "OpenServiceW");
	Dl_301619_ = (tyProc_1anbJ7CdsbtXBFB1XynYug) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "QueryServiceConfigA");
	Dl_301625_ = (tyProc_Pv7nlFU5JiEBN2LaJnOU1w) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "QueryServiceConfigW");
	Dl_301631_ = (tyProc_MQqmdcKUqb2MilAmElbyIQ) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "QueryServiceConfig2A");
	Dl_301638_ = (tyProc_MQqmdcKUqb2MilAmElbyIQ) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "QueryServiceConfig2W");
	Dl_301645_ = (tyProc_OOw4befX3Z5pXZ0NL9ax40g) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "QueryServiceLockStatusA");
	Dl_301651_ = (tyProc_IZrcroj81rFJ5EKgSvIANg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "QueryServiceLockStatusW");
	Dl_301657_ = (tyProc_iieL7154HpwgPLW0c9aVWWg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "QueryServiceObjectSecurity");
	Dl_301664_ = (tyProc_HqIDc9a9bgyYnThyR7ki2fbQ) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "QueryServiceStatus");
	Dl_301668_ = (tyProc_MQqmdcKUqb2MilAmElbyIQ) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "QueryServiceStatusEx");
	Dl_301675_ = (tyProc_Aff8uOH0AyRX1TGwX39c6hw) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "RegisterServiceCtrlHandlerA");
	Dl_301679_ = (tyProc_Mc1v7UtQi9bU81Njc6QZatA) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "RegisterServiceCtrlHandlerW");
	Dl_301683_ = (tyProc_O9cexjazeJSRZz6Ik7TaRZA) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "RegisterServiceCtrlHandlerExA");
	Dl_301688_ = (tyProc_hfVmUyQ1c1dgOL4vN2R9avg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "RegisterServiceCtrlHandlerExW");
	Dl_301693_ = (tyProc_UFyd6ZuBsDpZKCPItbYrlg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "SetServiceObjectSecurity");
	Dl_301698_ = (tyProc_HqIDc9a9bgyYnThyR7ki2fbQ) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "SetServiceStatus");
	Dl_301702_ = (tyProc_OnpmtUlqxIQt4XZobJyA8g) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "StartServiceCtrlDispatcherA");
	Dl_301706_ = (tyProc_9cuPxExcqCYJyGNYis9aAM0w) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "StartServiceCtrlDispatcherW");
	Dl_301710_ = (tyProc_Jz79a7N6jpyNmzFvPLtzNAA) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "StartServiceA");
	Dl_301716_ = (tyProc_V1JLx8BrceXu25xyorhl9aw) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "StartServiceW");
	Dl_301722_ = (tyProc_ah5wcFv3UG20t2vgXBy0Fg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "UnlockServiceDatabase");
	Dl_301725_ = (tyProc_vTgQNN7CLPs9bea5QNJxCNQ) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "ControlServiceExA");
	Dl_301731_ = (tyProc_vTgQNN7CLPs9bea5QNJxCNQ) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "ControlServiceExW");
	Dl_301737_ = (tyProc_mX5cE747pCQwN4gbFeEMwA) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "NotifyServiceStatusChangeA");
	Dl_301742_ = (tyProc_DJMnlS6gc3r6pMmlwD5Yrg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "NotifyServiceStatusChangeW");
	Dl_301800_ = (tyProc_PwajZovl1CFqsmvF9bRCmPg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "ChangeServiceConfigW");
	Dl_301813_ = (tyProc_UFyd6ZuBsDpZKCPItbYrlg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "ChangeServiceConfig2W");
	Dl_301818_ = (tyProc_FlZfgGspSHKH9cye29aToiPQ) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "CreateServiceW");
	Dl_301833_ = (tyProc_T3gQOJKmG9cptghURQBv8sw) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "EnumDependentServicesW");
	Dl_301841_ = (tyProc_c79awJTq7eoIgDJqv6J4tqw) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "EnumServicesStatusW");
	Dl_301851_ = (tyProc_pvyXIHhYZo5knjj3D6cs2Q) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "EnumServicesStatusExW");
	Dl_301863_ = (tyProc_RFPFB5IrZwbdzqFqqxvX9cA) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "GetServiceKeyNameW");
	Dl_301869_ = (tyProc_RFPFB5IrZwbdzqFqqxvX9cA) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "GetServiceDisplayNameW");
	Dl_301875_ = (tyProc_rPlzddK3CIpfuGns7PMvVw) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "OpenSCManagerW");
	Dl_301880_ = (tyProc_dm9ahqXQI23y9bgFRlCwxNZg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "OpenServiceW");
	Dl_301885_ = (tyProc_Pv7nlFU5JiEBN2LaJnOU1w) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "QueryServiceConfigW");
	Dl_301891_ = (tyProc_MQqmdcKUqb2MilAmElbyIQ) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "QueryServiceConfig2W");
	Dl_301898_ = (tyProc_IZrcroj81rFJ5EKgSvIANg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "QueryServiceLockStatusW");
	Dl_301904_ = (tyProc_Mc1v7UtQi9bU81Njc6QZatA) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "RegisterServiceCtrlHandlerW");
	Dl_301908_ = (tyProc_hfVmUyQ1c1dgOL4vN2R9avg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "RegisterServiceCtrlHandlerExW");
	Dl_301913_ = (tyProc_9cuPxExcqCYJyGNYis9aAM0w) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "StartServiceCtrlDispatcherW");
	Dl_301917_ = (tyProc_V1JLx8BrceXu25xyorhl9aw) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "StartServiceW");
	Dl_301923_ = (tyProc_vTgQNN7CLPs9bea5QNJxCNQ) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "ControlServiceExW");
	Dl_301929_ = (tyProc_DJMnlS6gc3r6pMmlwD5Yrg) nimGetProcAddr(TM_9aFQBTn9au7g2F9cVig2T2c2w_2, "NotifyServiceStatusChangeW");
}

