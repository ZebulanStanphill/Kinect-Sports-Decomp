#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201467C;


void fn_82A65C20(unsigned int *param_1)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  unsigned int uVar20;
  float fVar21;
  short *psVar22;
  unsigned int uVar23;
  float fVar24;
  short *psVar25;
  int iVar26;
  float *pfVar27;
  float fVar28;
  float fVar29;
  __int64 lVar30;
  unsigned __int64 uVar31;
  float *pfVar32;
  int iVar33;
  unsigned int uVar34;
  float *pfVar37;
  __int64 lVar35;
  __int64 lVar36;
  __int64 lVar38;
  float *pfVar39;
  unsigned __int64 uVar40;
  unsigned int uVar41;
  unsigned __int64 uVar42;
  unsigned __int64 uVar43;
  
  fVar29 = lbl_8201467C;
  uVar20 = param_1[2];
  uVar34 = 0;
  fVar21 = (float)param_1[3];
  lVar38 = (unsigned __int64)uVar20 + 0x30;
  uVar31 = (unsigned __int64)(unsigned int)param_1[6];
  psVar22 = (short *)*param_1;
  uVar1 = (unsigned int)(float)param_1[4];
  pfVar37 = (float *)param_1[1];
  uVar23 = param_1[7];
  uVar41 = param_1[9];
  uVar40 = (unsigned __int64)uVar41;
  lVar30 = ((unsigned __int64)uVar1 + ((unsigned __int64)uVar1 & 0x7fffffff) * 2 & 0x7fffffff) * 2;
  fVar24 = (float)param_1[4] - (float)(__int64)(int)uVar1;
  pfVar39 = (float *)lVar38;
  pfVar27 = pfVar37;
  fVar2 = lbl_82002AE0;
  if (uVar31 != 0) {
    sVar13 = psVar22[4];
    sVar14 = psVar22[5];
    sVar15 = *psVar22;
    sVar16 = psVar22[1];
    sVar17 = psVar22[2];
    *(float *)(uVar20 + 0x3c) = (float)(__int64)psVar22[3] * lbl_8201467C;
    *pfVar39 = (float)(__int64)sVar15 * fVar29;
    *(float *)(uVar20 + 0x38) = (float)(__int64)sVar17 * fVar29;
    *(float *)(uVar20 + 0x34) = (float)(__int64)sVar16 * fVar29;
    *(float *)(uVar20 + 0x40) = (float)(__int64)sVar13 * fVar29;
    *(float *)(uVar20 + 0x44) = (float)(__int64)sVar14 * fVar29;
    fVar2 = lbl_82002AE0;
  }
  while (fVar28 = lbl_82002AE0, lbl_82002AE0 = fVar2, (int)uVar41 < 6) {
    if (uVar23 <= uVar34) goto LAB_82a660bc;
    pfVar32 = pfVar39 + (int)uVar40;
    fVar4 = *(float *)((int)((uVar40 - 6 & 0xffffffff) << 2) + (int)pfVar39);
    fVar5 = *(float *)((int)((uVar40 - 5 & 0xffffffff) << 2) + (int)pfVar39);
    fVar6 = *(float *)((int)((uVar40 - 4 & 0xffffffff) << 2) + (int)pfVar39);
    uVar42 = uVar40 + 5;
    fVar2 = pfVar32[1];
    fVar3 = pfVar32[-1];
    fVar7 = *(float *)((int)((uVar40 + 2 & 0xffffffff) << 2) + (int)pfVar39);
    fVar8 = *(float *)((int)((uVar40 - 3 & 0xffffffff) << 2) + (int)pfVar39);
    fVar9 = *(float *)((int)((uVar40 + 3 & 0xffffffff) << 2) + (int)pfVar39);
    uVar34 = uVar34 + 6;
    fVar10 = *(float *)((int)((uVar40 - 2 & 0xffffffff) << 2) + (int)pfVar39);
    fVar11 = *(float *)((int)((uVar40 + 4 & 0xffffffff) << 2) + (int)pfVar39);
    uVar40 = lVar30 + uVar40;
    fVar12 = *(float *)((int)((uVar42 & 0xffffffff) << 2) + (int)pfVar39);
    *pfVar27 = (*pfVar32 - fVar4) * fVar21 + fVar4;
    pfVar27[1] = (fVar2 - fVar5) * fVar21 + fVar5;
    pfVar27[2] = (fVar7 - fVar6) * fVar21 + fVar6;
    pfVar27[3] = (fVar9 - fVar8) * fVar21 + fVar8;
    pfVar27[4] = (fVar11 - fVar10) * fVar21 + fVar10;
    pfVar27[5] = (fVar12 - fVar3) * fVar21 + fVar3;
    for (fVar21 = fVar24 + fVar21; fVar28 <= fVar21; fVar21 = fVar21 - fVar28) {
      uVar40 = uVar40 + 6;
    }
    pfVar27 = pfVar27 + 6;
    fVar2 = lbl_82002AE0;
    lbl_82002AE0 = fVar28;
    uVar41 = (unsigned int)uVar40;
  }
  if (uVar34 < uVar23) {
    pfVar37 = pfVar37 + uVar34;
    do {
      psVar25 = psVar22 + (int)uVar40;
      sVar14 = *(short *)((int)((uVar40 - 5 & 0xffffffff) << 1) + (int)psVar22);
      sVar13 = psVar25[1];
      sVar15 = *(short *)((int)((uVar40 - 6 & 0xffffffff) << 1) + (int)psVar22);
      sVar16 = *(short *)((int)((uVar40 - 4 & 0xffffffff) << 1) + (int)psVar22);
      sVar17 = *(short *)((int)((uVar40 + 2 & 0xffffffff) << 1) + (int)psVar22);
      sVar18 = *(short *)((int)((uVar40 + 3 & 0xffffffff) << 1) + (int)psVar22);
      sVar19 = *(short *)((int)((uVar40 - 3 & 0xffffffff) << 1) + (int)psVar22);
      uVar34 = uVar34 + 6;
      *pfVar37 = ((float)(__int64)((int)*psVar25 - (int)sVar15) * fVar21 +
                 (float)(__int64)(int)sVar15) * fVar29;
      pfVar37[1] = ((float)(__int64)((int)sVar13 - (int)sVar14) * fVar21 +
                   (float)(__int64)(int)sVar14) * fVar29;
      pfVar37[2] = ((float)(__int64)((int)sVar17 - (int)sVar16) * fVar21 +
                   (float)(__int64)(int)sVar16) * fVar29;
      sVar13 = psVar25[-1];
      uVar43 = uVar40 - 2;
      uVar42 = uVar40 + 4;
      sVar14 = *(short *)((int)((uVar40 + 5 & 0xffffffff) << 1) + (int)psVar22);
      uVar40 = lVar30 + uVar40;
      sVar15 = *(short *)((int)((uVar43 & 0xffffffff) << 1) + (int)psVar22);
      sVar16 = *(short *)((int)((uVar42 & 0xffffffff) << 1) + (int)psVar22);
      pfVar37[3] = ((float)(__int64)((int)sVar18 - (int)sVar19) * fVar21 +
                   (float)(__int64)(int)sVar19) * fVar29;
      pfVar37[4] = ((float)(__int64)((int)sVar16 - (int)sVar15) * fVar21 +
                   (float)(__int64)(int)sVar15) * fVar29;
      pfVar37[5] = ((float)(__int64)((int)sVar14 - (int)sVar13) * fVar21 +
                   (float)(__int64)(int)sVar13) * fVar29;
      pfVar37 = pfVar37 + 6;
      for (fVar21 = fVar24 + fVar21; fVar28 <= fVar21; fVar21 = fVar21 - fVar28) {
        uVar40 = uVar40 + 6;
      }
    } while (uVar34 < uVar23);
  }
LAB_82a660bc:
  if ((int)uVar40 < (int)(uVar31 - 6)) {
    uVar40 = uVar31 - 6;
  }
  uVar42 = (uVar40 - uVar31) - 6;
  param_1[3] = fVar21;
  param_1[9] = (int)(uVar40 - uVar31);
  iVar33 = (int)-uVar31;
  if ((int)uVar42 < iVar33) {
    if (3 < iVar33 - (int)uVar42) {
      lVar35 = (uVar42 & 0x3fffffff) * 4 + lVar38 + -4;
      lVar30 = ((uVar42 + uVar31) - 3 & 0x3fffffff) * 4 + lVar38;
      do {
        uVar43 = uVar31 + 2 + uVar42;
        iVar26 = (int)lVar35;
        *(unsigned int *)(iVar26 + 4) = *(unsigned int *)((int)lVar30 + 0xc);
        uVar40 = uVar31 + 3 + uVar42;
        lVar30 = lVar30 + 0x10;
        *(unsigned int *)(iVar26 + 8) = *(unsigned int *)lVar30;
        uVar42 = uVar42 + 4;
        *(unsigned int *)(iVar26 + 0xc) =
             *(unsigned int *)((int)((uVar43 & 0xffffffff) << 2) + (int)pfVar39);
        lVar35 = lVar35 + 0x10;
        *(unsigned int *)lVar35 = *(unsigned int *)((int)((uVar40 & 0xffffffff) << 2) + (int)pfVar39);
      } while ((int)uVar42 < iVar33 + -3);
    }
    if ((int)uVar42 < iVar33) {
      lVar36 = -uVar31 - uVar42;
      lVar35 = (uVar42 & 0x3fffffff) * 4 + lVar38 + -4;
      lVar30 = (uVar42 + uVar31 & 0x3fffffff) * 4 + lVar38 + -4;
      uVar42 = lVar36 + uVar42;
      do {
        lVar30 = lVar30 + 4;
        lVar35 = lVar35 + 4;
        *(unsigned int *)lVar35 = *(unsigned int *)lVar30;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
    }
  }
  if (3 < -(int)uVar42) {
    lVar36 = ((-uVar42 - 4 & 0xffffffff) >> 2) + 1;
    lVar35 = (uVar42 & 0x3fffffff) * 4 + lVar38 + -4;
    lVar30 = ((uVar42 + uVar31) - 3 & 0x7fffffff) * 2 + ZEXT48(psVar22);
    do {
      sVar13 = *(short *)((int)lVar30 + 6);
      lVar30 = lVar30 + 8;
      uVar40 = uVar31 + 2 + uVar42;
      sVar14 = *(short *)((int)((uVar31 + 3 + uVar42 & 0xffffffff) << 1) + (int)psVar22);
      uVar42 = uVar42 + 4;
      sVar15 = *(short *)((int)((uVar40 & 0xffffffff) << 1) + (int)psVar22);
      iVar33 = (int)lVar35;
      *(float *)(iVar33 + 8) = (float)(__int64)*(short *)lVar30 * fVar29;
      *(float *)(iVar33 + 4) = (float)(__int64)sVar13 * fVar29;
      *(float *)(iVar33 + 0xc) = (float)(__int64)sVar15 * fVar29;
      lVar35 = lVar35 + 0x10;
      *(float *)lVar35 = (float)(__int64)sVar14 * fVar29;
      lVar36 = lVar36 + -1;
    } while (lVar36 != 0);
  }
  if ((int)uVar42 < 0) {
    lVar35 = -uVar42;
    lVar38 = (uVar42 & 0x3fffffff) * 4 + lVar38 + -4;
    lVar30 = (uVar42 + uVar31 & 0x7fffffff) * 2 + ZEXT48(psVar22) + -2;
    do {
      lVar30 = lVar30 + 2;
      lVar38 = lVar38 + 4;
      *(float *)lVar38 = (float)(__int64)*(short *)lVar30 * fVar29;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
  }
  return;
}

