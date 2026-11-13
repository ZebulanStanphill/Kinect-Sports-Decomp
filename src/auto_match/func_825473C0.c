typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_44;
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_82546A70();
extern int fn_8262FEC8();
extern int fn_8263C550();
extern int fn_8263CA78();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int lbl_821CE9E0;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern V16 vectorConvertFromSignedFixedPointWord();
extern V16 vectorConvertToSignedFixedPointWordSaturate();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825473C0(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3)

{
  float *pfVar1;
  float *pfVar2;
  int in_r0;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  unsigned char in_vs32 [16];
  unsigned char auVar6 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  unsigned char auStack_50 [4];
  unsigned char auStack_4c [4];
  unsigned char auStack_48 [4];
  unsigned char auStack_44 [4];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  int iStack_28;
  int iStack_24;
  
  fn_82546A70(param_1,auStack_50,auStack_48,auStack_4c,auStack_44);
  pfVar1 = (float *)((unsigned int)(&lbl_821CE9E0 + in_r0) & 0xfffffff0);
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  uStack_38 = lbl_8326B430;
  uStack_40 = lbl_8326B430;
  uStack_34 = lbl_8326B434;
  uStack_3c = lbl_8326B434;
  vectorConvertFromSignedFixedPointWord(in_vs44,0);{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs32,in_vs45); memcpy(auVar6, &_vt0, 16); }
  vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
  pfVar2 = (float *)(in_r0 + (int)param_2 & 0xfffffff0);
  *pfVar2 = *pfVar1 * in_register_000100b0;
  pfVar2[1] = fVar7 * in_register_000100b4;
  pfVar2[2] = fVar8 * in_register_000100b8;
  pfVar2[3] = fVar9 * in_vr11;
  uVar3 = fn_8263C550(param_3,0);
  fn_8263CA78(uVar3,&uStack_40);
  fn_8262FEC8(uVar3);
  iVar4 = param_2[2] - *param_2;
  if (iStack_28 <= iVar4) {
    iVar4 = iStack_28;
  }
  iVar5 = param_2[3] - param_2[1];
  param_2[2] = *param_2 + iVar4;
  if (iStack_24 <= iVar5) {
    iVar5 = iStack_24;
  }
  param_2[3] = param_2[1] + iVar5;
  return;
}

