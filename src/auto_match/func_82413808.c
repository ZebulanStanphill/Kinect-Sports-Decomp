typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_10;
extern unsigned int *auStack_20;
extern unsigned int lbl_821920E0;
extern unsigned int lbl_82192100;
extern unsigned int lbl_82192120;
extern V16 vectorAddFloatingPoint();


void fn_82413808(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned char *puVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned char auStack_20 [16];
  unsigned char auStack_10 [16];
  
  uVar1 = *(unsigned int *)(param_1 + 0x208);
  puVar2 = (unsigned int *)(param_2 + 0x1d0U & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puVar2 = (unsigned int *)(param_2 + 0x1f0U & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar4 = &lbl_821920E0;
  puVar3 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  if (uVar1 == 0) {
    puVar4 = &lbl_821920E0;
  }
  else if (uVar1 == 1) {
    puVar4 = &lbl_82192100;
  }
  else if (uVar1 < 3) {
    puVar4 = &lbl_82192120;
  }
  puVar2 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  vectorAddFloatingPoint(in_vs32,in_vs44);
  vectorAddFloatingPoint(in_vs32,in_vs45);
  *(unsigned int *)(param_1 + 0x230) = *(unsigned int *)(puVar4 + 0x1c);
  puVar2 = (unsigned int *)(param_1 + 0x210U & 0xfffffff0);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  puVar2 = (unsigned int *)(param_1 + 0x220U & 0xfffffff0);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  return;
}

