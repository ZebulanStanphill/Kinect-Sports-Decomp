#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int _blkmov();
extern unsigned int lbl_82002AE0;


void fn_82A646D0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  int iVar17;
  __int64 lVar18;
  unsigned int *puVar19;
  unsigned int uVar20;
  float *pfVar23;
  __int64 lVar21;
  __int64 lVar22;
  unsigned __int64 uVar24;
  unsigned int uVar25;
  unsigned __int64 uVar26;
  unsigned __int64 uVar27;
  
  uVar20 = 0;
  fVar6 = (float)param_1[3];
  uVar7 = param_1[2];
  uVar16 = (unsigned __int64)(unsigned int)param_1[6];
  lVar18 = (unsigned __int64)uVar7 + 0x10;
  puVar8 = (unsigned int *)*param_1;
  uVar1 = (unsigned int)(float)param_1[4];
  pfVar23 = (float *)param_1[1];
  uVar9 = param_1[7];
  uVar25 = param_1[9];
  uVar24 = (unsigned __int64)uVar25;
  lVar15 = ((unsigned __int64)uVar1 & 0x7fffffff) * 2;
  fVar13 = (float)param_1[4] - (float)(__int64)(int)uVar1;
  puVar19 = (unsigned int *)lVar18;
  pfVar11 = pfVar23;
  fVar3 = lbl_82002AE0;
  if (uVar16 != 0) {
    uVar2 = puVar8[1];
    *puVar19 = *puVar8;
    *(unsigned int *)(uVar7 + 0x14) = uVar2;
    fVar3 = lbl_82002AE0;
  }
  while (fVar14 = lbl_82002AE0, lbl_82002AE0 = fVar3, (int)uVar25 < 2) {
    if (uVar9 <= uVar20) goto LAB_82a64850;
    uVar26 = uVar24 - 2;
    pfVar10 = (float *)(puVar19 + (int)uVar24);
    uVar20 = uVar20 + 2;
    uVar24 = lVar15 + uVar24;
    fVar3 = pfVar10[-1];
    fVar5 = *(float *)((int)((uVar26 & 0xffffffff) << 2) + (int)puVar19);
    fVar4 = pfVar10[1];
    *pfVar11 = (*pfVar10 - fVar5) * fVar6 + fVar5;
    pfVar11[1] = (fVar4 - fVar3) * fVar6 + fVar3;
    for (fVar6 = fVar13 + fVar6; fVar14 <= fVar6; fVar6 = fVar6 - fVar14) {
      uVar24 = uVar24 + 2;
    }
    pfVar11 = pfVar11 + 2;
    fVar3 = lbl_82002AE0;
    lbl_82002AE0 = fVar14;
    uVar25 = (unsigned int)uVar24;
  }
  if (uVar20 < uVar9) {
    pfVar23 = pfVar23 + uVar20;
    do {
      uVar26 = uVar24 - 2;
      pfVar11 = (float *)(puVar8 + (int)uVar24);
      uVar20 = uVar20 + 2;
      uVar24 = lVar15 + uVar24;
      fVar3 = pfVar11[-1];
      fVar5 = *(float *)((int)((uVar26 & 0xffffffff) << 2) + (int)puVar8);
      fVar4 = pfVar11[1];
      *pfVar23 = (*pfVar11 - fVar5) * fVar6 + fVar5;
      pfVar23[1] = (fVar4 - fVar3) * fVar6 + fVar3;
      pfVar23 = pfVar23 + 2;
      for (fVar6 = fVar13 + fVar6; fVar14 <= fVar6; fVar6 = fVar6 - fVar14) {
        uVar24 = uVar24 + 2;
      }
    } while (uVar20 < uVar9);
  }
LAB_82a64850:
  if ((int)uVar24 < (int)(uVar16 - 2)) {
    uVar24 = uVar16 - 2;
  }
  uVar26 = (uVar24 - uVar16) - 2;
  param_1[3] = fVar6;
  param_1[9] = (int)(uVar24 - uVar16);
  iVar17 = (int)-uVar16;
  if ((int)uVar26 < iVar17) {
    if (3 < iVar17 - (int)uVar26) {
      lVar21 = (uVar26 & 0x3fffffff) * 4 + lVar18 + -4;
      lVar15 = ((uVar26 + uVar16) - 3 & 0x3fffffff) * 4 + lVar18;
      do {
        uVar27 = uVar16 + 2 + uVar26;
        iVar12 = (int)lVar21;
        *(unsigned int *)(iVar12 + 4) = *(unsigned int *)((int)lVar15 + 0xc);
        uVar24 = uVar16 + 3 + uVar26;
        lVar15 = lVar15 + 0x10;
        *(unsigned int *)(iVar12 + 8) = *(unsigned int *)lVar15;
        uVar26 = uVar26 + 4;
        *(unsigned int *)(iVar12 + 0xc) =
             *(unsigned int *)((int)((uVar27 & 0xffffffff) << 2) + (int)puVar19);
        lVar21 = lVar21 + 0x10;
        *(unsigned int *)lVar21 = *(unsigned int *)((int)((uVar24 & 0xffffffff) << 2) + (int)puVar19);
      } while ((int)uVar26 < iVar17 + -3);
    }
    if ((int)uVar26 < iVar17) {
      lVar22 = -uVar16 - uVar26;
      lVar21 = (uVar26 & 0x3fffffff) * 4 + lVar18 + -4;
      lVar15 = (uVar26 + uVar16 & 0x3fffffff) * 4 + lVar18 + -4;
      uVar26 = lVar22 + uVar26;
      do {
        lVar15 = lVar15 + 4;
        lVar21 = lVar21 + 4;
        *(unsigned int *)lVar21 = *(unsigned int *)lVar15;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
    }
  }
  if (3 < -(int)uVar26) {
    lVar22 = ((-uVar26 - 4 & 0xffffffff) >> 2) + 1;
    lVar21 = (uVar26 & 0x3fffffff) * 4 + lVar18 + -4;
    lVar15 = ((uVar26 + uVar16) - 3 & 0x3fffffff) * 4 + ZEXT48(puVar8);
    do {
      uVar27 = uVar16 + 2 + uVar26;
      iVar17 = (int)lVar15;
      uVar24 = uVar16 + 3 + uVar26;
      lVar15 = lVar15 + 0x10;
      uVar2 = *(unsigned int *)lVar15;
      iVar12 = (int)lVar21;
      *(unsigned int *)(iVar12 + 4) = *(unsigned int *)(iVar17 + 0xc);
      *(unsigned int *)(iVar12 + 8) = uVar2;
      uVar26 = uVar26 + 4;
      uVar2 = *(unsigned int *)((int)((uVar24 & 0xffffffff) << 2) + (int)puVar8);
      *(unsigned int *)(iVar12 + 0xc) =
           *(unsigned int *)((int)((uVar27 & 0xffffffff) << 2) + (int)puVar8);
      lVar21 = lVar21 + 0x10;
      *(unsigned int *)lVar21 = uVar2;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  if ((int)uVar26 < 0) {
    _blkmov((uVar26 & 0x3fffffff) * 4 + lVar18,
                 (uVar26 + uVar16 & 0x3fffffff) * 4 + ZEXT48(puVar8),(-uVar26 & 0x3fffffff) << 2);
  }
  return;
}

