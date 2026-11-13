extern int fn_82F67DE8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005770;
extern unsigned int lbl_8202303C;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82C73070(double param_1,double param_2,double param_3,int *param_4)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  __int64 lVar4;
  int iVar5;
  int iVar7;
  __int64 lVar6;
  unsigned __int64 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if ((double)lbl_821AAD20 < param_3) {
    if (param_3 < (double)lbl_8202303C) {
      dVar16 = (double)(float)((double)(__int64)param_4[1] / (double)(__int64)*param_4);
      dVar15 = (double)fn_82F67DE8(param_3 * lbl_82005770);
      dVar14 = lbl_82005730;
      dVar15 = (double)(float)dVar15;
      if (dVar16 <= dVar15) {
        dVar13 = -(double)(__int64)param_4[1];
      }
      else {
        dVar13 = (double)(float)(-(double)(__int64)*param_4 * dVar15);
      }
      fVar2 = (float)(param_2 - dVar13);
      dVar17 = (double)(float)((double)(__int64)(int)(param_1 + lbl_82005730) +
                              -(double)(__int64)*param_4);
      dVar13 = (double)(__int64)param_4[1];
      if (param_2 <= (double)(__int64)param_4[1]) {
        dVar13 = param_2;
      }
      uVar1 = (unsigned int)dVar13;
      uVar8 = 0;
      if (3 < (int)uVar1) {
        iVar7 = 2;
        iVar10 = 0;
        do {
          iVar12 = iVar7 + -1;
          iVar11 = iVar7 + 1;
          iVar9 = (int)uVar8;
          lVar4 = (__int64)iVar7;
          iVar5 = iVar10 + 0xc;
          uVar8 = uVar8 + 4;
          iVar7 = iVar7 + 4;
          *(int *)(iVar10 + param_4[5]) =
               (int)((double)(float)((double)(float)((double)(__int64)iVar9 - param_2) * dVar15 +
                                    param_1) + dVar14);
          iVar9 = iVar10 + param_4[5];
          iVar10 = iVar10 + 0x10;
          *(int *)(iVar9 + 4) =
               (int)((double)(float)((double)(float)((double)(__int64)iVar12 - param_2) * dVar15 +
                                    param_1) + dVar14);
          *(int *)(iVar5 + param_4[5] + -4) =
               (int)((double)(float)((double)(float)((double)lVar4 - param_2) * dVar15 + param_1) +
                    dVar14);
          *(int *)(iVar5 + param_4[5]) =
               (int)((double)(float)((double)(float)((double)(__int64)iVar11 - param_2) * dVar15 +
                                    param_1) + dVar14);
        } while ((int)uVar8 < (int)(uVar1 - 3));
      }
      if ((int)uVar8 < (int)uVar1) {
        lVar4 = uVar1 - uVar8;
        lVar6 = (uVar8 & 0x3fffffff) << 2;
        do {
          iVar10 = (int)uVar8;
          uVar8 = uVar8 + 1;
          *(int *)((int)lVar6 + param_4[5]) =
               (int)((double)(float)((double)(float)((double)(__int64)iVar10 - param_2) * dVar15 +
                                    param_1) + dVar14);
          lVar6 = lVar6 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      fVar3 = (float)(__int64)param_4[1];
      if (fVar2 <= (float)(__int64)param_4[1]) {
        fVar3 = fVar2;
      }
      uVar1 = (unsigned int)fVar3;
      if ((int)uVar8 < (int)uVar1) {
        if (3 < (int)(uVar1 - (int)uVar8)) {
          lVar4 = (uVar8 & 0x3fffffff) << 2;
          iVar10 = (int)(dVar17 + dVar14);
          do {
            iVar7 = (int)lVar4;
            uVar8 = uVar8 + 4;
            *(int *)(iVar7 + param_4[5]) = iVar10;
            lVar4 = lVar4 + 0x10;
            *(int *)(iVar7 + param_4[5] + 4) = iVar10;
            *(int *)(iVar7 + 0xc + param_4[5] + -4) = iVar10;
            *(int *)(iVar7 + 0xc + param_4[5]) = iVar10;
          } while ((int)uVar8 < (int)(uVar1 - 3));
        }
        if ((int)uVar8 < (int)uVar1) {
          lVar4 = uVar1 - uVar8;
          lVar6 = (uVar8 & 0x3fffffff) << 2;
          uVar8 = lVar4 + uVar8;
          do {
            *(int *)((int)lVar6 + param_4[5]) = (int)(dVar17 + dVar14);
            lVar6 = lVar6 + 4;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
      }
      iVar10 = param_4[1];
      dVar13 = (double)lbl_82002AE0;
      if ((int)uVar8 < iVar10) {
        lVar4 = (uVar8 & 0x3fffffff) << 2;
        do {
          uVar8 = uVar8 + 1;
          *(int *)((int)lVar4 + param_4[5]) = (int)((double)(float)(param_1 + dVar13) + dVar14);
          lVar4 = lVar4 + 4;
          iVar10 = param_4[1];
        } while ((int)uVar8 < iVar10);
      }
      dVar17 = (double)(__int64)iVar10;
      if (param_2 <= (double)(__int64)iVar10) {
        dVar17 = param_2;
      }
      uVar1 = (unsigned int)dVar17;
      uVar8 = 0;
      if (3 < (int)uVar1) {
        iVar7 = 0;
        iVar10 = (int)(param_1 + dVar14);
        do {
          iVar5 = iVar7 + 0xc;
          uVar8 = uVar8 + 4;
          *(int *)(iVar7 + param_4[6]) = iVar10;
          iVar9 = iVar7 + param_4[6];
          iVar7 = iVar7 + 0x10;
          *(int *)(iVar9 + 4) = iVar10;
          *(int *)(iVar5 + param_4[6] + -4) = iVar10;
          *(int *)(iVar5 + param_4[6]) = iVar10;
        } while ((int)uVar8 < (int)(uVar1 - 3));
      }
      if ((int)uVar8 < (int)uVar1) {
        lVar4 = uVar1 - uVar8;
        lVar6 = (uVar8 & 0x3fffffff) << 2;
        uVar8 = lVar4 + uVar8;
        do {
          *(int *)((int)lVar6 + param_4[6]) = (int)(param_1 + dVar14);
          lVar6 = lVar6 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      fVar3 = (float)(__int64)param_4[1];
      if (fVar2 <= (float)(__int64)param_4[1]) {
        fVar3 = fVar2;
      }
      uVar1 = (unsigned int)fVar3;
      if ((int)uVar8 < (int)uVar1) {
        if (3 < (int)(uVar1 - (int)uVar8)) {
          dVar17 = (double)(float)(dVar13 / dVar15);
          lVar6 = uVar8 + 2;
          lVar4 = (uVar8 & 0x3fffffff) << 2;
          do {
            iVar9 = (int)uVar8;
            iVar10 = (int)lVar6;
            iVar7 = (int)lVar4;
            uVar8 = uVar8 + 4;
            lVar6 = lVar6 + 4;
            *(int *)(iVar7 + param_4[6]) =
                 (int)(-(double)(float)((double)(float)((double)(__int64)iVar9 - param_2) * dVar17
                                       - param_1) + dVar14);
            *(int *)(iVar7 + param_4[6] + 4) =
                 (int)(-(double)(float)((double)(float)((double)(__int64)(iVar10 + -1) - param_2) *
                                        dVar17 - param_1) + dVar14);
            *(int *)(iVar7 + 0xc + param_4[6] + -4) =
                 (int)(-(double)(float)((double)(float)((double)(__int64)iVar10 - param_2) * dVar17
                                       - param_1) + dVar14);
            lVar4 = lVar4 + 0x10;
            *(int *)(iVar7 + 0xc + param_4[6]) =
                 (int)(-(double)(float)((double)(float)((double)(__int64)(iVar10 + 1) - param_2) *
                                        dVar17 - param_1) + dVar14);
          } while ((int)uVar8 < (int)(uVar1 - 3));
        }
        if ((int)uVar8 < (int)uVar1) {
          lVar4 = uVar1 - uVar8;
          lVar6 = (uVar8 & 0x3fffffff) << 2;
          do {
            iVar10 = (int)uVar8;
            uVar8 = uVar8 + 1;
            *(int *)((int)lVar6 + param_4[6]) =
                 (int)(-(double)(float)((double)(float)((double)(__int64)iVar10 - param_2) *
                                        (double)(float)(dVar13 / dVar15) - param_1) + dVar14);
            lVar6 = lVar6 + 4;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
      }
      iVar10 = param_4[1];
      if ((int)uVar8 < iVar10) {
        lVar4 = (uVar8 & 0x3fffffff) << 2;
        do {
          uVar8 = uVar8 + 1;
          *(int *)((int)lVar4 + param_4[6]) = (int)(param_1 + dVar14);
          lVar4 = lVar4 + 4;
          iVar10 = param_4[1];
        } while ((int)uVar8 < iVar10);
      }
      if (dVar16 <= dVar15) {
        dVar16 = (double)(float)((double)(__int64)iVar10 / dVar15);
      }
      else {
        dVar16 = (double)(__int64)*param_4;
      }
      fVar2 = (float)(param_2 - (double)(float)(dVar16 * dVar15));
      dVar16 = (double)((float)(__int64)(int)(param_1 + dVar14) + (float)(__int64)*param_4);
      fVar3 = (float)(__int64)iVar10;
      if (fVar2 <= (float)(__int64)iVar10) {
        fVar3 = fVar2;
      }
      uVar1 = (unsigned int)fVar3;
      uVar8 = 0;
      if (3 < (int)uVar1) {
        iVar7 = 0;
        iVar10 = (int)((double)(float)(param_1 - dVar13) + dVar14);
        do {
          iVar5 = iVar7 + 0xc;
          uVar8 = uVar8 + 4;
          *(int *)(iVar7 + param_4[7]) = iVar10;
          iVar9 = iVar7 + param_4[7];
          iVar7 = iVar7 + 0x10;
          *(int *)(iVar9 + 4) = iVar10;
          *(int *)(iVar5 + param_4[7] + -4) = iVar10;
          *(int *)(iVar5 + param_4[7]) = iVar10;
        } while ((int)uVar8 < (int)(uVar1 - 3));
      }
      if ((int)uVar8 < (int)uVar1) {
        lVar4 = uVar1 - uVar8;
        lVar6 = (uVar8 & 0x3fffffff) << 2;
        uVar8 = lVar4 + uVar8;
        do {
          *(int *)((int)lVar6 + param_4[7]) = (int)((double)(float)(param_1 - dVar13) + dVar14);
          lVar6 = lVar6 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      dVar17 = (double)(__int64)param_4[1];
      if (param_2 <= (double)(__int64)param_4[1]) {
        dVar17 = param_2;
      }
      uVar1 = (unsigned int)dVar17;
      if ((int)uVar8 < (int)uVar1) {
        if (3 < (int)(uVar1 - (int)uVar8)) {
          lVar4 = (uVar8 & 0x3fffffff) << 2;
          iVar10 = (int)(dVar16 + dVar14);
          do {
            iVar7 = (int)lVar4;
            uVar8 = uVar8 + 4;
            *(int *)(iVar7 + param_4[7]) = iVar10;
            lVar4 = lVar4 + 0x10;
            *(int *)(iVar7 + param_4[7] + 4) = iVar10;
            *(int *)(iVar7 + 0xc + param_4[7] + -4) = iVar10;
            *(int *)(iVar7 + 0xc + param_4[7]) = iVar10;
          } while ((int)uVar8 < (int)(uVar1 - 3));
        }
        if ((int)uVar8 < (int)uVar1) {
          lVar4 = uVar1 - uVar8;
          lVar6 = (uVar8 & 0x3fffffff) << 2;
          uVar8 = lVar4 + uVar8;
          do {
            *(int *)((int)lVar6 + param_4[7]) = (int)(dVar16 + dVar14);
            lVar6 = lVar6 + 4;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
      }
      iVar10 = param_4[1];
      if ((int)uVar8 < iVar10) {
        lVar4 = (uVar8 & 0x3fffffff) << 2;
        do {
          iVar10 = (int)uVar8;
          uVar8 = uVar8 + 1;
          *(int *)((int)lVar4 + param_4[7]) =
               (int)((double)(float)((double)(float)((double)(__int64)iVar10 - param_2) * dVar15 +
                                    param_1) + dVar14);
          lVar4 = lVar4 + 4;
          iVar10 = param_4[1];
        } while ((int)uVar8 < iVar10);
      }
      fVar3 = (float)(__int64)iVar10;
      if (fVar2 <= (float)(__int64)iVar10) {
        fVar3 = fVar2;
      }
      uVar1 = (unsigned int)fVar3;
      uVar8 = 0;
      if (3 < (int)uVar1) {
        iVar7 = 0;
        iVar10 = (int)(param_1 + dVar14);
        do {
          iVar5 = iVar7 + 0xc;
          uVar8 = uVar8 + 4;
          *(int *)(iVar7 + param_4[8]) = iVar10;
          iVar9 = iVar7 + param_4[8];
          iVar7 = iVar7 + 0x10;
          *(int *)(iVar9 + 4) = iVar10;
          *(int *)(iVar5 + param_4[8] + -4) = iVar10;
          *(int *)(iVar5 + param_4[8]) = iVar10;
        } while ((int)uVar8 < (int)(uVar1 - 3));
      }
      if ((int)uVar8 < (int)uVar1) {
        lVar4 = uVar1 - uVar8;
        lVar6 = (uVar8 & 0x3fffffff) << 2;
        uVar8 = lVar4 + uVar8;
        do {
          *(int *)((int)lVar6 + param_4[8]) = (int)(param_1 + dVar14);
          lVar6 = lVar6 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      dVar16 = (double)(__int64)param_4[1];
      if (param_2 <= (double)(__int64)param_4[1]) {
        dVar16 = param_2;
      }
      uVar1 = (unsigned int)dVar16;
      if ((int)uVar8 < (int)uVar1) {
        if (3 < (int)(uVar1 - (int)uVar8)) {
          dVar16 = (double)(float)(dVar13 / dVar15);
          lVar6 = uVar8 + 2;
          lVar4 = (uVar8 & 0x3fffffff) << 2;
          do {
            iVar9 = (int)uVar8;
            iVar10 = (int)lVar6;
            iVar7 = (int)lVar4;
            uVar8 = uVar8 + 4;
            lVar6 = lVar6 + 4;
            *(int *)(iVar7 + param_4[8]) =
                 (int)(-(double)(float)((double)(float)((double)(__int64)iVar9 - param_2) * dVar16
                                       - param_1) + dVar14);
            *(int *)(iVar7 + param_4[8] + 4) =
                 (int)(-(double)(float)((double)(float)((double)(__int64)(iVar10 + -1) - param_2) *
                                        dVar16 - param_1) + dVar14);
            *(int *)(iVar7 + 0xc + param_4[8] + -4) =
                 (int)(-(double)(float)((double)(float)((double)(__int64)iVar10 - param_2) * dVar16
                                       - param_1) + dVar14);
            lVar4 = lVar4 + 0x10;
            *(int *)(iVar7 + 0xc + param_4[8]) =
                 (int)(-(double)(float)((double)(float)((double)(__int64)(iVar10 + 1) - param_2) *
                                        dVar16 - param_1) + dVar14);
          } while ((int)uVar8 < (int)(uVar1 - 3));
        }
        if ((int)uVar8 < (int)uVar1) {
          lVar4 = uVar1 - uVar8;
          lVar6 = (uVar8 & 0x3fffffff) << 2;
          do {
            iVar10 = (int)uVar8;
            uVar8 = uVar8 + 1;
            *(int *)((int)lVar6 + param_4[8]) =
                 (int)(-(double)(float)((double)(float)((double)(__int64)iVar10 - param_2) *
                                        (double)(float)(dVar13 / dVar15) - param_1) + dVar14);
            lVar6 = lVar6 + 4;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
        }
      }
      if ((int)uVar8 < param_4[1]) {
        lVar4 = (uVar8 & 0x3fffffff) << 2;
        do {
          uVar8 = uVar8 + 1;
          *(int *)((int)lVar4 + param_4[8]) = (int)(param_1 + dVar14);
          lVar4 = lVar4 + 4;
        } while ((int)uVar8 < param_4[1]);
      }
    }
    else {
      iVar10 = 0;
      if (0 < param_4[1]) {
        iVar7 = 0;
        param_1 = param_1 + lbl_82005730;
        do {
          iVar10 = iVar10 + 1;
          *(unsigned int *)(iVar7 + param_4[5]) = 0;
          *(int *)(param_4[6] + iVar7) = (int)param_1;
          *(int *)(param_4[7] + iVar7) = *param_4 + -1;
          *(int *)(iVar7 + param_4[8]) = (int)param_1;
          iVar7 = iVar7 + 4;
        } while (iVar10 < param_4[1]);
      }
    }
  }
  else {
    iVar10 = 0;
    if (0 < param_4[1]) {
      iVar7 = 0;
      dVar16 = param_1 + lbl_82005730;
      dVar15 = (double)(float)(param_1 + (double)lbl_82002AE0) + lbl_82005730;
      dVar14 = (double)(float)(param_1 - (double)lbl_82002AE0) + lbl_82005730;
      do {
        iVar10 = iVar10 + 1;
        *(int *)(param_4[5] + iVar7) = (int)dVar15;
        *(int *)(param_4[6] + iVar7) = (int)dVar16;
        *(int *)(param_4[7] + iVar7) = (int)dVar14;
        *(int *)(iVar7 + param_4[8]) = (int)dVar16;
        iVar7 = iVar7 + 4;
      } while (iVar10 < param_4[1]);
    }
  }
  return 0;
}

