typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_90;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_8307E9F8();
extern unsigned int lbl_82132D70;
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();


void fn_82D3F450(int param_1,unsigned int *param_2,int param_3,__int64 param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  float *pfVar4;
  float *pfVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int in_r0;
  int iVar8;
  int iVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  int iVar16;
  unsigned __int64 uVar17;
  unsigned int *puVar18;
  int iVar19;
  int *piVar20;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float in_register_000100a0;
  float in_register_000100a4;
  float in_register_000100a8;
  float in_vr10;
  float in_register_000100b0;
  float in_register_000100b4;
  float in_register_000100b8;
  float in_vr11;
  unsigned char auStack_90 [144];
  
  iVar9 = (int)param_4;
  *(int *)(param_1 + 0x4c) = iVar9;
  uVar6 = param_4 + 3U & 0xfffffffc;
  iVar19 = (int)uVar6;
  iVar16 = iVar19 >> 2;
  piVar20 = (int *)(param_1 + 0x40);
  iVar8 = fn_82CE5410();
  if ((int)(*(unsigned int *)(param_1 + 0x48) & 0x3fffffff) < iVar16) {
    lVar10 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x48) & 0x3fffffff) << 1;
    if ((int)lVar10 <= iVar16) {
      lVar10 = (__int64)iVar16;
    }
    fn_82CE6310(*(unsigned int *)(iVar8 + 0x10),piVar20,lVar10,0x30);
  }
  *(int *)(param_1 + 0x44) = iVar16;
  uVar17 = 0;
  puVar18 = param_2;
  if (3 < iVar9) {
    uVar15 = 1;
    lVar10 = ((param_4 - 4U & 0xffffffff) >> 2) + 1;
    do {
      uVar11 = (((uVar17 & 0xffffffff) >> 2) + ((uVar17 & 0xffffffff) >> 1)) * 4 & 0xfffffffc;
      *(unsigned int *)((int)(uVar11 << 2) + *piVar20) = *puVar18;
      lVar12 = ((((uVar15 & 0xffffffff) >> 2) + ((uVar15 & 0xffffffff) >> 1 & 0x7ffffffe)) * 4 &
               0xfffffffc) + (uVar15 & 3);
      lVar13 = (((uVar15 + 1 & 0xffffffff) >> 2) * 0xc & 0xfffffffc) + (uVar15 + 1 & 3);
      *(unsigned int *)((int)((uVar11 + 4 & 0xffffffff) << 2) + *piVar20) = puVar18[1];
      *(unsigned int *)((int)((uVar11 + 8 & 0xffffffff) << 2) + *piVar20) = puVar18[2];
      puVar18 = (unsigned int *)((int)puVar18 + param_3);
      *(unsigned int *)((int)lVar12 * 4 + *piVar20) = *puVar18;
      *(unsigned int *)((int)((lVar12 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
      lVar14 = (((uVar15 + 2 & 0xffffffff) >> 2) * 0xc & 0xfffffffc) + (uVar15 - 2 & 3);
      *(unsigned int *)((int)((lVar12 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
      puVar18 = (unsigned int *)((int)puVar18 + param_3);
      *(unsigned int *)((int)lVar13 * 4 + *piVar20) = *puVar18;
      *(unsigned int *)((int)((lVar13 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
      *(unsigned int *)((int)((lVar13 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
      puVar1 = (unsigned int *)((int)puVar18 + param_3);
      *(unsigned int *)((int)lVar14 * 4 + *piVar20) = *puVar1;
      *(unsigned int *)((int)((lVar14 + 4U & 0xffffffff) << 2) + *piVar20) = puVar1[1];
      puVar18 = (unsigned int *)((int)puVar1 + param_3);
      uVar17 = uVar17 + 4;
      uVar15 = uVar15 + 4;
      *(unsigned int *)((int)((lVar14 + 8U & 0xffffffff) << 2) + *piVar20) = puVar1[2];
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((int)uVar17 < iVar9) {
    lVar10 = param_4 - uVar17;
    do {
      uVar15 = uVar17 & 0xffffffff;
      uVar11 = uVar17 & 0xffffffff;
      uVar7 = uVar17 & 3;
      uVar17 = uVar17 + 1;
      lVar12 = (((uVar11 >> 2) + (uVar15 >> 1 & 0x7ffffffe)) * 4 & 0xfffffffc) + uVar7;
      *(unsigned int *)((int)lVar12 * 4 + *piVar20) = *puVar18;
      *(unsigned int *)((int)((lVar12 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
      puVar1 = puVar18 + 2;
      puVar18 = (unsigned int *)((int)puVar18 + param_3);
      *(unsigned int *)((int)((lVar12 + 8U & 0xffffffff) << 2) + *piVar20) = *puVar1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  puVar18 = (unsigned int *)((int)puVar18 - param_3);
  if ((int)uVar17 < iVar19) {
    if (3 < iVar19 - (int)uVar17) {
      uVar15 = uVar17 + 1;
      lVar10 = (((uVar6 - uVar17) - 4 & 0xffffffff) >> 2) + 1;
      do {
        uVar2 = (int)uVar17 >> 2;
        iVar16 = (int)uVar15;
        lVar12 = ((__int64)(int)uVar2 + ((unsigned __int64)uVar2 & 0x7fffffff) * 2 & 0x3fffffff) * 4 +
                 (uVar17 & 3);
        lVar13 = ((__int64)(iVar16 >> 2) + ((unsigned __int64)(unsigned int)(iVar16 >> 2) & 0x7fffffff) * 2 &
                 0x3fffffff) * 4 + (uVar15 & 3);
        *(unsigned int *)((int)lVar12 * 4 + *piVar20) = *puVar18;
        uVar2 = iVar16 + 1 >> 2;
        uVar3 = iVar16 + 2 >> 2;
        lVar14 = ((__int64)(int)uVar2 + ((unsigned __int64)uVar2 & 0x7fffffff) * 2 & 0x3fffffff) * 4 +
                 (uVar15 + 1 & 3);
        uVar17 = uVar17 + 4;
        *(unsigned int *)((int)((lVar12 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
        *(unsigned int *)((int)((lVar12 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
        lVar12 = ((__int64)(int)uVar3 + ((unsigned __int64)uVar3 & 0x7fffffff) * 2 & 0x3fffffff) * 4 +
                 (uVar15 - 2 & 3);
        *(unsigned int *)((int)lVar13 * 4 + *piVar20) = *puVar18;
        *(unsigned int *)((int)((lVar13 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
        *(unsigned int *)((int)((lVar13 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
        *(unsigned int *)((int)lVar14 * 4 + *piVar20) = *puVar18;
        *(unsigned int *)((int)((lVar14 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
        *(unsigned int *)((int)((lVar14 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
        *(unsigned int *)((int)lVar12 * 4 + *piVar20) = *puVar18;
        *(unsigned int *)((int)((lVar12 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
        uVar15 = uVar15 + 4;
        *(unsigned int *)((int)((lVar12 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if ((int)uVar17 < iVar19) {
      lVar10 = uVar6 - uVar17;
      do {
        uVar2 = (int)uVar17 >> 2;
        uVar6 = uVar17 & 3;
        uVar17 = uVar17 + 1;
        lVar12 = ((__int64)(int)uVar2 + ((unsigned __int64)uVar2 & 0x7fffffff) * 2 & 0x3fffffff) * 4 +
                 uVar6;
        *(unsigned int *)((int)lVar12 * 4 + *piVar20) = *puVar18;
        *(unsigned int *)((int)((lVar12 + 4U & 0xffffffff) << 2) + *piVar20) = puVar18[1];
        *(unsigned int *)((int)((lVar12 + 8U & 0xffffffff) << 2) + *piVar20) = puVar18[2];
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  fn_8307E9F8(param_2,param_4,param_3,auStack_90);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  vectorAddFloatingPoint(in_vs45,in_vs32);
  pfVar4 = (float *)((unsigned int)(&lbl_82132D70 + in_r0) & 0xfffffff0);
  fVar21 = pfVar4[1];
  fVar22 = pfVar4[2];
  fVar23 = pfVar4[3];
  pfVar5 = (float *)(param_1 + 0x20U & 0xfffffff0);
  *pfVar5 = *pfVar4 * in_register_000100b0;
  pfVar5[1] = fVar21 * in_register_000100b4;
  pfVar5[2] = fVar22 * in_register_000100b8;
  pfVar5[3] = fVar23 * in_vr11;
  pfVar4 = (float *)((unsigned int)(&lbl_82132D70 + in_r0) & 0xfffffff0);
  fVar21 = pfVar4[1];
  fVar22 = pfVar4[2];
  fVar23 = pfVar4[3];
  pfVar5 = (float *)(param_1 + 0x30U & 0xfffffff0);
  *pfVar5 = *pfVar4 * in_register_000100a0;
  pfVar5[1] = fVar21 * in_register_000100a4;
  pfVar5[2] = fVar22 * in_register_000100a8;
  pfVar5[3] = fVar23 * in_vr10;
  return;
}

