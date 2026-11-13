typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_50;
extern unsigned int fStack_38;
extern unsigned int fStack_48;
extern int fn_82F65018();
extern unsigned int lbl_831D2F20;
extern unsigned int lbl_831D2F24;
extern V16 vectorSubtractFloatingPoint();


void fn_823C77D0(int param_1)

{
  unsigned short uVar1;
  int iVar2;
  unsigned short *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  double dVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010000;
  unsigned int uVar7;
  unsigned int in_ACC;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int in_register_00010008;
  unsigned int uVar10;
  unsigned int in_vr0;
  unsigned int uVar11;
  unsigned char auStack_50 [8];
  float fStack_48;
  float afStack_40 [2];
  float fStack_38;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x240) + 0xe2c);
  puVar3 = *(unsigned short **)(((iVar2 == 0) + 0xa1) * 4 + *(int *)(param_1 + 0x240));
  uVar1 = *puVar3;
  if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
    puVar4 = (unsigned int *)((unsigned int)(puVar3 + 0x10) & 0xfffffff0);
    in_register_00010000 = *puVar4;
    in_ACC = puVar4[1];
    in_register_00010008 = puVar4[2];
    in_vr0 = puVar4[3];
  }
  uVar7 = *(unsigned int *)(param_1 + 0x1f0);
  uVar9 = *(unsigned int *)(param_1 + 0x1f8);
  puVar4 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar4 = in_register_00010000;
  puVar4[1] = in_ACC;
  puVar4[2] = in_register_00010008;
  puVar4[3] = in_vr0;
  if (iVar2 == 0) {
    fStack_48 = lbl_831D2F20 + fStack_48;
  }
  else {
    fStack_48 = fStack_48 - lbl_831D2F20;
  }
  puVar4 = (unsigned int *)(param_1 + 0x1c0U & 0xfffffff0);
  uVar8 = puVar4[1];
  uVar10 = puVar4[2];
  uVar11 = puVar4[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  puVar5 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar8;
  puVar5[2] = uVar10;
  puVar5[3] = uVar11;
  dVar6 = (double)fn_82F65018(-(double)afStack_40[0],-(double)fStack_38);
  *(unsigned int *)(param_1 + 0x228) = lbl_831D2F24;
  *(unsigned int *)(param_1 + 0x214) = uVar7;
  *(unsigned int *)(param_1 + 0x21c) = uVar9;
  puVar4 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  uVar7 = *puVar4;
  uVar9 = puVar4[1];
  uVar8 = puVar4[2];
  uVar10 = puVar4[3];
  *(float *)(param_1 + 0x218) = (float)dVar6;
  puVar4 = (unsigned int *)(param_1 + 0x1a0U & 0xfffffff0);
  *puVar4 = uVar7;
  puVar4[1] = uVar9;
  puVar4[2] = uVar8;
  puVar4[3] = uVar10;
  return;
}

