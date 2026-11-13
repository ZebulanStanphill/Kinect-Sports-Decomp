typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int lbl_82134508;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B1A0;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D11518(int param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  float *pfVar5;
  float *pfVar6;
  unsigned int uVar7;
  unsigned __int64 in_r0;
  int iVar8;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar9;
  float fVar10;
  unsigned int uVar11;
  float fVar12;
  unsigned int uVar13;
  float fVar14;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  float in_register_000100c0;
  float in_register_000100c4;
  float in_register_000100c8;
  float in_vr12;
  
  uVar7 = lbl_821AAD20;
  iVar8 = param_1 + 0x80;
  if (*(float *)(param_1 + 0x8c) != lbl_82134508) {
    return;
  }
  iVar3 = (int)in_r0;
  puVar2 = (unsigned int *)((unsigned int)(&lbl_8323B1A0 + iVar3) & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar11 = puVar2[2];
  uVar13 = puVar2[3];
  puVar4 = (unsigned int *)(iVar3 + iVar8 & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar9;
  puVar4[2] = uVar11;
  puVar4[3] = uVar13;
  piVar1 = *(int **)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    do {
      pfVar5 = (float *)(iVar3 + param_1 + 0x110 & 0xfffffff0);
      in_register_000100c0 = *pfVar5;
      in_register_000100c4 = pfVar5[1];
      in_register_000100c8 = pfVar5[2];
      in_vr12 = pfVar5[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs32,in_vs44,in_vs45); memcpy(in_vs32, &_vt0, 16); }
      vectorAddFloatingPoint(in_vs43,in_vs32);
      puVar2 = (unsigned int *)(iVar3 + iVar8 & 0xfffffff0);
      *puVar2 = in_register_000100a0;
      puVar2[1] = in_register_000100a4;
      puVar2[2] = in_register_000100a8;
      puVar2[3] = in_vr10;
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    pfVar5 = (float *)(iVar3 + iVar8 & 0xfffffff0);
    fVar10 = pfVar5[1];
    fVar12 = pfVar5[2];
    fVar14 = pfVar5[3];
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x30);
    pfVar6 = (float *)(iVar3 + iVar8 & 0xfffffff0);
    *pfVar6 = *pfVar5 * in_register_000100c0;
    pfVar6[1] = fVar10 * in_register_000100c4;
    pfVar6[2] = fVar12 * in_register_000100c8;
    pfVar6[3] = fVar14 * in_vr12;
  }
  *(unsigned int *)(param_1 + 0x8c) = uVar7;
  return;
}

