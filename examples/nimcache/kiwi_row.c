/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   F:\nim\dist\mingw64\bin\gcc.exe -c  -w -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN  -IF:\nim\lib -o O:\nim\wnim\release\examples\nimcache\kiwi_row.o O:\nim\wnim\release\examples\nimcache\kiwi_row.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg;
typedef struct tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ;
typedef struct tySequence_uJPyfSmwQpDpGSL9aEqnEWw tySequence_uJPyfSmwQpDpGSL9aEqnEWw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple_XX3W16K9cllZizu5F8pgHxg tyTuple_XX3W16K9cllZizu5F8pgHxg;
typedef struct TGenericSeq TGenericSeq;
struct tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ {
tySequence_uJPyfSmwQpDpGSL9aEqnEWw* data;
NI counter;
};
struct tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg {
NF constant;
tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ cells;
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
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyTuple_XX3W16K9cllZizu5F8pgHxg {
NI Field0;
NI32 Field1;
NF Field2;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct tySequence_uJPyfSmwQpDpGSL9aEqnEWw {
  TGenericSeq Sup;
  tyTuple_XX3W16K9cllZizu5F8pgHxg data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg*, newRow_A2SKEW4JU0QRD8z4abZnQA)(NF constant);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef_KKigocRgMzGiGYu7Ry6duA)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(void, initTable_BF2c4MdtN9bF9a8bzMTiAVSg)(NI initialSize, tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ* Result);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg*, newRow_kkNv7ddAEahIXsULx14LOA)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* other);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(NF, add_aK4C9cxGG1vwEucYSUEn8Ug)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NF value);
static N_INLINE(void, pluseq__7kHiltrvRlcg6wSYR3CxAw_2strutils)(NF* x, NF y);
N_LIB_PRIVATE N_NIMCALL(void, insert_HF2miqnUbHserIV7thKQiA)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NI32 symbol, NF coefficient);
N_LIB_PRIVATE N_NIMCALL(NF, getOrDefault_TbIvRcbeX9bjR9chF2ZmXBOw)(tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ t, NI32 key);
static N_INLINE(NIM_BOOL, nearZero_lpEjYhVOWu9at03vpMuGIwgutil)(NF value);
N_LIB_PRIVATE N_NIMCALL(void, del_05TIIOWYxDqMRRou5ciXRw)(tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ* t, NI32 key);
N_LIB_PRIVATE N_NIMCALL(void, X5BX5Deq__vB2R6t75uuHmCAOEWCUKNg)(tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ* t, NI32 key, NF val);
N_LIB_PRIVATE N_NIMCALL(void, insert_yHMW3FT2eKgeRb9cnkKm7Dg)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* other, NF coefficient);
static N_INLINE(NIM_BOOL, isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables)(NI hcode);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, remove_bQOAkjiQcYVT3cpNEWuRzA)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NI32 symbol);
N_LIB_PRIVATE N_NIMCALL(void, reverseSign_jJZG8PB1RQ9bjNe6GXKaYfw)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r);
N_LIB_PRIVATE N_NIMCALL(void, solveFor_bQOAkjiQcYVT3cpNEWuRzA_2)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NI32 symbol);
N_LIB_PRIVATE N_NIMCALL(NF*, X5BX5D__4h2FKwre7TOLSK9chhgIM9aQ)(tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ* t, NI32 key);
static N_INLINE(void, stareq__7kHiltrvRlcg6wSYR3CxAwstrutils)(NF* x, NF y);
N_LIB_PRIVATE N_NIMCALL(void, solveFor_VFO7UEsKWiy59a4bXSabcvg)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NI32 lhs, NI32 rhs);
static N_INLINE(NF, coefficientFor_6hrDMTycCu3p5g9cPEvqxtwrow)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NI32 symbol);
N_LIB_PRIVATE N_NIMCALL(void, substitute_rqdwPcG2HuoCGE2s2zCJKQ)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NI32 symbol, tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* row);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains_m2peCesR1lEbbyoaHf8XRg)(tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ t, NI32 key);
static N_INLINE(NI, rawGet_dNotdEKJw9cFqMzwCp0eU9cwtables)(tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ t, NI32 key, NI* hc);
static N_INLINE(NI, hash_mod2mo9a9b8bznQHjUjLXXoQtables)(NI32 x);
static N_INLINE(NI, nextTry_OLPhxSyW9bte5CwHzzQVhfAtables)(NI h, NI maxHash);
static N_INLINE(NI, subInt)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(void, enlarge_XJkyq8MRbiH5NAJeg2L48Q)(tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ* t);
N_LIB_PRIVATE N_NIMCALL(void, rawInsert_YzkpHVjPkiw3upbovhqNmw)(tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ* t, tySequence_uJPyfSmwQpDpGSL9aEqnEWw** data, NI32 key, NF val, NI hc, NI h);
static N_INLINE(NI, rawGetKnownHC_T2bf2SoMHD3wA2Ut0S9ay9cQtables)(tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ t, NI32 key, NI hc);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasKey_m2peCesR1lEbbyoaHf8XRg_2)(tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ t, NI32 key);
TNimType NTI_3v3Trv8fQ4akgNFwOlr6wg_;
extern TNimType NTI_w9bl9a1ul9ctRJWiMl9cNnIMvg_;
extern TNimType NTI_nLx2Wxz1tHL9b0fETuJh1cQ_;
TNimType NTI_KKigocRgMzGiGYu7Ry6duA_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TNimType NTI_uJPyfSmwQpDpGSL9aEqnEWw_;
static N_NIMCALL(void, Marker_tyRef_KKigocRgMzGiGYu7Ry6duA)(void* p, NI op) {
	tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* a;
	a = (tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg*)p;
	nimGCvisit((void*)(*a).cells.data, op);
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

N_LIB_PRIVATE N_NIMCALL(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg*, newRow_A2SKEW4JU0QRD8z4abZnQA)(NF constant) {
	tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* result;
	nimfr_("newRow", "row.nim");
	result = (tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg*)0;
	nimln_(10, "row.nim");
	result = (tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg*) newObj((&NTI_KKigocRgMzGiGYu7Ry6duA_), sizeof(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg));
	nimln_(318, "tables.nim");
	initTable_BF2c4MdtN9bF9a8bzMTiAVSg(((NI) 64), (&(*result).cells));
	nimln_(12, "row.nim");
	(*result).constant = constant;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg*, newRow_kkNv7ddAEahIXsULx14LOA)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* other) {
	tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* result;
	nimfr_("newRow", "row.nim");
	result = (tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg*)0;
	nimln_(15, "row.nim");
	result = (tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg*) newObj((&NTI_KKigocRgMzGiGYu7Ry6duA_), sizeof(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg));
	nimln_(16, "row.nim");
	genericSeqAssign((&(*result).cells.data), (*other).cells.data, (&NTI_uJPyfSmwQpDpGSL9aEqnEWw_));
	(*result).cells.counter = (*other).cells.counter;
	nimln_(17, "row.nim");
	(*result).constant = (*other).constant;
	popFrame();
	return result;
}

static N_INLINE(void, pluseq__7kHiltrvRlcg6wSYR3CxAw_2strutils)(NF* x, NF y) {
	nimfr_("+=", "system.nim");
	nimln_(3700, "system.nim");
	(*x) = ((NF)((*x)) + (NF)(y));
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(NF, add_aK4C9cxGG1vwEucYSUEn8Ug)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NF value) {
	NF result;
	nimfr_("add", "row.nim");
	result = (NF)0;
	nimln_(21, "row.nim");
	pluseq__7kHiltrvRlcg6wSYR3CxAw_2strutils((&(*r).constant), value);
	nimln_(22, "row.nim");
	result = (*r).constant;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, nearZero_lpEjYhVOWu9at03vpMuGIwgutil)(NF value) {
	NIM_BOOL result;
	nimfr_("nearZero", "util.nim");
	result = (NIM_BOOL)0;
	nimln_(5, "util.nim");
	result = ((value < 0? -(value) : (value)) < 1.0000000000000000e-008);
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, insert_HF2miqnUbHserIV7thKQiA)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NI32 symbol, NF coefficient) {
	NF coefficient_2;
	NF T1_;
	nimfr_("insert", "row.nim");
	nimln_(31, "row.nim");
	T1_ = (NF)0;
	T1_ = getOrDefault_TbIvRcbeX9bjR9chF2ZmXBOw((*r).cells, symbol);
	coefficient_2 = ((NF)(coefficient) + (NF)(T1_));
	nimln_(32, "row.nim");
	{
		NIM_BOOL T4_;
		T4_ = (NIM_BOOL)0;
		T4_ = nearZero_lpEjYhVOWu9at03vpMuGIwgutil(coefficient_2);
		if (!T4_) goto LA5_;
		nimln_(33, "row.nim");
		del_05TIIOWYxDqMRRou5ciXRw((&(*r).cells), symbol);
	}
	goto LA2_;
	LA5_: ;
	{
		nimln_(35, "row.nim");
		X5BX5Deq__vB2R6t75uuHmCAOEWCUKNg((&(*r).cells), symbol, coefficient_2);
	}
	LA2_: ;
	popFrame();
}

static N_INLINE(NIM_BOOL, isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables)(NI hcode) {
	NIM_BOOL result;
	nimfr_("isFilled", "tableimpl.nim");
	result = (NIM_BOOL)0;
	nimln_(18, "tableimpl.nim");
	nimln_(398, "system.nim");
	nimln_(18, "tableimpl.nim");
	result = !((hcode == ((NI) 0)));
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, insert_yHMW3FT2eKgeRb9cnkKm7Dg)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* other, NF coefficient) {
	nimfr_("insert", "row.nim");
	nimln_(43, "row.nim");
	pluseq__7kHiltrvRlcg6wSYR3CxAw_2strutils((&(*r).constant), ((NF)((*other).constant) * (NF)(coefficient)));
	{
		NI32 s;
		NF v;
		tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ colontmp_;
		s = (NI32)0;
		v = (NF)0;
		memset((void*)(&colontmp_), 0, sizeof(colontmp_));
		nimln_(45, "row.nim");
		colontmp_.data = (*other).cells.data;
		colontmp_.counter = (*other).cells.counter;
		{
			NI h;
			NI colontmp__2;
			NI T3_;
			NI res;
			h = (NI)0;
			colontmp__2 = (NI)0;
			nimln_(244, "tables.nim");
			T3_ = (colontmp_.data ? (colontmp_.data->Sup.len-1) : -1);
			colontmp__2 = T3_;
			nimln_(2045, "system.nim");
			res = ((NI) 0);
			{
				nimln_(2046, "system.nim");
				while (1) {
					NI TM_vRptPNB8aYlpLQIxDqb0QA_3;
					if (!(res <= colontmp__2)) goto LA5;
					nimln_(2047, "system.nim");
					h = res;
					nimln_(245, "tables.nim");
					{
						NIM_BOOL T8_;
						NF coeff;
						NF temp;
						NF T11_;
						if ((NU)(h) >= (NU)(colontmp_.data->Sup.len)) raiseIndexError();
						T8_ = (NIM_BOOL)0;
						T8_ = isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables(colontmp_.data->data[h].Field0);
						if (!T8_) goto LA9_;
						if ((NU)(h) >= (NU)(colontmp_.data->Sup.len)) raiseIndexError();
						s = colontmp_.data->data[h].Field1;
						if ((NU)(h) >= (NU)(colontmp_.data->Sup.len)) raiseIndexError();
						v = colontmp_.data->data[h].Field2;
						nimln_(46, "row.nim");
						coeff = ((NF)(v) * (NF)(coefficient));
						nimln_(51, "row.nim");
						T11_ = (NF)0;
						T11_ = getOrDefault_TbIvRcbeX9bjR9chF2ZmXBOw((*r).cells, s);
						temp = ((NF)(T11_) + (NF)(coeff));
						nimln_(52, "row.nim");
						{
							NIM_BOOL T14_;
							T14_ = (NIM_BOOL)0;
							T14_ = nearZero_lpEjYhVOWu9at03vpMuGIwgutil(temp);
							if (!T14_) goto LA15_;
							nimln_(53, "row.nim");
							del_05TIIOWYxDqMRRou5ciXRw((&(*r).cells), s);
						}
						goto LA12_;
						LA15_: ;
						{
							nimln_(55, "row.nim");
							X5BX5Deq__vB2R6t75uuHmCAOEWCUKNg((&(*r).cells), s, temp);
						}
						LA12_: ;
					}
					LA9_: ;
					nimln_(2048, "system.nim");
					TM_vRptPNB8aYlpLQIxDqb0QA_3 = addInt(res, ((NI) 1));
					res = (NI)(TM_vRptPNB8aYlpLQIxDqb0QA_3);
				} LA5: ;
			}
		}
	}
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, remove_bQOAkjiQcYVT3cpNEWuRzA)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NI32 symbol) {
	nimfr_("remove", "row.nim");
	nimln_(59, "row.nim");
	del_05TIIOWYxDqMRRou5ciXRw((&(*r).cells), symbol);
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, reverseSign_jJZG8PB1RQ9bjNe6GXKaYfw)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r) {
	nimfr_("reverseSign", "row.nim");
	nimln_(63, "row.nim");
	(*r).constant = -((*r).constant);
	{
		NI32 s;
		NF v;
		tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ colontmp_;
		s = (NI32)0;
		v = (NF)0;
		memset((void*)(&colontmp_), 0, sizeof(colontmp_));
		nimln_(64, "row.nim");
		colontmp_.data = (*r).cells.data;
		colontmp_.counter = (*r).cells.counter;
		{
			NI h;
			NI colontmp__2;
			NI T3_;
			NI res;
			h = (NI)0;
			colontmp__2 = (NI)0;
			nimln_(244, "tables.nim");
			T3_ = (colontmp_.data ? (colontmp_.data->Sup.len-1) : -1);
			colontmp__2 = T3_;
			nimln_(2045, "system.nim");
			res = ((NI) 0);
			{
				nimln_(2046, "system.nim");
				while (1) {
					NI TM_vRptPNB8aYlpLQIxDqb0QA_4;
					if (!(res <= colontmp__2)) goto LA5;
					nimln_(2047, "system.nim");
					h = res;
					nimln_(245, "tables.nim");
					{
						NIM_BOOL T8_;
						if ((NU)(h) >= (NU)(colontmp_.data->Sup.len)) raiseIndexError();
						T8_ = (NIM_BOOL)0;
						T8_ = isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables(colontmp_.data->data[h].Field0);
						if (!T8_) goto LA9_;
						if ((NU)(h) >= (NU)(colontmp_.data->Sup.len)) raiseIndexError();
						s = colontmp_.data->data[h].Field1;
						if ((NU)(h) >= (NU)(colontmp_.data->Sup.len)) raiseIndexError();
						v = colontmp_.data->data[h].Field2;
						nimln_(65, "row.nim");
						X5BX5Deq__vB2R6t75uuHmCAOEWCUKNg((&(*r).cells), s, -(v));
					}
					LA9_: ;
					nimln_(2048, "system.nim");
					TM_vRptPNB8aYlpLQIxDqb0QA_4 = addInt(res, ((NI) 1));
					res = (NI)(TM_vRptPNB8aYlpLQIxDqb0QA_4);
				} LA5: ;
			}
		}
	}
	popFrame();
}

static N_INLINE(void, stareq__7kHiltrvRlcg6wSYR3CxAwstrutils)(NF* x, NF y) {
	nimfr_("*=", "system.nim");
	nimln_(3710, "system.nim");
	(*x) = ((NF)((*x)) * (NF)(y));
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, solveFor_bQOAkjiQcYVT3cpNEWuRzA_2)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NI32 symbol) {
	NF coeff;
	NF* T1_;
	nimfr_("solveFor", "row.nim");
	nimln_(77, "row.nim");
	T1_ = (NF*)0;
	T1_ = X5BX5D__4h2FKwre7TOLSK9chhgIM9aQ((&(*r).cells), symbol);
	coeff = ((NF)(-1.0000000000000000e+000) / (NF)((*T1_)));
	nimln_(78, "row.nim");
	del_05TIIOWYxDqMRRou5ciXRw((&(*r).cells), symbol);
	nimln_(79, "row.nim");
	stareq__7kHiltrvRlcg6wSYR3CxAwstrutils((&(*r).constant), coeff);
	{
		NI32 s;
		NF v;
		tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ colontmp_;
		s = (NI32)0;
		v = (NF)0;
		memset((void*)(&colontmp_), 0, sizeof(colontmp_));
		nimln_(81, "row.nim");
		colontmp_.data = (*r).cells.data;
		colontmp_.counter = (*r).cells.counter;
		{
			NI h;
			NI colontmp__2;
			NI T4_;
			NI res;
			h = (NI)0;
			colontmp__2 = (NI)0;
			nimln_(244, "tables.nim");
			T4_ = (colontmp_.data ? (colontmp_.data->Sup.len-1) : -1);
			colontmp__2 = T4_;
			nimln_(2045, "system.nim");
			res = ((NI) 0);
			{
				nimln_(2046, "system.nim");
				while (1) {
					NI TM_vRptPNB8aYlpLQIxDqb0QA_5;
					if (!(res <= colontmp__2)) goto LA6;
					nimln_(2047, "system.nim");
					h = res;
					nimln_(245, "tables.nim");
					{
						NIM_BOOL T9_;
						if ((NU)(h) >= (NU)(colontmp_.data->Sup.len)) raiseIndexError();
						T9_ = (NIM_BOOL)0;
						T9_ = isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables(colontmp_.data->data[h].Field0);
						if (!T9_) goto LA10_;
						if ((NU)(h) >= (NU)(colontmp_.data->Sup.len)) raiseIndexError();
						s = colontmp_.data->data[h].Field1;
						if ((NU)(h) >= (NU)(colontmp_.data->Sup.len)) raiseIndexError();
						v = colontmp_.data->data[h].Field2;
						nimln_(82, "row.nim");
						X5BX5Deq__vB2R6t75uuHmCAOEWCUKNg((&(*r).cells), s, ((NF)(v) * (NF)(coeff)));
					}
					LA10_: ;
					nimln_(2048, "system.nim");
					TM_vRptPNB8aYlpLQIxDqb0QA_5 = addInt(res, ((NI) 1));
					res = (NI)(TM_vRptPNB8aYlpLQIxDqb0QA_5);
				} LA6: ;
			}
		}
	}
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, solveFor_VFO7UEsKWiy59a4bXSabcvg)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NI32 lhs, NI32 rhs) {
	nimfr_("solveFor", "row.nim");
	nimln_(94, "row.nim");
	insert_HF2miqnUbHserIV7thKQiA(r, lhs, -1.0000000000000000e+000);
	nimln_(95, "row.nim");
	solveFor_bQOAkjiQcYVT3cpNEWuRzA_2(r, rhs);
	popFrame();
}

static N_INLINE(NF, coefficientFor_6hrDMTycCu3p5g9cPEvqxtwrow)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NI32 symbol) {
	NF result;
	nimfr_("coefficientFor", "row.nim");
	result = (NF)0;
	nimln_(98, "row.nim");
	nimln_(101, "row.nim");
	result = getOrDefault_TbIvRcbeX9bjR9chF2ZmXBOw((*r).cells, symbol);
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, substitute_rqdwPcG2HuoCGE2s2zCJKQ)(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* r, NI32 symbol, tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg* row) {
	nimfr_("substitute", "row.nim");
	nimln_(110, "row.nim");
	{
		NIM_BOOL T3_;
		NF coefficient;
		NF* T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = contains_m2peCesR1lEbbyoaHf8XRg((*r).cells, symbol);
		if (!T3_) goto LA4_;
		nimln_(111, "row.nim");
		T6_ = (NF*)0;
		T6_ = X5BX5D__4h2FKwre7TOLSK9chhgIM9aQ((&(*r).cells), symbol);
		coefficient = (*T6_);
		nimln_(112, "row.nim");
		del_05TIIOWYxDqMRRou5ciXRw((&(*r).cells), symbol);
		nimln_(113, "row.nim");
		insert_yHMW3FT2eKgeRb9cnkKm7Dg(r, row, coefficient);
	}
	LA4_: ;
	popFrame();
}

static N_INLINE(NI, hash_mod2mo9a9b8bznQHjUjLXXoQtables)(NI32 x) {
	NI result;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(129, "hashes.nim");
	result = x;
	popFrame();
	return result;
}

static N_INLINE(NI, nextTry_OLPhxSyW9bte5CwHzzQVhfAtables)(NI h, NI maxHash) {
	NI result;
	NI TM_vRptPNB8aYlpLQIxDqb0QA_6;
	nimfr_("nextTry", "tableimpl.nim");
	result = (NI)0;
	nimln_(28, "tableimpl.nim");
	TM_vRptPNB8aYlpLQIxDqb0QA_6 = addInt(h, ((NI) 1));
	result = (NI)((NI)(TM_vRptPNB8aYlpLQIxDqb0QA_6) & maxHash);
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, rawGet_dNotdEKJw9cFqMzwCp0eU9cwtables)(tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ t, NI32 key, NI* hc) {
	NI result;
	NI h;
	NI T5_;
	NI TM_vRptPNB8aYlpLQIxDqb0QA_7;
	nimfr_("rawGet", "tableimpl.nim");
{	result = (NI)0;
	nimln_(53, "tableimpl.nim");
	(*hc) = hash_mod2mo9a9b8bznQHjUjLXXoQtables(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3_;
		nimln_(45, "tableimpl.nim");
		(*hc) = ((NI) 314159265);
	}
	LA3_: ;
	nimln_(31, "tableimpl.nim");
	nimln_(116, "tables.nim");
	T5_ = (t.data ? (t.data->Sup.len-1) : -1);
	h = (NI)((*hc) & T5_);
	{
		nimln_(32, "tableimpl.nim");
		while (1) {
			NIM_BOOL T8_;
			NI T15_;
			if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
			T8_ = (NIM_BOOL)0;
			T8_ = isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables(t.data->data[h].Field0);
			if (!T8_) goto LA7;
			nimln_(37, "tableimpl.nim");
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				T11_ = (t.data->data[h].Field0 == (*hc));
				if (!(T11_)) goto LA12_;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				T11_ = (t.data->data[h].Field1 == key);
				LA12_: ;
				if (!T11_) goto LA13_;
				nimln_(38, "tableimpl.nim");
				result = h;
				goto BeforeRet_;
			}
			LA13_: ;
			nimln_(39, "tableimpl.nim");
			nimln_(116, "tables.nim");
			T15_ = (t.data ? (t.data->Sup.len-1) : -1);
			h = nextTry_OLPhxSyW9bte5CwHzzQVhfAtables(h, T15_);
		} LA7: ;
	}
	nimln_(40, "tableimpl.nim");
	TM_vRptPNB8aYlpLQIxDqb0QA_7 = subInt(((NI) -1), h);
	result = (NI)(TM_vRptPNB8aYlpLQIxDqb0QA_7);
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(NI, rawGetKnownHC_T2bf2SoMHD3wA2Ut0S9ay9cQtables)(tyObject_Table_nLx2Wxz1tHL9b0fETuJh1cQ t, NI32 key, NI hc) {
	NI result;
	NI h;
	NI T1_;
	NI TM_vRptPNB8aYlpLQIxDqb0QA_8;
	nimfr_("rawGetKnownHC", "tableimpl.nim");
{	result = (NI)0;
	nimln_(31, "tableimpl.nim");
	nimln_(116, "tables.nim");
	T1_ = (t.data ? (t.data->Sup.len-1) : -1);
	h = (NI)(hc & T1_);
	{
		nimln_(32, "tableimpl.nim");
		while (1) {
			NIM_BOOL T4_;
			NI T11_;
			if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
			T4_ = (NIM_BOOL)0;
			T4_ = isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables(t.data->data[h].Field0);
			if (!T4_) goto LA3;
			nimln_(37, "tableimpl.nim");
			{
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				T7_ = (t.data->data[h].Field0 == hc);
				if (!(T7_)) goto LA8_;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				T7_ = (t.data->data[h].Field1 == key);
				LA8_: ;
				if (!T7_) goto LA9_;
				nimln_(38, "tableimpl.nim");
				result = h;
				goto BeforeRet_;
			}
			LA9_: ;
			nimln_(39, "tableimpl.nim");
			nimln_(116, "tables.nim");
			T11_ = (t.data ? (t.data->Sup.len-1) : -1);
			h = nextTry_OLPhxSyW9bte5CwHzzQVhfAtables(h, T11_);
		} LA3: ;
	}
	nimln_(40, "tableimpl.nim");
	TM_vRptPNB8aYlpLQIxDqb0QA_8 = subInt(((NI) -1), h);
	result = (NI)(TM_vRptPNB8aYlpLQIxDqb0QA_8);
	}BeforeRet_: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, kiwi_rowInit000)(void) {
	nimfr_("row", "row.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, kiwi_rowDatInit000)(void) {
static TNimNode* TM_vRptPNB8aYlpLQIxDqb0QA_2[2];
static TNimNode TM_vRptPNB8aYlpLQIxDqb0QA_0[3];
NTI_3v3Trv8fQ4akgNFwOlr6wg_.size = sizeof(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg);
NTI_3v3Trv8fQ4akgNFwOlr6wg_.kind = 18;
NTI_3v3Trv8fQ4akgNFwOlr6wg_.base = 0;
NTI_3v3Trv8fQ4akgNFwOlr6wg_.flags = 2;
TM_vRptPNB8aYlpLQIxDqb0QA_2[0] = &TM_vRptPNB8aYlpLQIxDqb0QA_0[1];
TM_vRptPNB8aYlpLQIxDqb0QA_0[1].kind = 1;
TM_vRptPNB8aYlpLQIxDqb0QA_0[1].offset = offsetof(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg, constant);
TM_vRptPNB8aYlpLQIxDqb0QA_0[1].typ = (&NTI_w9bl9a1ul9ctRJWiMl9cNnIMvg_);
TM_vRptPNB8aYlpLQIxDqb0QA_0[1].name = "constant";
TM_vRptPNB8aYlpLQIxDqb0QA_2[1] = &TM_vRptPNB8aYlpLQIxDqb0QA_0[2];
TM_vRptPNB8aYlpLQIxDqb0QA_0[2].kind = 1;
TM_vRptPNB8aYlpLQIxDqb0QA_0[2].offset = offsetof(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg, cells);
TM_vRptPNB8aYlpLQIxDqb0QA_0[2].typ = (&NTI_nLx2Wxz1tHL9b0fETuJh1cQ_);
TM_vRptPNB8aYlpLQIxDqb0QA_0[2].name = "cells";
TM_vRptPNB8aYlpLQIxDqb0QA_0[0].len = 2; TM_vRptPNB8aYlpLQIxDqb0QA_0[0].kind = 2; TM_vRptPNB8aYlpLQIxDqb0QA_0[0].sons = &TM_vRptPNB8aYlpLQIxDqb0QA_2[0];
NTI_3v3Trv8fQ4akgNFwOlr6wg_.node = &TM_vRptPNB8aYlpLQIxDqb0QA_0[0];
NTI_KKigocRgMzGiGYu7Ry6duA_.size = sizeof(tyObject_RowcolonObjectType__3v3Trv8fQ4akgNFwOlr6wg*);
NTI_KKigocRgMzGiGYu7Ry6duA_.kind = 22;
NTI_KKigocRgMzGiGYu7Ry6duA_.base = (&NTI_3v3Trv8fQ4akgNFwOlr6wg_);
NTI_KKigocRgMzGiGYu7Ry6duA_.flags = 2;
NTI_KKigocRgMzGiGYu7Ry6duA_.marker = Marker_tyRef_KKigocRgMzGiGYu7Ry6duA;
}

