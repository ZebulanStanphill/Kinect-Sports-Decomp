extern int _blkmov();
extern unsigned int lbl_82002AE0;


void fn_82A64238(unsigned int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  __int64 lVar17;
  __int64 lVar18;
  __int64 lVar19;
  __int64 lVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  __int64 lVar24;
  unsigned __int64 uVar25;
  unsigned int uVar26;
  unsigned __int64 uVar27;
  unsigned __int64 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  
  uVar28 = 0;
  uVar8 = param_1[8];
  uVar27 = (unsigned __int64)uVar8;
  uVar21 = (unsigned __int64)param_1[6];
  iVar14 = (int)(float)param_1[4];
  uVar9 = *param_1;
  uVar22 = (unsigned __int64)uVar9;
  uVar23 = (unsigned __int64)param_1[1];
  dVar31 = (double)(float)param_1[3];
  uVar10 = param_1[7];
  lVar24 = ((unsigned __int64)uVar8 & 0x1fffffff) * 8 + (unsigned __int64)param_1[2];
  uVar26 = param_1[9];
  uVar25 = (unsigned __int64)uVar26;
  lVar20 = (__int64)iVar14 * (__int64)(int)uVar8;
  dVar30 = (double)((float)param_1[4] - (float)(__int64)iVar14);
  if ((uVar21 != 0) && (uVar8 != 0)) {
    _blkmov(lVar24,uVar22,uVar8 << 2);
  }
  dVar29 = (double)lbl_82002AE0;
  while ((int)uVar26 < (int)uVar8) {
    if ((unsigned __int64)uVar10 <= (uVar28 & 0xffffffff)) goto LAB_82a64540;
    iVar14 = (int)(uVar25 + uVar27);
    if ((int)uVar25 < iVar14) {
      uVar15 = uVar25;
      if (3 < iVar14 - (int)uVar25) {
        lVar16 = (uVar28 & 0x3fffffff) * 4 + uVar23 + -4;
        lVar18 = (uVar25 & 0x3fffffff) * 4 + lVar24 + -4;
        lVar17 = ((uVar25 - uVar27) - 1 & 0x3fffffff) * 4 + lVar24;
        do {
          iVar11 = (int)lVar17;
          uVar15 = uVar15 + 4;
          iVar12 = (int)lVar18;
          uVar28 = uVar28 + 4;
          fVar1 = *(float *)(iVar11 + 8);
          fVar2 = *(float *)(iVar11 + 0xc);
          fVar3 = *(float *)(iVar12 + 8);
          fVar4 = *(float *)(iVar12 + 0xc);
          lVar17 = lVar17 + 0x10;
          fVar5 = *(float *)lVar17;
          lVar18 = lVar18 + 0x10;
          fVar6 = *(float *)lVar18;
          iVar13 = (int)lVar16;
          *(float *)(iVar13 + 4) =
               (float)((double)(float)((double)*(float *)(iVar12 + 4) -
                                      (double)*(float *)(iVar11 + 4)) * dVar31 +
                      (double)*(float *)(iVar11 + 4));
          *(float *)(iVar13 + 8) =
               (float)((double)(float)((double)fVar3 - (double)fVar1) * dVar31 + (double)fVar1);
          *(float *)(iVar13 + 0xc) =
               (float)((double)(float)((double)fVar4 - (double)fVar2) * dVar31 + (double)fVar2);
          lVar16 = lVar16 + 0x10;
          *(float *)lVar16 =
               (float)((double)(float)((double)fVar6 - (double)fVar5) * dVar31 + (double)fVar5);
        } while ((int)uVar15 < iVar14 + -3);
      }
      if ((int)uVar15 < iVar14) {
        lVar19 = (uVar25 + uVar27) - uVar15;
        lVar16 = (uVar28 & 0x3fffffff) * 4 + uVar23 + -4;
        lVar18 = (uVar15 & 0x3fffffff) * 4 + lVar24 + -4;
        lVar17 = ((uVar15 - uVar27) - 1 & 0x3fffffff) * 4 + lVar24;
        uVar28 = lVar19 + uVar28;
        do {
          lVar17 = lVar17 + 4;
          lVar18 = lVar18 + 4;
          lVar16 = lVar16 + 4;
          *(float *)lVar16 =
               (float)((double)(float)((double)*(float *)lVar18 - (double)*(float *)lVar17) * dVar31
                      + (double)*(float *)lVar17);
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
    }
    uVar25 = lVar20 + uVar25;
    for (dVar31 = dVar30 + dVar31; dVar31 = (double)(float)dVar31, dVar29 <= dVar31;
        dVar31 = dVar31 - dVar29) {
      uVar25 = uVar25 + uVar27;
    }
    uVar26 = (unsigned int)uVar25;
  }
  if ((uVar28 & 0xffffffff) < (unsigned __int64)uVar10) {
    do {
      iVar14 = (int)(uVar25 + uVar27);
      if ((int)uVar25 < iVar14) {
        uVar15 = uVar25;
        if (3 < iVar14 - (int)uVar25) {
          lVar16 = (uVar28 & 0x3fffffff) * 4 + uVar23 + -4;
          lVar18 = (uVar25 & 0x3fffffff) * 4 + uVar22 + -4;
          lVar17 = ((uVar25 - uVar27) - 1 & 0x3fffffff) * 4 + uVar22;
          do {
            iVar11 = (int)lVar17;
            uVar15 = uVar15 + 4;
            iVar12 = (int)lVar18;
            uVar28 = uVar28 + 4;
            fVar1 = *(float *)(iVar11 + 8);
            fVar2 = *(float *)(iVar11 + 0xc);
            fVar3 = *(float *)(iVar12 + 8);
            fVar4 = *(float *)(iVar12 + 0xc);
            lVar17 = lVar17 + 0x10;
            fVar5 = *(float *)lVar17;
            lVar18 = lVar18 + 0x10;
            fVar6 = *(float *)lVar18;
            iVar13 = (int)lVar16;
            *(float *)(iVar13 + 4) =
                 (float)((double)(float)((double)*(float *)(iVar12 + 4) -
                                        (double)*(float *)(iVar11 + 4)) * dVar31 +
                        (double)*(float *)(iVar11 + 4));
            *(float *)(iVar13 + 8) =
                 (float)((double)(float)((double)fVar3 - (double)fVar1) * dVar31 + (double)fVar1);
            *(float *)(iVar13 + 0xc) =
                 (float)((double)(float)((double)fVar4 - (double)fVar2) * dVar31 + (double)fVar2);
            lVar16 = lVar16 + 0x10;
            *(float *)lVar16 =
                 (float)((double)(float)((double)fVar6 - (double)fVar5) * dVar31 + (double)fVar5);
          } while ((int)uVar15 < iVar14 + -3);
        }
        if ((int)uVar15 < iVar14) {
          lVar19 = (uVar25 + uVar27) - uVar15;
          lVar16 = (uVar28 & 0x3fffffff) * 4 + uVar23 + -4;
          lVar18 = (uVar15 & 0x3fffffff) * 4 + uVar22 + -4;
          lVar17 = ((uVar15 - uVar27) - 1 & 0x3fffffff) * 4 + uVar22;
          uVar28 = lVar19 + uVar28;
          do {
            lVar17 = lVar17 + 4;
            lVar18 = lVar18 + 4;
            lVar16 = lVar16 + 4;
            *(float *)lVar16 =
                 (float)((double)(float)((double)*(float *)lVar18 - (double)*(float *)lVar17) *
                         dVar31 + (double)*(float *)lVar17);
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
      }
      uVar25 = lVar20 + uVar25;
      for (dVar31 = dVar30 + dVar31; dVar31 = (double)(float)dVar31, dVar29 <= dVar31;
          dVar31 = dVar31 - dVar29) {
        uVar25 = uVar25 + uVar27;
      }
    } while ((uVar28 & 0xffffffff) < (unsigned __int64)uVar10);
  }
LAB_82a64540:
  if ((int)uVar25 < (int)(uVar21 - uVar27)) {
    uVar25 = uVar21 - uVar27;
  }
  uVar27 = (uVar25 - uVar21) - uVar27;
  param_1[3] = (unsigned int)(float)dVar31;
  param_1[9] = (unsigned int)(uVar25 - uVar21);
  iVar14 = (int)-uVar21;
  if ((int)uVar27 < iVar14) {
    if (3 < iVar14 - (int)uVar27) {
      lVar17 = (uVar27 & 0x3fffffff) * 4 + lVar24 + -4;
      lVar20 = ((uVar27 + uVar21) - 3 & 0x3fffffff) * 4 + lVar24;
      do {
        uVar25 = uVar21 + 2 + uVar27;
        iVar11 = (int)lVar17;
        *(unsigned int *)(iVar11 + 4) = *(unsigned int *)((int)lVar20 + 0xc);
        uVar28 = uVar21 + 3 + uVar27;
        lVar20 = lVar20 + 0x10;
        *(unsigned int *)(iVar11 + 8) = *(unsigned int *)lVar20;
        uVar27 = uVar27 + 4;
        *(unsigned int *)(iVar11 + 0xc) =
             *(unsigned int *)((int)((uVar25 & 0xffffffff) << 2) + (int)lVar24);
        lVar17 = lVar17 + 0x10;
        *(unsigned int *)lVar17 = *(unsigned int *)((int)((uVar28 & 0xffffffff) << 2) + (int)lVar24);
      } while ((int)uVar27 < iVar14 + -3);
    }
    if ((int)uVar27 < iVar14) {
      lVar18 = -uVar21 - uVar27;
      lVar17 = (uVar27 & 0x3fffffff) * 4 + lVar24 + -4;
      lVar20 = (uVar27 + uVar21 & 0x3fffffff) * 4 + lVar24 + -4;
      uVar27 = lVar18 + uVar27;
      do {
        lVar20 = lVar20 + 4;
        lVar17 = lVar17 + 4;
        *(unsigned int *)lVar17 = *(unsigned int *)lVar20;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
  }
  if (3 < -(int)uVar27) {
    lVar18 = ((-uVar27 - 4 & 0xffffffff) >> 2) + 1;
    lVar17 = (uVar27 & 0x3fffffff) * 4 + lVar24 + -4;
    lVar20 = ((uVar27 + uVar21) - 3 & 0x3fffffff) * 4 + uVar22;
    do {
      uVar25 = uVar21 + 2 + uVar27;
      iVar14 = (int)lVar20;
      uVar28 = uVar21 + 3 + uVar27;
      lVar20 = lVar20 + 0x10;
      uVar7 = *(unsigned int *)lVar20;
      iVar11 = (int)lVar17;
      *(unsigned int *)(iVar11 + 4) = *(unsigned int *)(iVar14 + 0xc);
      *(unsigned int *)(iVar11 + 8) = uVar7;
      uVar27 = uVar27 + 4;
      uVar7 = *(unsigned int *)((int)((uVar28 & 0xffffffff) << 2) + uVar9);
      *(unsigned int *)(iVar11 + 0xc) = *(unsigned int *)((int)((uVar25 & 0xffffffff) << 2) + uVar9);
      lVar17 = lVar17 + 0x10;
      *(unsigned int *)lVar17 = uVar7;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if ((int)uVar27 < 0) {
    _blkmov((uVar27 & 0x3fffffff) * 4 + lVar24,(uVar27 + uVar21 & 0x3fffffff) * 4 + uVar22,
                 (-uVar27 & 0x3fffffff) << 2);
  }
  return;
}

