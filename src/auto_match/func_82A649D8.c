#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int _blkmov();
extern unsigned int lbl_82002AE0;


void fn_82A649D8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  unsigned int uVar18;
  float fVar19;
  unsigned int *puVar20;
  unsigned int uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  __int64 lVar25;
  unsigned __int64 uVar26;
  float *pfVar27;
  float *pfVar28;
  int iVar29;
  unsigned int uVar30;
  float *pfVar33;
  __int64 lVar31;
  __int64 lVar32;
  __int64 lVar34;
  unsigned int *puVar35;
  unsigned __int64 uVar36;
  unsigned int uVar37;
  unsigned __int64 uVar38;
  unsigned __int64 uVar39;
  
  uVar30 = 0;
  uVar18 = param_1[2];
  fVar19 = (float)param_1[3];
  lVar34 = (unsigned __int64)uVar18 + 0x30;
  uVar26 = (unsigned __int64)(unsigned int)param_1[6];
  puVar20 = (unsigned int *)*param_1;
  uVar1 = (unsigned int)(float)param_1[4];
  pfVar33 = (float *)param_1[1];
  uVar21 = param_1[7];
  lVar25 = ((unsigned __int64)uVar1 + ((unsigned __int64)uVar1 & 0x7fffffff) * 2 & 0x7fffffff) * 2;
  uVar37 = param_1[9];
  uVar36 = (unsigned __int64)uVar37;
  fVar23 = (float)param_1[4] - (float)(__int64)(int)uVar1;
  puVar35 = (unsigned int *)lVar34;
  pfVar28 = pfVar33;
  fVar7 = lbl_82002AE0;
  if (uVar26 != 0) {
    uVar2 = puVar20[1];
    uVar3 = puVar20[2];
    uVar4 = puVar20[3];
    uVar5 = puVar20[4];
    uVar6 = puVar20[5];
    *puVar35 = *puVar20;
    *(unsigned int *)(uVar18 + 0x34) = uVar2;
    *(unsigned int *)(uVar18 + 0x38) = uVar3;
    *(unsigned int *)(uVar18 + 0x3c) = uVar4;
    *(unsigned int *)(uVar18 + 0x40) = uVar5;
    *(unsigned int *)(uVar18 + 0x44) = uVar6;
    fVar7 = lbl_82002AE0;
  }
  while (fVar24 = lbl_82002AE0, lbl_82002AE0 = fVar7, (int)uVar37 < 6) {
    if (uVar21 <= uVar30) goto LAB_82a64ca4;
    pfVar27 = (float *)(puVar35 + (int)uVar36);
    fVar9 = *(float *)((int)((uVar36 - 6 & 0xffffffff) << 2) + (int)puVar35);
    fVar10 = *(float *)((int)((uVar36 - 5 & 0xffffffff) << 2) + (int)puVar35);
    fVar11 = *(float *)((int)((uVar36 - 4 & 0xffffffff) << 2) + (int)puVar35);
    uVar38 = uVar36 + 5;
    fVar7 = pfVar27[1];
    fVar8 = pfVar27[-1];
    fVar12 = *(float *)((int)((uVar36 + 2 & 0xffffffff) << 2) + (int)puVar35);
    fVar13 = *(float *)((int)((uVar36 - 3 & 0xffffffff) << 2) + (int)puVar35);
    fVar14 = *(float *)((int)((uVar36 + 3 & 0xffffffff) << 2) + (int)puVar35);
    uVar30 = uVar30 + 6;
    fVar15 = *(float *)((int)((uVar36 - 2 & 0xffffffff) << 2) + (int)puVar35);
    fVar16 = *(float *)((int)((uVar36 + 4 & 0xffffffff) << 2) + (int)puVar35);
    uVar36 = lVar25 + uVar36;
    fVar17 = *(float *)((int)((uVar38 & 0xffffffff) << 2) + (int)puVar35);
    *pfVar28 = (*pfVar27 - fVar9) * fVar19 + fVar9;
    pfVar28[1] = (fVar7 - fVar10) * fVar19 + fVar10;
    pfVar28[2] = (fVar12 - fVar11) * fVar19 + fVar11;
    pfVar28[3] = (fVar14 - fVar13) * fVar19 + fVar13;
    pfVar28[4] = (fVar16 - fVar15) * fVar19 + fVar15;
    pfVar28[5] = (fVar17 - fVar8) * fVar19 + fVar8;
    for (fVar19 = fVar23 + fVar19; fVar24 <= fVar19; fVar19 = fVar19 - fVar24) {
      uVar36 = uVar36 + 6;
    }
    pfVar28 = pfVar28 + 6;
    fVar7 = lbl_82002AE0;
    lbl_82002AE0 = fVar24;
    uVar37 = (unsigned int)uVar36;
  }
  if (uVar30 < uVar21) {
    pfVar33 = pfVar33 + uVar30;
    do {
      pfVar28 = (float *)(puVar20 + (int)uVar36);
      fVar9 = *(float *)((int)((uVar36 - 6 & 0xffffffff) << 2) + (int)puVar20);
      fVar10 = *(float *)((int)((uVar36 - 5 & 0xffffffff) << 2) + (int)puVar20);
      fVar11 = *(float *)((int)((uVar36 - 4 & 0xffffffff) << 2) + (int)puVar20);
      uVar38 = uVar36 + 5;
      fVar7 = pfVar28[1];
      fVar8 = pfVar28[-1];
      fVar12 = *(float *)((int)((uVar36 + 2 & 0xffffffff) << 2) + (int)puVar20);
      fVar13 = *(float *)((int)((uVar36 - 3 & 0xffffffff) << 2) + (int)puVar20);
      fVar14 = *(float *)((int)((uVar36 + 3 & 0xffffffff) << 2) + (int)puVar20);
      uVar30 = uVar30 + 6;
      fVar15 = *(float *)((int)((uVar36 - 2 & 0xffffffff) << 2) + (int)puVar20);
      fVar16 = *(float *)((int)((uVar36 + 4 & 0xffffffff) << 2) + (int)puVar20);
      uVar36 = lVar25 + uVar36;
      fVar17 = *(float *)((int)((uVar38 & 0xffffffff) << 2) + (int)puVar20);
      *pfVar33 = (*pfVar28 - fVar9) * fVar19 + fVar9;
      pfVar33[1] = (fVar7 - fVar10) * fVar19 + fVar10;
      pfVar33[2] = (fVar12 - fVar11) * fVar19 + fVar11;
      pfVar33[3] = (fVar14 - fVar13) * fVar19 + fVar13;
      pfVar33[4] = (fVar16 - fVar15) * fVar19 + fVar15;
      pfVar33[5] = (fVar17 - fVar8) * fVar19 + fVar8;
      pfVar33 = pfVar33 + 6;
      for (fVar19 = fVar23 + fVar19; fVar24 <= fVar19; fVar19 = fVar19 - fVar24) {
        uVar36 = uVar36 + 6;
      }
    } while (uVar30 < uVar21);
  }
LAB_82a64ca4:
  if ((int)uVar36 < (int)(uVar26 - 6)) {
    uVar36 = uVar26 - 6;
  }
  uVar38 = (uVar36 - uVar26) - 6;
  param_1[3] = fVar19;
  param_1[9] = (int)(uVar36 - uVar26);
  iVar29 = (int)-uVar26;
  if ((int)uVar38 < iVar29) {
    if (3 < iVar29 - (int)uVar38) {
      lVar31 = (uVar38 & 0x3fffffff) * 4 + lVar34 + -4;
      lVar25 = ((uVar38 + uVar26) - 3 & 0x3fffffff) * 4 + lVar34;
      do {
        uVar39 = uVar26 + 2 + uVar38;
        iVar22 = (int)lVar31;
        *(unsigned int *)(iVar22 + 4) = *(unsigned int *)((int)lVar25 + 0xc);
        uVar36 = uVar26 + 3 + uVar38;
        lVar25 = lVar25 + 0x10;
        *(unsigned int *)(iVar22 + 8) = *(unsigned int *)lVar25;
        uVar38 = uVar38 + 4;
        *(unsigned int *)(iVar22 + 0xc) =
             *(unsigned int *)((int)((uVar39 & 0xffffffff) << 2) + (int)puVar35);
        lVar31 = lVar31 + 0x10;
        *(unsigned int *)lVar31 = *(unsigned int *)((int)((uVar36 & 0xffffffff) << 2) + (int)puVar35);
      } while ((int)uVar38 < iVar29 + -3);
    }
    if ((int)uVar38 < iVar29) {
      lVar32 = -uVar26 - uVar38;
      lVar31 = (uVar38 & 0x3fffffff) * 4 + lVar34 + -4;
      lVar25 = (uVar38 + uVar26 & 0x3fffffff) * 4 + lVar34 + -4;
      uVar38 = lVar32 + uVar38;
      do {
        lVar25 = lVar25 + 4;
        lVar31 = lVar31 + 4;
        *(unsigned int *)lVar31 = *(unsigned int *)lVar25;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
    }
  }
  if (3 < -(int)uVar38) {
    lVar32 = ((-uVar38 - 4 & 0xffffffff) >> 2) + 1;
    lVar31 = (uVar38 & 0x3fffffff) * 4 + lVar34 + -4;
    lVar25 = ((uVar38 + uVar26) - 3 & 0x3fffffff) * 4 + ZEXT48(puVar20);
    do {
      uVar36 = uVar26 + 2 + uVar38;
      iVar29 = (int)lVar25;
      uVar39 = uVar26 + 3 + uVar38;
      lVar25 = lVar25 + 0x10;
      uVar2 = *(unsigned int *)lVar25;
      iVar22 = (int)lVar31;
      *(unsigned int *)(iVar22 + 4) = *(unsigned int *)(iVar29 + 0xc);
      *(unsigned int *)(iVar22 + 8) = uVar2;
      uVar38 = uVar38 + 4;
      uVar2 = *(unsigned int *)((int)((uVar39 & 0xffffffff) << 2) + (int)puVar20);
      *(unsigned int *)(iVar22 + 0xc) =
           *(unsigned int *)((int)((uVar36 & 0xffffffff) << 2) + (int)puVar20);
      lVar31 = lVar31 + 0x10;
      *(unsigned int *)lVar31 = uVar2;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
  }
  if ((int)uVar38 < 0) {
    _blkmov((uVar38 & 0x3fffffff) * 4 + lVar34,
                 (uVar38 + uVar26 & 0x3fffffff) * 4 + ZEXT48(puVar20),(-uVar38 & 0x3fffffff) << 2);
  }
  return;
}

