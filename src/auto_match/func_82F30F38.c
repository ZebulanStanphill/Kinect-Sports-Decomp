extern int iRam832617f4;
extern unsigned int iStack_10c;
extern unsigned int iStack_110;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82052318;


void fn_82F30F38(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  int iVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned char bVar9;
  unsigned char bVar10;
  unsigned char bVar11;
  unsigned char bVar12;
  unsigned char bVar13;
  unsigned char bVar14;
  int iVar15;
  unsigned int uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  unsigned char *pbVar23;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  int iVar28;
  unsigned __int64 uVar27;
  unsigned __int64 uVar29;
  unsigned __int64 uVar30;
  int iVar31;
  int iVar32;
  unsigned __int64 uVar33;
  unsigned char *puVar34;
  unsigned __int64 uVar35;
  unsigned char bVar37;
  unsigned char *puVar36;
  unsigned __int64 uVar38;
  int iVar39;
  unsigned __int64 uVar40;
  unsigned __int64 uVar41;
  unsigned __int64 uVar42;
  unsigned char *pbVar43;
  unsigned char *pbVar45;
  unsigned __int64 uVar44;
  unsigned __int64 uVar46;
  int iVar47;
  unsigned __int64 uVar48;
  unsigned __int64 uVar49;
  unsigned __int64 uVar50;
  unsigned char *pbVar51;
  int iVar52;
  __int64 lVar53;
  double dVar54;
  unsigned char *puStack_140;
  int iStack_110;
  int iStack_10c;
  
  dVar20 = lbl_82052318;
  dVar19 = lbl_82005758;
  dVar18 = lbl_82005730;
  dVar17 = lbl_82005710;
  iStack_10c = 0;
  if (0 < *(int *)(param_5 + 0x5c)) {
    param_2 = param_2 - param_1;
    puVar36 = (unsigned char *)(*(int *)(param_5 + 0x70) + -4);
    puStack_140 = puVar36;
    do {
      dVar54 = dVar17;
      if (*(int *)(param_5 + 0x60) != 0) {
        dVar54 = (param_3 - dVar19) * dVar18;
      }
      dVar54 = dVar54 + (double)(__int64)iStack_10c * param_3 + param_4;
      iVar52 = (int)dVar54;
      iRam832617f4 = iVar52 << 8;
      iVar28 = *(int *)(param_5 + 0x50) * iVar52 * 4 + *(int *)(param_5 + 100);
      iVar1 = (int)(dVar54 * dVar20 - (double)(__int64)iRam832617f4);
      iVar15 = iVar1 * iVar1 >> 8;
      iVar32 = iVar15 * iVar1 >> 8;
      if ((iVar52 < 1) || (*(int *)(param_5 + 0x54) + -2 <= iVar52)) {
        if ((iVar52 < 0) || (*(int *)(param_5 + 0x54) + -1 <= iVar52)) {
          if ((iVar52 < 1) || (*(int *)(param_5 + 0x54) <= iVar52)) {
            iVar52 = 0;
            if (0 < *(int *)(param_5 + 0x58)) {
              do {
                puVar36 = puVar36 + 4;
                *puVar36 = 0;
                iVar52 = iVar52 + 1;
                puStack_140 = puVar36;
              } while (iVar52 < *(int *)(param_5 + 0x58));
            }
          }
          else {
            iVar52 = 0;
            dVar54 = param_2;
            if (0 < *(int *)(param_5 + 0x58)) {
              do {
                dVar54 = dVar54 + param_1;
                iVar15 = (int)dVar54;
                if (iVar15 < 0) {
LAB_82f31c9c:
                  puVar36[4] = 0;
                }
                else if (iVar15 < *(int *)(param_5 + 0x50) + -1) {
                  iRam832617f4 = iVar15 << 8;
                  iVar47 = iVar15 * 4 + iVar28;
                  iVar32 = (int)(dVar54 * dVar20 - (double)(__int64)iRam832617f4);
                  iVar31 = (0x100 - iVar32) - iVar1;
                  puVar36[4] = (char)((iVar31 + iVar1) * (unsigned int)*(unsigned char *)(iVar15 * 4 + iVar28) +
                                      (unsigned int)*(unsigned char *)(iVar47 + 4) * iVar32 >> 8);
                  puVar36[5] = (char)((iVar31 + iVar1) * (unsigned int)*(unsigned char *)(iVar47 + 1) +
                                      (unsigned int)*(unsigned char *)(iVar47 + 5) * iVar32 >> 8);
                  puVar36[6] = (char)((iVar31 + iVar1) * (unsigned int)*(unsigned char *)(iVar47 + 2) +
                                      (unsigned int)*(unsigned char *)(iVar47 + 6) * iVar32 >> 8);
                  puVar36[7] = (char)((iVar31 + iVar1) * (unsigned int)*(unsigned char *)(iVar47 + 3) +
                                      (unsigned int)*(unsigned char *)(iVar47 + 7) * iVar32 >> 8);
                }
                else {
                  if ((iVar15 < 1) || (*(int *)(param_5 + 0x50) <= iVar15)) goto LAB_82f31c9c;
                  iRam832617f4 = iVar15 << 8;
                  puVar34 = (unsigned char *)(iVar15 * 4 + iVar28);
                  puVar36[4] = *puVar34;
                  puVar36[5] = puVar34[1];
                  puVar36[6] = puVar34[2];
                  puVar36[7] = puVar34[3];
                }
                iVar52 = iVar52 + 1;
                puVar36 = puVar36 + 4;
                puStack_140 = puVar36;
              } while (iVar52 < *(int *)(param_5 + 0x58));
            }
          }
        }
        else {
          iVar52 = 0;
          dVar54 = param_2;
          if (0 < *(int *)(param_5 + 0x58)) {
            do {
              dVar54 = dVar54 + param_1;
              iVar15 = (int)dVar54;
              if (iVar15 < 0) {
LAB_82f31b28:
                puVar36[4] = 0;
              }
              else if (iVar15 < *(int *)(param_5 + 0x50) + -1) {
                iRam832617f4 = iVar15 << 8;
                iVar31 = iVar15 * 4 + iVar28;
                bVar2 = *(unsigned char *)(iVar15 * 4 + iVar28);
                pbVar51 = (unsigned char *)(*(int *)(param_5 + 0x50) * 4 + iVar31);
                bVar37 = *pbVar51;
                iVar15 = (int)(dVar54 * dVar20 - (double)(__int64)iRam832617f4);
                iVar47 = (0x100 - iVar15) - iVar1;
                puVar36[4] = (char)(((int)(((((unsigned int)pbVar51[4] - (unsigned int)bVar37) -
                                            (unsigned int)*(unsigned char *)(iVar31 + 4)) + (unsigned int)bVar2) * iVar15 *
                                          iVar1) >> 8) + (unsigned int)*(unsigned char *)(iVar31 + 4) * iVar15 +
                                    iVar47 * (unsigned int)bVar2 + (unsigned int)bVar37 * iVar1 >> 8);
                iVar32 = *(int *)(param_5 + 0x50) * 4 + iVar31;
                bVar37 = *(unsigned char *)(iVar32 + 1);
                puVar36[5] = (char)(((int)(((((unsigned int)*(unsigned char *)(iVar32 + 5) - (unsigned int)bVar37) -
                                            (unsigned int)*(unsigned char *)(iVar31 + 5)) +
                                           (unsigned int)*(unsigned char *)(iVar31 + 1)) * iVar15 * iVar1) >> 8) +
                                    (unsigned int)*(unsigned char *)(iVar31 + 5) * iVar15 +
                                    iVar47 * (unsigned int)*(unsigned char *)(iVar31 + 1) + (unsigned int)bVar37 * iVar1 >> 8
                                   );
                iVar32 = *(int *)(param_5 + 0x50) * 4 + iVar31;
                bVar37 = *(unsigned char *)(iVar32 + 2);
                puVar36[6] = (char)(((int)(((((unsigned int)*(unsigned char *)(iVar32 + 6) - (unsigned int)bVar37) -
                                            (unsigned int)*(unsigned char *)(iVar31 + 6)) +
                                           (unsigned int)*(unsigned char *)(iVar31 + 2)) * iVar15 * iVar1) >> 8) +
                                    (unsigned int)*(unsigned char *)(iVar31 + 6) * iVar15 +
                                    iVar47 * (unsigned int)*(unsigned char *)(iVar31 + 2) + (unsigned int)bVar37 * iVar1 >> 8
                                   );
                iVar32 = *(int *)(param_5 + 0x50) * 4 + iVar31;
                bVar37 = *(unsigned char *)(iVar32 + 3);
                puVar36[7] = (char)(((int)(((((unsigned int)*(unsigned char *)(iVar32 + 7) - (unsigned int)bVar37) -
                                            (unsigned int)*(unsigned char *)(iVar31 + 7)) +
                                           (unsigned int)*(unsigned char *)(iVar31 + 3)) * iVar15 * iVar1) >> 8) +
                                    (unsigned int)*(unsigned char *)(iVar31 + 7) * iVar15 +
                                    iVar47 * (unsigned int)*(unsigned char *)(iVar31 + 3) + (unsigned int)bVar37 * iVar1 >> 8
                                   );
              }
              else {
                if ((iVar15 < 1) || (*(int *)(param_5 + 0x50) <= iVar15)) goto LAB_82f31b28;
                iRam832617f4 = iVar15 << 8;
                iVar47 = iVar15 * 4 + iVar28;
                iVar32 = (int)(dVar54 * dVar20 - (double)(__int64)iRam832617f4);
                iVar31 = (0x100 - iVar32) - iVar1;
                puVar36[4] = (char)((unsigned int)*(unsigned char *)(*(int *)(param_5 + 0x50) * 4 + iVar47) * iVar1 +
                                    (iVar31 + iVar32) * (unsigned int)*(unsigned char *)(iVar15 * 4 + iVar28) >> 8);
                puVar36[5] = (char)((unsigned int)*(unsigned char *)(*(int *)(param_5 + 0x50) * 4 + iVar47 + 1) *
                                    iVar1 + (iVar31 + iVar32) * (unsigned int)*(unsigned char *)(iVar47 + 1) >> 8);
                puVar36[6] = (char)((unsigned int)*(unsigned char *)(*(int *)(param_5 + 0x50) * 4 + iVar47 + 2) *
                                    iVar1 + (iVar31 + iVar32) * (unsigned int)*(unsigned char *)(iVar47 + 2) >> 8);
                puVar36[7] = (char)((unsigned int)*(unsigned char *)(*(int *)(param_5 + 0x50) * 4 + iVar47 + 3) *
                                    iVar1 + (iVar31 + iVar32) * (unsigned int)*(unsigned char *)(iVar47 + 3) >> 8);
              }
              iVar52 = iVar52 + 1;
              puVar36 = puVar36 + 4;
              puStack_140 = puVar36;
            } while (iVar52 < *(int *)(param_5 + 0x58));
          }
        }
      }
      else {
        iStack_110 = 0;
        dVar54 = param_2;
        if (0 < *(int *)(param_5 + 0x58)) {
          do {
            dVar54 = dVar54 + param_1;
            iVar52 = (int)dVar54;
            if ((iVar52 < 1) || (*(int *)(param_5 + 0x50) + -2 <= iVar52)) {
              if ((iVar52 < 0) || (*(int *)(param_5 + 0x50) + -1 <= iVar52)) {
                if ((iVar52 < 1) || (*(int *)(param_5 + 0x50) <= iVar52)) {
                  puVar36[4] = 0;
                }
                else {
                  iRam832617f4 = iVar52 << 8;
                  iVar39 = iVar52 * 4 + iVar28;
                  iVar31 = (int)(dVar54 * dVar20 - (double)(__int64)iRam832617f4);
                  iVar47 = (0x100 - iVar31) - iVar1;
                  puVar36[4] = (char)((unsigned int)*(unsigned char *)(*(int *)(param_5 + 0x50) * 4 + iVar39) * iVar1
                                      + (iVar47 + iVar31) * (unsigned int)*(unsigned char *)(iVar52 * 4 + iVar28) >>
                                     8);
                  puVar36[5] = (char)((unsigned int)*(unsigned char *)(*(int *)(param_5 + 0x50) * 4 + iVar39 + 1) *
                                      iVar1 + (iVar47 + iVar31) * (unsigned int)*(unsigned char *)(iVar39 + 1) >> 8);
                  puVar36[6] = (char)((unsigned int)*(unsigned char *)(*(int *)(param_5 + 0x50) * 4 + iVar39 + 2) *
                                      iVar1 + (iVar47 + iVar31) * (unsigned int)*(unsigned char *)(iVar39 + 2) >> 8);
                  puVar36[7] = (char)((unsigned int)*(unsigned char *)(*(int *)(param_5 + 0x50) * 4 + iVar39 + 3) *
                                      iVar1 + (iVar47 + iVar31) * (unsigned int)*(unsigned char *)(iVar39 + 3) >> 8);
                }
              }
              else {
                iRam832617f4 = iVar52 << 8;
                iVar47 = iVar52 * 4 + iVar28;
                bVar2 = *(unsigned char *)(iVar52 * 4 + iVar28);
                pbVar51 = (unsigned char *)(*(int *)(param_5 + 0x50) * 4 + iVar47);
                bVar37 = *pbVar51;
                iVar52 = (int)(dVar54 * dVar20 - (double)(__int64)iRam832617f4);
                iVar39 = (0x100 - iVar52) - iVar1;
                puVar36[4] = (char)(((int)(((((unsigned int)pbVar51[4] - (unsigned int)bVar37) -
                                            (unsigned int)*(unsigned char *)(iVar47 + 4)) + (unsigned int)bVar2) * iVar52 *
                                          iVar1) >> 8) + (unsigned int)*(unsigned char *)(iVar47 + 4) * iVar52 +
                                    iVar39 * (unsigned int)bVar2 + (unsigned int)bVar37 * iVar1 >> 8);
                iVar31 = *(int *)(param_5 + 0x50) * 4 + iVar47;
                bVar37 = *(unsigned char *)(iVar31 + 1);
                puVar36[5] = (char)(((int)(((((unsigned int)*(unsigned char *)(iVar31 + 5) - (unsigned int)bVar37) -
                                            (unsigned int)*(unsigned char *)(iVar47 + 5)) +
                                           (unsigned int)*(unsigned char *)(iVar47 + 1)) * iVar52 * iVar1) >> 8) +
                                    (unsigned int)*(unsigned char *)(iVar47 + 5) * iVar52 +
                                    iVar39 * (unsigned int)*(unsigned char *)(iVar47 + 1) + (unsigned int)bVar37 * iVar1 >> 8
                                   );
                iVar31 = *(int *)(param_5 + 0x50) * 4 + iVar47;
                bVar37 = *(unsigned char *)(iVar31 + 2);
                puVar36[6] = (char)(((int)(((((unsigned int)*(unsigned char *)(iVar31 + 6) - (unsigned int)bVar37) -
                                            (unsigned int)*(unsigned char *)(iVar47 + 6)) +
                                           (unsigned int)*(unsigned char *)(iVar47 + 2)) * iVar52 * iVar1) >> 8) +
                                    (unsigned int)*(unsigned char *)(iVar47 + 6) * iVar52 +
                                    iVar39 * (unsigned int)*(unsigned char *)(iVar47 + 2) + (unsigned int)bVar37 * iVar1 >> 8
                                   );
                iVar31 = *(int *)(param_5 + 0x50) * 4 + iVar47;
                bVar37 = *(unsigned char *)(iVar31 + 3);
                puVar36[7] = (char)(((int)(((((unsigned int)*(unsigned char *)(iVar31 + 7) - (unsigned int)bVar37) -
                                            (unsigned int)*(unsigned char *)(iVar47 + 7)) +
                                           (unsigned int)*(unsigned char *)(iVar47 + 3)) * iVar52 * iVar1) >> 8) +
                                    (unsigned int)*(unsigned char *)(iVar47 + 7) * iVar52 +
                                    iVar39 * (unsigned int)*(unsigned char *)(iVar47 + 3) + (unsigned int)bVar37 * iVar1 >> 8
                                   );
              }
              puVar36 = puVar36 + 4;
            }
            else {
              iRam832617f4 = iVar52 << 8;
              lVar53 = 4;
              pbVar51 = (unsigned char *)(iVar52 * 4 + iVar28);
              iVar52 = (int)(dVar54 * dVar20 - (double)(__int64)iRam832617f4);
              iVar31 = iVar52 * iVar52 >> 8;
              iVar47 = iVar31 * iVar52 >> 8;
              do {
                iVar39 = *(int *)(param_5 + 0x50);
                bVar37 = *pbVar51;
                uVar35 = (unsigned __int64)bVar37;
                bVar2 = pbVar51[-4];
                uVar30 = (unsigned __int64)bVar2;
                bVar3 = pbVar51[8];
                uVar25 = (unsigned __int64)bVar3;
                pbVar45 = pbVar51 + iVar39 * -4;
                bVar4 = pbVar51[4];
                uVar29 = (unsigned __int64)bVar4;
                pbVar23 = pbVar51 + iVar39 * 4;
                pbVar43 = pbVar51 + iVar39 * 8;
                bVar5 = *pbVar45;
                uVar33 = (unsigned __int64)bVar5;
                bVar6 = pbVar45[4];
                uVar48 = (unsigned __int64)bVar6;
                bVar7 = pbVar23[-4];
                uVar49 = (unsigned __int64)bVar7;
                bVar8 = pbVar23[4];
                uVar50 = (unsigned __int64)bVar8;
                bVar9 = *pbVar43;
                uVar24 = (unsigned __int64)bVar9;
                bVar10 = *pbVar23;
                uVar27 = (unsigned __int64)bVar10;
                bVar11 = pbVar45[-4];
                uVar26 = (unsigned __int64)bVar11;
                uVar42 = (unsigned __int64)pbVar43[4];
                uVar41 = (unsigned __int64)pbVar51[(iVar39 + 2) * 4];
                bVar12 = pbVar45[8];
                uVar46 = (unsigned __int64)bVar12;
                bVar13 = pbVar43[-4];
                uVar44 = (unsigned __int64)bVar13;
                bVar14 = pbVar43[8];
                uVar38 = ((uVar35 * 2 + uVar49 + uVar48) * 2 - uVar42) - uVar41;
                uVar21 = uVar24 + (uVar30 + uVar33) * -2 + uVar25;
                uVar40 = ((uVar27 - uVar50) - uVar25) + uVar30;
                iVar39 = (unsigned int)bVar37 + (unsigned int)bVar37 * 4;
                uVar22 = ((uVar50 - uVar27) - uVar29) + uVar35;
                uVar16 = (unsigned int)bVar4;
                iVar39 = (((int)(((int)((uVar21 & 0xffffffff) << 3) - (int)uVar21) +
                                 ((int)((((uVar50 + uVar26) * 2 - uVar44) - uVar46 & 0xffffffff) <<
                                       1) + (unsigned int)bVar14) * 2 +
                                 (int)uVar38 + (int)((uVar38 & 0xffffffff) << 2) +
                                ((unsigned int)bVar10 + (unsigned int)bVar4) * -0xd) >> 1) * iVar31 +
                          ((int)((int)((((int)(((((uVar33 - uVar48 & 0x7fffffff) * 2 - uVar24) -
                                                uVar26) + uVar42 + uVar46 & 0xffffffff) << 1) -
                                        (unsigned int)bVar14) + uVar44 & 0xffffffff) << 1) +
                                 ((int)((uVar40 & 0xffffffff) << 3) - (int)uVar40) +
                                 (int)(uVar41 - uVar49) + (int)((uVar41 - uVar49 & 0xffffffff) << 2)
                                + ((unsigned int)bVar4 - (unsigned int)bVar37) * 0xb) >> 1) * iVar47 +
                          ((int)((((int)(((((uVar33 - uVar35) - uVar26 & 0x7fffffff) * 2 - uVar24) +
                                          uVar44 + uVar27 & 0xffffffff) << 1) +
                                  (int)(uVar50 - uVar29) +
                                  (int)((uVar50 - uVar29 & 0xffffffff) << 1)) -
                                 ((unsigned int)bVar7 + (unsigned int)bVar7 * 4)) + ((unsigned int)bVar2 * 8 - (unsigned int)bVar2))
                          >> 1) * iVar52 +
                         ((int)((((unsigned int)bVar10 * 2 + (unsigned int)bVar5) * 2 - iVar39) - (unsigned int)bVar9) >> 1)
                         * 0x100) * iVar15 +
                         (((int)((int)(((((((uVar30 - uVar49 & 0x7fffffff) * 2 - uVar25) - uVar26) +
                                          uVar44 + uVar41 & 0x7fffffff) * 2 - (unsigned __int64)bVar14) +
                                        uVar46 & 0xffffffff) << 1) +
                                 ((((unsigned int)bVar4 - (unsigned int)bVar9) - (unsigned int)bVar8) + (unsigned int)bVar5) * 7 +
                                 ((unsigned int)bVar10 - (unsigned int)bVar37) * 0xb +
                                (int)(uVar42 - uVar48) + (int)((uVar42 - uVar48 & 0xffffffff) << 2))
                          >> 1) * iVar31 +
                          (((((int)((((((uVar24 - uVar42) - uVar41) - uVar30) - uVar33) + uVar49 +
                                     uVar25 + uVar48 & 0xffffffff) << 1) +
                             (int)uVar22 + (int)((uVar22 & 0xffffffff) << 1)) - (unsigned int)bVar13) -
                           (unsigned int)bVar12) + (unsigned int)bVar14 + (unsigned int)bVar11) * iVar47 +
                         ((((((int)((uVar49 - uVar30 & 0xffffffff) << 1) - (unsigned int)bVar13) -
                            (unsigned int)bVar8) - (unsigned int)bVar10) - (unsigned int)bVar5) + (unsigned int)bVar9 + uVar16 +
                          (unsigned int)bVar37 + (unsigned int)bVar11) * iVar52) * iVar32 +
                         (((int)((((int)(((((uVar30 - uVar35) - uVar26 & 0x7fffffff) * 2 - uVar25) +
                                          uVar29 + uVar46 & 0xffffffff) << 1) +
                                  (int)(uVar50 - uVar27) +
                                  (int)((uVar50 - uVar27 & 0xffffffff) << 1)) -
                                 ((unsigned int)bVar6 + (unsigned int)bVar6 * 4)) + ((unsigned int)bVar5 * 8 - (unsigned int)bVar5))
                          >> 1) * iVar31 +
                          ((((((int)((uVar48 - uVar33 & 0xffffffff) << 1) - (unsigned int)bVar8) - uVar16) -
                            (unsigned int)bVar2) - (unsigned int)bVar12) + (unsigned int)bVar10 + (unsigned int)bVar3 + (unsigned int)bVar37
                          + (unsigned int)bVar11) * iVar47 +
                         ((((unsigned int)bVar37 - (unsigned int)bVar2) - (unsigned int)bVar5) + (unsigned int)bVar11) * iVar52) *
                         iVar1 + (int)(((__int64)
                                        ((int)((((unsigned int)bVar4 * 2 + (unsigned int)bVar2) * 2 - iVar39) -
                                              (unsigned int)bVar3) >> 1) * (__int64)iVar31 +
                                        (__int64)
                                        ((int)((((int)(uVar35 - uVar29) +
                                                (int)((uVar35 - uVar29 & 0xffffffff) << 1)) -
                                               (unsigned int)bVar2) + (unsigned int)bVar3) >> 1) * (__int64)iVar47
                                        + (__int64)
                                          ((int)((((int)(uVar35 - uVar27) +
                                                  (int)((uVar35 - uVar27 & 0xffffffff) << 1)) -
                                                 (unsigned int)bVar5) + (unsigned int)bVar9) >> 1) *
                                          (__int64)iVar32 +
                                        (__int64)((int)(uVar16 - bVar2) >> 1) * (__int64)iVar52 +
                                        (__int64)((int)((unsigned int)bVar10 - (unsigned int)bVar5) >> 1) *
                                        (__int64)iVar1 + uVar35 * 0x100 & 0xffffffff) << 8);
                if (iVar39 >> 0x10 < 0x100) {
                  bVar37 = -(char)(iVar39 >> 0x1f) - 1U & (unsigned char)((unsigned int)iVar39 >> 0x10);
                }
                else {
                  bVar37 = 0xff;
                }
                pbVar51 = pbVar51 + 1;
                puStack_140[4] = bVar37;
                puVar36 = puStack_140 + 1;
                lVar53 = lVar53 + -1;
                puStack_140 = puVar36;
              } while (lVar53 != 0);
            }
            iStack_110 = iStack_110 + 1;
            puStack_140 = puVar36;
          } while (iStack_110 < *(int *)(param_5 + 0x58));
        }
      }
      iStack_10c = iStack_10c + 1;
    } while (iStack_10c < *(int *)(param_5 + 0x5c));
  }
  return;
}

