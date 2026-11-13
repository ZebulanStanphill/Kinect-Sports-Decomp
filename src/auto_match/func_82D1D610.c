typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_10;
extern unsigned int *auStack_20;
extern unsigned int lbl_82132D70;
extern unsigned int lbl_821CA820;
extern V16 vectorAddFloatingPoint();
extern V16 vectorLogicalAnd();
extern V16 vectorSubtractFloatingPoint();


void fn_82D1D610(int param_1)

{
  float *pfVar1;
  unsigned int *puVar2;
  float *pfVar3;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned char auStack_20 [16];
  unsigned char auStack_10 [16];
  
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  vectorAddFloatingPoint(in_vs32,in_vs45);
  pfVar1 = (float *)((unsigned int)(&lbl_82132D70 + in_r0) & 0xfffffff0);
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar6 = pfVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(&lbl_821CA820 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  vectorLogicalAnd(in_vs45,in_vs44);
  pfVar3 = (float *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  *pfVar3 = *pfVar1 * in_register_000100b0;
  pfVar3[1] = fVar4 * in_register_000100b4;
  pfVar3[2] = fVar5 * in_register_000100b8;
  pfVar3[3] = fVar6 * in_vr11;
  puVar2 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010090;
  puVar2[1] = in_register_00010094;
  puVar2[2] = in_register_00010098;
  puVar2[3] = in_vr9;
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  vectorAddFloatingPoint(in_vs32,in_vs45);
  puVar2 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  pfVar1 = (float *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  *pfVar1 = in_register_000100b0;
  pfVar1[1] = in_register_000100b4;
  pfVar1[2] = in_register_000100b8;
  pfVar1[3] = in_vr11;
  return;
}

