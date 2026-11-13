typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int lbl_82134508;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B1A0;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();


void fn_82D10C70(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  float *pfVar4;
  float *pfVar5;
  unsigned __int64 in_r0;
  int iVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar7;
  float fVar8;
  unsigned int uVar9;
  float fVar10;
  unsigned int uVar11;
  float fVar12;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  
  iVar6 = param_1 + 0x70;
  if (*(float *)(param_1 + 0x7c) != lbl_82134508) {
    return;
  }
  iVar2 = (int)in_r0;
  puVar1 = (unsigned int *)((unsigned int)(&lbl_8323B1A0 + iVar2) & 0xfffffff0);
  uVar7 = puVar1[1];
  uVar9 = puVar1[2];
  uVar11 = puVar1[3];
  puVar3 = (unsigned int *)(iVar2 + iVar6 & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar7;
  puVar3[2] = uVar9;
  puVar3[3] = uVar11;
  for (puVar1 = *(unsigned int **)(param_1 + 0x24); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    vectorAddFloatingPoint(in_vs45,in_vs32);
    pfVar4 = (float *)(iVar2 + iVar6 & 0xfffffff0);
    *pfVar4 = in_register_000100c0;
    pfVar4[1] = in_register_000100c4;
    pfVar4[2] = in_register_000100c8;
    pfVar4[3] = in_vr12;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    pfVar4 = (float *)(iVar2 + iVar6 & 0xfffffff0);
    fVar8 = pfVar4[1];
    fVar10 = pfVar4[2];
    fVar12 = pfVar4[3];
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
    pfVar5 = (float *)(iVar2 + iVar6 & 0xfffffff0);
    *pfVar5 = *pfVar4 * in_register_000100c0;
    pfVar5[1] = fVar8 * in_register_000100c4;
    pfVar5[2] = fVar10 * in_register_000100c8;
    pfVar5[3] = fVar12 * in_vr12;
  }
  *(unsigned int *)(param_1 + 0x7c) = lbl_821AAD20;
  return;
}

