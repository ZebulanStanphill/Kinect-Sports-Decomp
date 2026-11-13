typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int lbl_821959A4;
extern unsigned int lbl_8329EA20;
extern V16 vectorConditionalSelect();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823D6E60(double param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned int param_5)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  float *pfVar4;
  float fVar5;
  int in_r0;
  int iVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char auVar7 [16];
  unsigned char in_vs44 [16];
  float fVar8;
  float fVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  float afStack_20 [6];
  
  iVar6 = (*(int *)(param_3 + 0x2c) * 7 + *(int *)(param_3 + 0x28)) * 0x40 + param_2;
  *(float *)(iVar6 + 0x38) = (float)param_1;
  *(unsigned int *)(iVar6 + 0x30) = 2;
  puVar1 = (unsigned int *)((unsigned int)(&lbl_8329EA20 + in_r0) & 0xfffffff0);
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  uVar12 = puVar1[3];
  vectorConditionalSelect(in_vs44,in_vs43,in_vs42);
  puVar2 = (unsigned int *)(in_r0 + iVar6 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  *(unsigned int *)(iVar6 + 0x20) = 1;
  *(unsigned int *)(iVar6 + 0x34) = param_5;
  fVar5 = lbl_821959A4;{ V16 _vt0 = vectorConditionalSelect(in_vs33,in_vs32,in_vs44); memcpy(auVar7, &_vt0, 16); }
  param_2 = (*(int *)(param_3 + 0x2c) * 7 + *(int *)(param_3 + 0x28)) * 0x40 + param_2;
  uVar3 = in_r0 + param_2 & 0xfffffff0;
  fVar8 = *(float *)(uVar3 + 4);
  fVar9 = *(float *)(uVar3 + 8);{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs32,auVar7); memcpy(auVar7, &_vt1, 16); }
  fVar8 = fVar8 * fVar8 + 0.0 + fVar9 * fVar9;
  pfVar4 = (float *)((int)afStack_20 + in_r0 & 0xfffffff0);
  *pfVar4 = fVar8;
  pfVar4[1] = fVar8;
  pfVar4[2] = fVar8;
  pfVar4[3] = fVar8;
  if (fVar5 < afStack_20[0]) {
    *(unsigned int *)(param_2 + 0x20) = 2;
    vectorConditionalSelect(in_vs33,auVar7,in_vs44);
    puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
  }
  return;
}

