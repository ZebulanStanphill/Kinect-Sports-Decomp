typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_10;
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern unsigned int fStack_8;
extern unsigned int fStack_c;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


void fn_82D0AFD8(float *param_1,unsigned __int64 param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  unsigned __int64 in_r0;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  fVar4 = lbl_821AAD20;
  fVar3 = lbl_82002AE0;
  iVar2 = (int)in_r0;
  pfVar1 = (float *)(iVar2 + (int)param_1 & 0xfffffff0);
  fVar5 = *pfVar1;
  fVar6 = pfVar1[1];
  fVar7 = pfVar1[2];
  fVar8 = pfVar1[3];
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x30);
  pfVar1 = (float *)((int)&fStack_20 + iVar2 & 0xfffffff0);
  *pfVar1 = fVar5 * in_register_000100b0;
  pfVar1[1] = fVar6 * in_register_000100b4;
  pfVar1[2] = fVar7 * in_register_000100b8;
  pfVar1[3] = fVar8 * in_vr11;
  pfVar1 = (float *)((int)&fStack_10 + iVar2 & 0xfffffff0);
  *pfVar1 = fVar5 * fVar5 * in_register_000100b0;
  pfVar1[1] = fVar6 * fVar6 * in_register_000100b4;
  pfVar1[2] = fVar7 * fVar7 * in_register_000100b8;
  pfVar1[3] = fVar8 * fVar8 * in_vr11;
  *param_3 = fStack_10 + fVar3;
  fVar5 = *param_1;
  param_3[4] = fVar5 * fStack_1c;
  fVar6 = *param_1;
  param_3[8] = fVar6 * fStack_18;
  fVar7 = param_1[3];
  param_3[5] = fStack_c + fVar3;
  param_3[0xc] = fVar7 * fStack_20;
  param_3[1] = fVar5 * fStack_1c;
  fVar5 = param_1[1];
  param_3[9] = fVar5 * fStack_18;
  fVar7 = param_1[3];
  param_3[2] = fVar6 * fStack_18;
  param_3[0xd] = fVar7 * fStack_1c;
  param_3[6] = fVar5 * fStack_18;
  param_3[10] = fStack_8 + fVar3;
  param_3[0xe] = param_1[3] * fStack_18;
  param_3[3] = fVar4;
  param_3[7] = fVar4;
  param_3[0xb] = fVar4;
  param_3[0xf] = fVar3;
  return;
}

