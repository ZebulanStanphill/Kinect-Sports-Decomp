typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorSubtractFloatingPoint();


void fn_82300C98(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  unsigned int *puVar5;
  unsigned __int64 in_r0;
  int iVar6;
  __int64 lVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  if (*(int *)(param_2 + 0x554) == 3) {
    uVar1 = *(unsigned int *)(param_2 + 0x550);
    iVar6 = uVar1 - 1;
    if (uVar1 < 2) {
      iVar6 = 2;
    }
    lVar7 = 3;
    do {
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    pfVar2 = (float *)((uVar1 * 0x16 + param_3) * 0x10 + param_2 & 0xfffffff0);
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
    fVar10 = pfVar2[3];
    pfVar3 = (float *)((iVar6 * 0x16 + param_3) * 0x10 + param_2 & 0xfffffff0);
    fVar11 = pfVar3[1];
    fVar12 = pfVar3[2];
    fVar13 = pfVar3[3];
    vectorSubtractFloatingPoint(in_vs45,in_vs32);
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
    pfVar4 = (float *)((int)in_r0 + param_1 & 0xfffffff0);
    *pfVar4 = *pfVar2 * *pfVar3;
    pfVar4[1] = fVar8 * fVar11;
    pfVar4[2] = fVar9 * fVar12;
    pfVar4[3] = fVar10 * fVar13;
    return;
  }
  puVar5 = (unsigned int *)((int)in_r0 + param_1 & 0xfffffff0);
  *puVar5 = in_register_000104d0;
  puVar5[1] = in_register_000104d4;
  puVar5[2] = in_register_000104d8;
  puVar5[3] = in_vr77;
  return;
}

