extern int iRam832617f4;
extern unsigned int iStack_10c;
extern unsigned int iStack_128;
extern unsigned int iStack_130;
extern unsigned int iStack_140;
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82052318;
extern unsigned int lbl_820FC3A8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F31CF8(double param_1,double param_2,double param_3,double param_4,int param_5)

{
  int iVar1;
  unsigned int uVar2;
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
  unsigned char bVar15;
  unsigned char bVar16;
  unsigned int uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  int iVar26;
  int iVar28;
  unsigned __int64 uVar27;
  int iVar29;
  unsigned __int64 uVar30;
  unsigned __int64 uVar31;
  unsigned char *pbVar32;
  char in_r8;
  unsigned __int64 uVar33;
  unsigned __int64 uVar34;
  unsigned char *puVar35;
  unsigned __int64 uVar36;
  int iVar37;
  int iVar38;
  unsigned __int64 uVar39;
  unsigned char bVar41;
  unsigned char *puVar40;
  int iVar42;
  int iVar43;
  unsigned char *pbVar44;
  int iVar46;
  unsigned __int64 uVar45;
  unsigned char *pbVar47;
  unsigned __int64 uVar48;
  unsigned __int64 uVar49;
  unsigned __int64 uVar50;
  unsigned char *pbVar52;
  unsigned __int64 uVar51;
  unsigned __int64 uVar53;
  int iVar54;
  int iVar57;
  unsigned __int64 uVar55;
  unsigned __int64 uVar56;
  unsigned __int64 uVar58;
  unsigned __int64 uVar59;
  double dVar60;
  double dVar61;
  unsigned char *puStack_15c;
  unsigned char *puStack_154;
  unsigned char *puStack_148;
  int iStack_140;
  int iStack_130;
  int iStack_128;
  int iStack_10c;
  
  if (in_r8 == '\0') {
    iVar28 = *(int *)(param_5 + 100);
    puStack_154 = *(unsigned char **)(param_5 + 0x70);
    puStack_148 = (unsigned char *)((int)puStack_154 + 2);
    *(int *)(param_5 + 100) = iVar28 + 1;
    iVar57 = iVar28 + 2;
    iVar26 = (int)puStack_154 + 1;
  }
  else {
    iVar26 = *(int *)(param_5 + 0x70);
    puStack_154 = (unsigned char *)(iVar26 + 1);
    puStack_148 = (unsigned char *)(iVar26 + 3);
    iVar28 = *(int *)(param_5 + 100) + 1;
    iVar57 = *(int *)(param_5 + 100) + 3;
  }
  dVar21 = lbl_82052318;
  dVar20 = lbl_82005758;
  dVar19 = lbl_82005730;
  dVar18 = lbl_82005710;
  iStack_10c = 0;
  if (0 < *(int *)(param_5 + 0x5c)) {
    puVar35 = (unsigned char *)(iVar26 + -2);
    dVar60 = param_2 - param_1;
    puStack_15c = puVar35;
    do {
      dVar61 = dVar18;
      if (*(int *)(param_5 + 0x60) != 0) {
        dVar61 = (param_3 - dVar20) * dVar19;
      }
      dVar61 = dVar61 + (double)(__int64)iStack_10c * param_3 + param_4;
      iVar26 = (int)dVar61;
      iRam832617f4 = iVar26 << 8;
      iVar29 = iVar26 * *(int *)(param_5 + 0x50) * 2 + *(int *)(param_5 + 100);
      iVar1 = (int)(dVar61 * dVar21 - (double)(__int64)iRam832617f4);
      iVar54 = iVar1 * iVar1 >> 8;
      iVar38 = iVar54 * iVar1 >> 8;
      if ((iVar26 < 1) || (*(int *)(param_5 + 0x54) + -2 <= iVar26)) {
        if ((iVar26 < 0) || (*(int *)(param_5 + 0x54) + -1 <= iVar26)) {
          if ((iVar26 < 1) || (*(int *)(param_5 + 0x54) <= iVar26)) {
            iVar26 = 0;
            if (0 < *(int *)(param_5 + 0x58)) {
              do {
                iVar26 = iVar26 + 1;
                puVar35 = puVar35 + 2;
                *puVar35 = 0x10;
                puStack_15c = puVar35;
              } while (iVar26 < *(int *)(param_5 + 0x58));
            }
          }
          else {
            iVar26 = 0;
            dVar61 = dVar60;
            if (0 < *(int *)(param_5 + 0x58)) {
              do {
                dVar61 = dVar61 + param_1;
                iVar1 = (int)dVar61;
                if (iVar1 < 0) {
LAB_82f326ec:
                  puVar35[2] = 0x10;
                }
                else if (iVar1 < *(int *)(param_5 + 0x50) + -1) {
                  iRam832617f4 = iVar1 << 8;
                  iVar54 = (int)(dVar61 * dVar21 - (double)(__int64)iRam832617f4);
                  puVar35[2] = (char)((unsigned int)*(unsigned char *)(iVar1 * 2 + iVar29 + 2) * iVar54 +
                                      (0x100 - iVar54) * (unsigned int)*(unsigned char *)(iVar1 * 2 + iVar29) >> 8);
                }
                else {
                  if ((iVar1 < 1) || (*(int *)(param_5 + 0x50) <= iVar1)) goto LAB_82f326ec;
                  puVar35[2] = *(unsigned char *)(iVar1 * 2 + iVar29);
                }
                iVar26 = iVar26 + 1;
                puVar35 = puVar35 + 2;
                puStack_15c = puVar35;
              } while (iVar26 < *(int *)(param_5 + 0x58));
            }
          }
        }
        else {
          iVar26 = 0;
          dVar61 = dVar60;
          if (0 < *(int *)(param_5 + 0x58)) {
            do {
              dVar61 = dVar61 + param_1;
              iVar54 = (int)dVar61;
              if (iVar54 < 0) {
LAB_82f32608:
                puVar35[2] = 0x10;
              }
              else if (iVar54 < *(int *)(param_5 + 0x50) + -1) {
                iRam832617f4 = iVar54 << 8;
                iVar38 = iVar54 * 2 + iVar29;
                bVar4 = *(unsigned char *)(iVar54 * 2 + iVar29);
                pbVar32 = (unsigned char *)(*(int *)(param_5 + 0x50) * 2 + iVar38);
                bVar41 = *(unsigned char *)(iVar38 + 2);
                bVar3 = *pbVar32;
                iVar54 = (int)(dVar61 * dVar21 - (double)(__int64)iRam832617f4);
                puVar35[2] = (char)(((int)(((((unsigned int)pbVar32[2] - (unsigned int)bVar3) - (unsigned int)bVar41) +
                                           (unsigned int)bVar4) * iVar54 * iVar1) >> 8) +
                                    ((0x100 - iVar54) - iVar1) * (unsigned int)bVar4 + (unsigned int)bVar41 * iVar54
                                    + (unsigned int)bVar3 * iVar1 >> 8);
              }
              else {
                if ((iVar54 < 1) || (*(int *)(param_5 + 0x50) <= iVar54)) goto LAB_82f32608;
                iRam832617f4 = iVar54 << 8;
                puVar35[2] = (char)((unsigned int)*(unsigned char *)(*(int *)(param_5 + 0x50) * 2 +
                                                   iVar54 * 2 + iVar29) * iVar1 +
                                    (0x100 - iVar1) * (unsigned int)*(unsigned char *)(iVar54 * 2 + iVar29) >> 8);
              }
              iVar26 = iVar26 + 1;
              puVar35 = puVar35 + 2;
              puStack_15c = puVar35;
            } while (iVar26 < *(int *)(param_5 + 0x58));
          }
        }
      }
      else {
        iStack_130 = 0;
        dVar61 = dVar60;
        if (0 < *(int *)(param_5 + 0x58)) {
          do {
            dVar61 = dVar61 + param_1;
            iVar26 = (int)dVar61;
            if ((iVar26 < 1) || (uVar17 = *(unsigned int *)(param_5 + 0x50), (int)(uVar17 - 2) <= iVar26)) {
              if ((iVar26 == 0) || (iVar37 = *(int *)(param_5 + 0x50), iVar26 < iVar37 + -1)) {
                iRam832617f4 = iVar26 << 8;
                iVar37 = iVar26 * 2 + iVar29;
                bVar4 = *(unsigned char *)(iVar26 * 2 + iVar29);
                pbVar32 = (unsigned char *)(*(int *)(param_5 + 0x50) * 2 + iVar37);
                bVar41 = *(unsigned char *)(iVar37 + 2);
                bVar3 = *pbVar32;
                iVar26 = (int)(dVar61 * dVar21 - (double)(__int64)iRam832617f4);
                puVar35[2] = (char)(((int)(((((unsigned int)pbVar32[2] - (unsigned int)bVar3) - (unsigned int)bVar41) +
                                           (unsigned int)bVar4) * iVar26 * iVar1) >> 8) +
                                    ((0x100 - iVar26) - iVar1) * (unsigned int)bVar4 + (unsigned int)bVar41 * iVar26
                                    + (unsigned int)bVar3 * iVar1 >> 8);
              }
              else if ((iVar26 < 1) || (iVar37 <= iVar26)) {
                puVar35[2] = 0x10;
              }
              else {
                iRam832617f4 = iVar26 << 8;
                puVar35[2] = (char)((unsigned int)*(unsigned char *)(iVar37 * 2 + iVar26 * 2 + iVar29) * iVar1 +
                                    (0x100 - iVar1) * (unsigned int)*(unsigned char *)(iVar26 * 2 + iVar29) >> 8);
              }
            }
            else {
              iRam832617f4 = iVar26 << 8;
              pbVar44 = (unsigned char *)(iVar26 * 2 + iVar29);
              pbVar52 = pbVar44 + (uVar17 & 0x7fffffff) * -2;
              pbVar32 = pbVar44 + uVar17 * 4;
              bVar41 = pbVar44[-2];
              uVar34 = (unsigned __int64)bVar41;
              pbVar47 = pbVar44 + uVar17 * 2;
              bVar3 = *pbVar44;
              uVar39 = (unsigned __int64)bVar3;
              bVar4 = pbVar44[4];
              uVar27 = (unsigned __int64)bVar4;
              bVar5 = pbVar52[-2];
              uVar30 = (unsigned __int64)bVar5;
              bVar6 = *pbVar52;
              uVar36 = (unsigned __int64)bVar6;
              bVar7 = pbVar32[-2];
              bVar8 = pbVar47[2];
              uVar58 = (unsigned __int64)bVar8;
              bVar9 = pbVar47[-2];
              uVar55 = (unsigned __int64)bVar9;
              iVar46 = (unsigned int)bVar3 + (unsigned int)bVar3 * 4;
              bVar10 = pbVar52[2];
              uVar53 = (unsigned __int64)bVar10;
              bVar11 = *pbVar32;
              uVar25 = (unsigned __int64)bVar11;
              bVar12 = pbVar52[4];
              uVar51 = (unsigned __int64)bVar12;
              uVar49 = (unsigned __int64)pbVar32[2];
              bVar13 = pbVar32[4];
              bVar14 = *pbVar47;
              uVar31 = (unsigned __int64)bVar14;
              uVar48 = (unsigned __int64)pbVar44[(uVar17 + 2) * 2];
              uVar22 = uVar25 + (uVar34 + uVar36) * -2 + uVar27;
              bVar15 = pbVar44[2];
              uVar33 = (unsigned __int64)bVar15;
              uVar50 = ((uVar39 * 2 + uVar55 + uVar53) * 2 - uVar49) - uVar48;
              iVar26 = (int)(dVar61 * dVar21 - (double)(__int64)iRam832617f4);
              iVar37 = iVar26 * iVar26 >> 8;
              iVar43 = iVar37 * iVar26 >> 8;
              uVar45 = uVar58 - uVar31;
              uVar23 = ((uVar31 - uVar58) - uVar27) + uVar34;
              uVar24 = (uVar45 - uVar33) + uVar39;
              iStack_128 = (int)((uVar55 - uVar34 & 0x7fffffff) << 1);
              iVar26 = (((int)(((int)((uVar22 & 0xffffffff) << 3) - (int)uVar22) +
                               (int)(((((uVar58 + uVar30) * 2 - (unsigned __int64)bVar7) - uVar51 &
                                      0x7fffffff) * 2 + (unsigned __int64)bVar13 & 0xffffffff) << 1) +
                               (int)uVar50 + (int)((uVar50 & 0xffffffff) << 2) +
                              ((unsigned int)bVar14 + (unsigned int)bVar15) * -0xd) >> 1) * iVar37 +
                        ((int)((((int)(((((uVar36 - uVar53 & 0x7fffffff) * 2 - uVar25) - uVar30) +
                                        uVar49 + uVar51 & 0xffffffff) << 1) - (unsigned int)bVar13) +
                               (unsigned int)bVar7) * 2 + ((int)((uVar23 & 0xffffffff) << 3) - (int)uVar23)
                               + (int)(uVar48 - uVar55) + (int)((uVar48 - uVar55 & 0xffffffff) << 2)
                              + ((unsigned int)bVar15 - (unsigned int)bVar3) * 0xb) >> 1) * iVar43 +
                        ((int)((((((int)(((uVar36 - uVar39) - uVar30 & 0xffffffff) << 1) -
                                  (unsigned int)bVar11) + (unsigned int)bVar7 + (unsigned int)bVar14) * 2 +
                                (int)(uVar58 - uVar33) + (int)((uVar58 - uVar33 & 0xffffffff) << 1))
                               - ((unsigned int)bVar9 + (unsigned int)bVar9 * 4)) +
                              ((unsigned int)bVar41 * 8 - (unsigned int)bVar41)) >> 1) * iVar26 +
                       ((int)((((unsigned int)bVar14 * 2 + (unsigned int)bVar6) * 2 - iVar46) - (unsigned int)bVar11) >> 1)
                       * 0x100) * iVar54 +
                       (((int)((int)((((int)(((((uVar34 - uVar55 & 0x7fffffff) * 2 - uVar27) -
                                              uVar30) + (unsigned __int64)bVar7 + uVar48 & 0xffffffff) << 1
                                            ) - (unsigned int)bVar13) + uVar51 & 0xffffffff) << 1) +
                               ((((unsigned int)bVar15 - (unsigned int)bVar11) - (unsigned int)bVar8) + (unsigned int)bVar6) * 7 +
                               ((unsigned int)bVar14 - (unsigned int)bVar3) * 0xb +
                              (int)(uVar49 - uVar53) + (int)((uVar49 - uVar53 & 0xffffffff) << 2))
                        >> 1) * iVar37 +
                        (((((int)((((((uVar25 - uVar49) - uVar48) - uVar34) - uVar36) + uVar55 +
                                   uVar27 + uVar53 & 0xffffffff) << 1) +
                           (int)uVar24 + (int)((uVar24 & 0xffffffff) << 1)) - (unsigned int)bVar7) -
                         (unsigned int)bVar12) + (unsigned int)bVar13 + (unsigned int)bVar5) * iVar43 +
                       (((((iStack_128 - (unsigned int)bVar7) - (unsigned int)bVar8) - (unsigned int)bVar14) - (unsigned int)bVar6)
                        + (unsigned int)bVar11 + (unsigned int)bVar15 + (unsigned int)bVar3 + (unsigned int)bVar5) * iVar26) *
                       iVar38 + (((int)((((int)(((((uVar34 - uVar39) - uVar30 & 0x7fffffff) * 2 -
                                                 uVar27) + uVar33 + uVar51 & 0xffffffff) << 1) +
                                         (int)uVar45 + (int)((uVar45 & 0xffffffff) << 1)) -
                                        ((unsigned int)bVar10 + (unsigned int)bVar10 * 4)) +
                                       ((unsigned int)bVar6 * 8 - (unsigned int)bVar6)) >> 1) * iVar37 +
                                 ((((((int)((uVar53 - uVar36 & 0xffffffff) << 1) - (unsigned int)bVar8) -
                                    (unsigned int)bVar15) - (unsigned int)bVar41) - (unsigned int)bVar12) + (unsigned int)bVar14 +
                                  (unsigned int)bVar4 + (unsigned int)bVar3 + (unsigned int)bVar5) * iVar43 +
                                ((((unsigned int)bVar3 - (unsigned int)bVar41) - (unsigned int)bVar6) + (unsigned int)bVar5) *
                                iVar26) * iVar1 +
                       (int)(((__int64)
                              ((int)((((unsigned int)bVar15 * 2 + (unsigned int)bVar41) * 2 - iVar46) - (unsigned int)bVar4)
                              >> 1) * (__int64)iVar37 +
                              (__int64)
                              ((int)((((int)(uVar39 - uVar33) +
                                      (int)((uVar39 - uVar33 & 0xffffffff) << 1)) - (unsigned int)bVar41) +
                                    (unsigned int)bVar4) >> 1) * (__int64)iVar43 +
                              (__int64)
                              ((int)((((int)(uVar39 - uVar31) +
                                      (int)((uVar39 - uVar31 & 0xffffffff) << 1)) - (unsigned int)bVar6) +
                                    (unsigned int)bVar11) >> 1) * (__int64)iVar38 +
                              (__int64)((int)((unsigned int)bVar15 - (unsigned int)bVar41) >> 1) * (__int64)iVar26
                              + (__int64)((int)((unsigned int)bVar14 - (unsigned int)bVar6) >> 1) * (__int64)iVar1
                              + uVar39 * 0x100 & 0xffffffff) << 8);
              if (iVar26 >> 0x10 < 0x100) {
                bVar41 = -(char)(iVar26 >> 0x1f) - 1U & (unsigned char)((unsigned int)iVar26 >> 0x10);
              }
              else {
                bVar41 = 0xff;
              }
              puStack_15c[2] = bVar41;
              puVar35 = puStack_15c;
            }
            iStack_130 = iStack_130 + 1;
            puVar35 = puVar35 + 2;
            puStack_15c = puVar35;
          } while (iStack_130 < *(int *)(param_5 + 0x58));
        }
      }
      iStack_10c = iStack_10c + 1;
    } while (iStack_10c < *(int *)(param_5 + 0x5c));
  }
  dVar60 = lbl_820FC3A8;
  iStack_10c = 0;
  if (0 < *(int *)(param_5 + 0x5c)) {
    puVar40 = (unsigned char *)((int)puStack_148 + -4);
    puVar35 = (unsigned char *)((int)puStack_154 + -4);
    param_1 = param_1 * lbl_82002C40;
    param_2 = param_2 - param_1;
    puStack_154 = puVar35;
    puStack_148 = puVar40;
    do {
      dVar61 = dVar18;
      if (*(int *)(param_5 + 0x60) != 0) {
        dVar61 = (param_3 - dVar20) * dVar19;
      }
      dVar61 = dVar61 + (double)(__int64)iStack_10c * param_3 + param_4;
      iVar26 = (int)dVar61;
      iRam832617f4 = iVar26 << 8;
      iVar1 = (int)(dVar61 * dVar21 - (double)(__int64)iRam832617f4);
      iVar54 = iVar1 * iVar1 >> 8;
      iVar38 = iVar54 * iVar1 >> 8;
      if ((iVar26 < 1) || (*(int *)(param_5 + 0x54) + -2 <= iVar26)) {
        if ((iVar26 < 0) || (*(int *)(param_5 + 0x54) + -1 <= iVar26)) {
          if ((iVar26 < 1) || (*(int *)(param_5 + 0x54) <= iVar26)) {
            iVar26 = 0;
            if (0 < *(int *)(param_5 + 0x58)) {
              do {
                puVar35 = puVar35 + 4;
                *puVar35 = 0x80;
                iVar26 = iVar26 + 2;
                puVar40 = puVar40 + 4;
                *puVar40 = 0x80;
                puStack_154 = puVar35;
                puStack_148 = puVar40;
              } while (iVar26 < *(int *)(param_5 + 0x58));
            }
          }
          else {
            iVar54 = 0;
            dVar61 = param_2;
            if (0 < *(int *)(param_5 + 0x58)) {
              do {
                dVar61 = param_1 + dVar61;
                iVar38 = (int)(dVar61 * dVar19);
                if (iVar38 < 0) {
LAB_82f33848:
                  puVar35[4] = 0x80;
                  puVar40[4] = 0x80;
                }
                else {
                  uVar17 = *(unsigned int *)(param_5 + 0x50);
                  if (iVar38 < (int)(((int)uVar17 >> 1) +
                                     (unsigned int)((int)uVar17 < 0 && (uVar17 & 1) != 0) + -1)) {
                    iRam832617f4 = iVar38 << 8;
                    iVar29 = (uVar17 * iVar26 + iVar38 * 2) * 2;
                    uVar17 = (unsigned int)(dVar61 * dVar60 - (double)(__int64)iRam832617f4);
                    iVar37 = ((int)uVar17 >> 1) + (unsigned int)((int)uVar17 < 0 && (uVar17 & 1) != 0);
                    iVar38 = (0x100 - iVar37) - iVar1;
                    puVar35[4] = (char)((unsigned int)*(unsigned char *)(iVar29 + iVar28 + 4) * iVar37 +
                                        (iVar38 + iVar1) * (unsigned int)*(unsigned char *)(iVar29 + iVar28) >> 8);
                    puVar40[4] = (char)((unsigned int)((unsigned char *)(iVar29 + iVar57))[4] * iVar37 +
                                        (iVar38 + iVar1) * (unsigned int)*(unsigned char *)(iVar29 + iVar57) >> 8);
                  }
                  else {
                    if ((iVar38 < 1) ||
                       (uVar17 = *(unsigned int *)(param_5 + 0x50),
                       (int)(((int)uVar17 >> 1) + (unsigned int)((int)uVar17 < 0 && (uVar17 & 1) != 0)) <=
                       iVar38)) goto LAB_82f33848;
                    iRam832617f4 = iVar38 << 8;
                    iVar38 = (uVar17 * iVar26 + iVar38 * 2) * 2;
                    puVar35[4] = *(unsigned char *)(iVar38 + iVar28);
                    puVar40[4] = *(unsigned char *)(iVar38 + iVar57);
                  }
                }
                iVar54 = iVar54 + 2;
                puVar35 = puVar35 + 4;
                puVar40 = puVar40 + 4;
                puStack_154 = puVar35;
                puStack_148 = puVar40;
              } while (iVar54 < *(int *)(param_5 + 0x58));
            }
          }
        }
        else {
          iVar54 = 0;
          dVar61 = param_2;
          if (0 < *(int *)(param_5 + 0x58)) {
            do {
              dVar61 = param_1 + dVar61;
              iVar38 = (int)(dVar61 * dVar19);
              if (iVar38 < 0) {
LAB_82f336e0:
                puVar35[4] = 0x80;
                puVar40[4] = 0x80;
              }
              else {
                uVar17 = *(unsigned int *)(param_5 + 0x50);
                if (iVar38 < (int)(((int)uVar17 >> 1) + (unsigned int)((int)uVar17 < 0 && (uVar17 & 1) != 0)
                                  + -1)) {
                  iRam832617f4 = iVar38 << 8;
                  iVar38 = (uVar17 * iVar26 + iVar38 * 2) * 2;
                  iVar37 = iVar38 + iVar28;
                  bVar41 = *(unsigned char *)(uVar17 * 2 + iVar37);
                  uVar2 = (unsigned int)(dVar61 * dVar60 - (double)(__int64)iRam832617f4);
                  iVar43 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
                  iVar46 = (0x100 - iVar43) - iVar1;
                  iVar29 = iVar38 + iVar57;
                  puVar35[4] = (char)(((int)(((((unsigned int)*(unsigned char *)((uVar17 + 2) * 2 + iVar37) -
                                               (unsigned int)bVar41) - (unsigned int)*(unsigned char *)(iVar37 + 4)) +
                                             (unsigned int)*(unsigned char *)(iVar38 + iVar28)) * iVar43 * iVar1) >>
                                      8) + iVar46 * (unsigned int)*(unsigned char *)(iVar38 + iVar28) +
                                      (unsigned int)*(unsigned char *)(iVar37 + 4) * iVar43 + (unsigned int)bVar41 * iVar1 >>
                                     8);
                  bVar41 = *(unsigned char *)(*(int *)(param_5 + 0x50) * 2 + iVar29);
                  puVar40[4] = (char)(((int)(((((unsigned int)*(unsigned char *)((*(int *)(param_5 + 0x50) + 2) * 2 +
                                                               iVar29) - (unsigned int)bVar41) -
                                              (unsigned int)*(unsigned char *)(iVar29 + 4)) +
                                             (unsigned int)*(unsigned char *)(iVar38 + iVar57)) * iVar43 * iVar1) >>
                                      8) + iVar46 * (unsigned int)*(unsigned char *)(iVar38 + iVar57) +
                                      (unsigned int)*(unsigned char *)(iVar29 + 4) * iVar43 + (unsigned int)bVar41 * iVar1 >>
                                     8);
                }
                else {
                  if ((iVar38 < 1) ||
                     (uVar17 = *(unsigned int *)(param_5 + 0x50),
                     (int)(((int)uVar17 >> 1) + (unsigned int)((int)uVar17 < 0 && (uVar17 & 1) != 0)) <=
                     iVar38)) goto LAB_82f336e0;
                  iRam832617f4 = iVar38 << 8;
                  iVar29 = (uVar17 * iVar26 + iVar38 * 2) * 2;
                  uVar2 = (unsigned int)(dVar61 * dVar60 - (double)(__int64)iRam832617f4);
                  iVar37 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
                  iVar38 = (0x100 - iVar37) - iVar1;
                  puVar35[4] = (char)((unsigned int)*(unsigned char *)(uVar17 * 2 + iVar29 + iVar28) * iVar1 +
                                      (iVar38 + iVar37) * (unsigned int)*(unsigned char *)(iVar29 + iVar28) >> 8);
                  puVar40[4] = (char)((unsigned int)((unsigned char *)(iVar29 + iVar57))
                                            [*(int *)(param_5 + 0x50) * 2] * iVar1 +
                                      (iVar38 + iVar37) * (unsigned int)*(unsigned char *)(iVar29 + iVar57) >> 8);
                }
              }
              iVar54 = iVar54 + 2;
              puVar35 = puVar35 + 4;
              puVar40 = puVar40 + 4;
              puStack_154 = puVar35;
              puStack_148 = puVar40;
            } while (iVar54 < *(int *)(param_5 + 0x58));
          }
        }
      }
      else {
        iStack_140 = 0;
        dVar61 = param_2;
        if (0 < *(int *)(param_5 + 0x58)) {
          do {
            dVar61 = param_1 + dVar61;
            iVar29 = (int)(dVar61 * dVar19);
            if ((iVar29 < 1) ||
               (uVar17 = *(unsigned int *)(param_5 + 0x50),
               (int)(((int)uVar17 >> 1) + (unsigned int)((int)uVar17 < 0 && (uVar17 & 1) != 0) + -2) <=
               iVar29)) {
              if ((iVar29 < 0) ||
                 (uVar17 = *(unsigned int *)(param_5 + 0x50),
                 (int)(((int)uVar17 >> 1) + (unsigned int)((int)uVar17 < 0 && (uVar17 & 1) != 0) + -1) <=
                 iVar29)) {
                if ((iVar29 < 1) ||
                   (uVar17 = *(unsigned int *)(param_5 + 0x50),
                   (int)(((int)uVar17 >> 1) + (unsigned int)((int)uVar17 < 0 && (uVar17 & 1) != 0)) <=
                   iVar29)) {
                  puVar35[4] = 0x80;
                  puVar40[4] = 0x80;
                }
                else {
                  iRam832617f4 = iVar29 << 8;
                  iVar37 = (uVar17 * iVar26 + iVar29 * 2) * 2;
                  uVar2 = (unsigned int)(dVar61 * dVar60 - (double)(__int64)iRam832617f4);
                  iVar43 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
                  iVar29 = (0x100 - iVar43) - iVar1;
                  puVar35[4] = (char)((unsigned int)*(unsigned char *)(uVar17 * 2 + iVar37 + iVar28) * iVar1 +
                                      (iVar29 + iVar43) * (unsigned int)*(unsigned char *)(iVar37 + iVar28) >> 8);
                  puVar40[4] = (char)((unsigned int)((unsigned char *)(iVar37 + iVar57))
                                            [*(int *)(param_5 + 0x50) * 2] * iVar1 +
                                      (iVar29 + iVar43) * (unsigned int)*(unsigned char *)(iVar37 + iVar57) >> 8);
                }
              }
              else {
                iRam832617f4 = iVar29 << 8;
                iVar29 = (uVar17 * iVar26 + iVar29 * 2) * 2;
                iVar37 = iVar29 + iVar28;
                bVar41 = *(unsigned char *)(uVar17 * 2 + iVar37);
                pbVar32 = (unsigned char *)(iVar29 + iVar57);
                uVar2 = (unsigned int)(dVar61 * dVar60 - (double)(__int64)iRam832617f4);
                iVar43 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
                iVar46 = (0x100 - iVar43) - iVar1;
                puVar35[4] = (char)(((int)(((((unsigned int)*(unsigned char *)((uVar17 + 2) * 2 + iVar37) -
                                             (unsigned int)bVar41) - (unsigned int)*(unsigned char *)(iVar37 + 4)) +
                                           (unsigned int)*(unsigned char *)(iVar29 + iVar28)) * iVar43 * iVar1) >> 8)
                                    + iVar46 * (unsigned int)*(unsigned char *)(iVar29 + iVar28) +
                                    (unsigned int)*(unsigned char *)(iVar37 + 4) * iVar43 + (unsigned int)bVar41 * iVar1 >> 8
                                   );
                puVar40[4] = (char)(((int)(((((unsigned int)pbVar32[(*(int *)(param_5 + 0x50) + 2) * 2] -
                                             (unsigned int)pbVar32[*(int *)(param_5 + 0x50) * 2]) -
                                            (unsigned int)pbVar32[4]) + (unsigned int)*pbVar32) * iVar43 * iVar1) >>
                                    8) + iVar46 * (unsigned int)*pbVar32 + (unsigned int)pbVar32[4] * iVar43 +
                                    (unsigned int)pbVar32[*(int *)(param_5 + 0x50) * 2] * iVar1 >> 8);
              }
            }
            else {
              iRam832617f4 = iVar29 << 8;
              iVar42 = (uVar17 * iVar26 + iVar29 * 2) * 2;
              iVar29 = iVar42 + iVar28;
              pbVar44 = (unsigned char *)(iVar29 + (uVar17 & 0x7fffffff) * -2);
              bVar11 = *(unsigned char *)(iVar42 + iVar28);
              uVar39 = (unsigned __int64)bVar11;
              bVar12 = *(unsigned char *)((uVar17 + 2) * 2 + iVar29);
              uVar51 = (unsigned __int64)bVar12;
              pbVar32 = (unsigned char *)(uVar17 * 4 + iVar29);
              bVar41 = pbVar44[-4];
              uVar30 = (unsigned __int64)bVar41;
              bVar13 = *(unsigned char *)((uVar17 - 2) * 2 + iVar29);
              uVar53 = (unsigned __int64)bVar13;
              bVar3 = *(unsigned char *)(iVar29 + -4);
              uVar36 = (unsigned __int64)bVar3;
              bVar4 = *pbVar44;
              uVar34 = (unsigned __int64)bVar4;
              bVar5 = pbVar44[4];
              uVar58 = (unsigned __int64)bVar5;
              bVar6 = pbVar32[-4];
              uVar50 = (unsigned __int64)bVar6;
              bVar7 = *pbVar32;
              uVar59 = (unsigned __int64)bVar7;
              bVar8 = pbVar44[8];
              uVar49 = (unsigned __int64)bVar8;
              uVar45 = (unsigned __int64)pbVar32[4];
              bVar9 = *(unsigned char *)(iVar29 + 8);
              uVar56 = (unsigned __int64)bVar9;
              bVar14 = *(unsigned char *)((uVar17 + 2) * 4 + iVar29);
              bVar10 = *(unsigned char *)(iVar29 + 4);
              uVar33 = (unsigned __int64)bVar10;
              uVar27 = uVar59 + (uVar36 + uVar34) * -2 + uVar56;
              uVar48 = (unsigned __int64)*(unsigned char *)((uVar17 + 4) * 2 + iVar29);
              uVar2 = (unsigned int)(dVar61 * dVar60 - (double)(__int64)iRam832617f4);
              uVar22 = ((uVar39 * 2 + uVar53 + uVar58) * 2 - uVar45) - uVar48;
              bVar15 = *(unsigned char *)(uVar17 * 2 + iVar29);
              uVar31 = (unsigned __int64)bVar15;
              iVar46 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0);
              iVar29 = iVar46 * iVar46 >> 8;
              iVar37 = iVar29 * iVar46 >> 8;
              iVar43 = (unsigned int)bVar11 + (unsigned int)bVar11 * 4;
              uVar23 = ((uVar31 - uVar51) - uVar56) + uVar36;
              iStack_128 = (int)(((((uVar34 - uVar39) - uVar30 & 0x7fffffff) * 2 - uVar59) + uVar50
                                  + uVar31 & 0x7fffffff) << 1);
              uVar24 = (((unsigned int)bVar10 - (unsigned int)bVar7) - (unsigned int)bVar12) + uVar34;
              uVar25 = uVar51 - uVar31;
              uVar55 = (uVar39 - uVar33) + uVar25;
              iVar43 = (((int)(((int)((uVar27 & 0xffffffff) << 3) - (int)uVar27) +
                               (int)(((((uVar51 + uVar30) * 2 - uVar50) - uVar49 & 0x7fffffff) * 2 +
                                      (unsigned __int64)bVar14 & 0xffffffff) << 1) +
                               (int)uVar22 + (int)((uVar22 & 0xffffffff) << 2) +
                              ((unsigned int)bVar15 + (unsigned int)bVar10) * -0xd) >> 1) * iVar29 +
                        ((int)((int)(((((((uVar34 - uVar58 & 0x7fffffff) * 2 - uVar59) - uVar30) +
                                        uVar45 + uVar49 & 0x7fffffff) * 2 - (unsigned __int64)bVar14) +
                                      uVar50 & 0xffffffff) << 1) +
                               ((int)((uVar23 & 0xffffffff) << 3) - (int)uVar23) +
                               (int)(uVar48 - uVar53) + (int)((uVar48 - uVar53 & 0xffffffff) << 2) +
                              ((unsigned int)bVar10 - (unsigned int)bVar11) * 0xb) >> 1) * iVar37 +
                        ((int)(((iStack_128 +
                                (int)(uVar51 - uVar33) + (int)((uVar51 - uVar33 & 0xffffffff) << 1))
                               - ((unsigned int)bVar13 + (unsigned int)bVar13 * 4)) +
                              ((unsigned int)bVar3 * 8 - (unsigned int)bVar3)) >> 1) * iVar46 +
                       ((int)((((unsigned int)bVar15 * 2 + (unsigned int)bVar4) * 2 - (unsigned int)bVar7) - iVar43) >> 1) *
                       0x100) * iVar54 +
                       (((int)((((int)(((((uVar36 - uVar53 & 0x7fffffff) * 2 - uVar56) - uVar30) +
                                        uVar50 + uVar48 & 0xffffffff) << 1) - (unsigned int)bVar14) +
                               (unsigned int)bVar8) * 2 + ((int)((uVar24 & 0xffffffff) << 3) - (int)uVar24)
                               + ((unsigned int)bVar15 - (unsigned int)bVar11) * 0xb +
                              (int)(uVar45 - uVar58) + (int)((uVar45 - uVar58 & 0xffffffff) << 2))
                        >> 1) * iVar29 +
                        (((((int)((((((uVar59 - uVar45) - uVar48) - uVar36) - uVar34) + uVar53 +
                                   uVar56 + uVar58 & 0xffffffff) << 1) +
                           (int)uVar55 + (int)((uVar55 & 0xffffffff) << 1)) - (unsigned int)bVar6) -
                         (unsigned int)bVar8) + (unsigned int)bVar14 + (unsigned int)bVar41) * iVar37 +
                       ((((((int)((uVar53 - uVar36 & 0xffffffff) << 1) - (unsigned int)bVar6) - (unsigned int)bVar12
                          ) - (unsigned int)bVar15) - (unsigned int)bVar4) + (unsigned int)bVar7 + (unsigned int)bVar10 +
                        (unsigned int)bVar11 + (unsigned int)bVar41) * iVar46) * iVar38 +
                       (((int)(((int)(((((uVar36 - uVar39) - uVar30 & 0x7fffffff) * 2 - uVar56) +
                                       uVar33 + uVar49 & 0xffffffff) << 1) -
                               ((unsigned int)bVar5 + (unsigned int)bVar5 * 4)) + ((unsigned int)bVar4 * 8 - (unsigned int)bVar4) +
                              (int)uVar25 + (int)((uVar25 & 0xffffffff) << 1)) >> 1) * iVar29 +
                        (((((((unsigned int)bVar5 - (unsigned int)bVar4) * 2 - (unsigned int)bVar12) - (unsigned int)bVar10) -
                          (unsigned int)bVar3) - (unsigned int)bVar8) + (unsigned int)bVar15 + (unsigned int)bVar9 + (unsigned int)bVar11 +
                        (unsigned int)bVar41) * iVar37 +
                       ((((unsigned int)bVar11 - (unsigned int)bVar3) - (unsigned int)bVar4) + (unsigned int)bVar41) * iVar46) *
                       iVar1 + (int)(((__int64)
                                      ((int)((((unsigned int)bVar10 * 2 + (unsigned int)bVar3) * 2 - (unsigned int)bVar9) -
                                            iVar43) >> 1) * (__int64)iVar29 +
                                      (__int64)
                                      ((int)((((int)(uVar39 - uVar33) +
                                              (int)((uVar39 - uVar33 & 0xffffffff) << 1)) -
                                             (unsigned int)bVar3) + (unsigned int)bVar9) >> 1) * (__int64)iVar37 +
                                      (__int64)
                                      ((int)((((int)(uVar39 - uVar31) +
                                              (int)((uVar39 - uVar31 & 0xffffffff) << 1)) -
                                             (unsigned int)bVar4) + (unsigned int)bVar7) >> 1) * (__int64)iVar38 +
                                      (__int64)((int)((unsigned int)bVar15 - (unsigned int)bVar4) >> 1) *
                                      (__int64)iVar1 +
                                      (__int64)((int)((unsigned int)bVar10 - (unsigned int)bVar3) >> 1) *
                                      (__int64)iVar46 + uVar39 * 0x100 & 0xffffffff) << 8);
              if (iVar43 >> 0x10 < 0x100) {
                bVar41 = -(char)(iVar43 >> 0x1f) - 1U & (unsigned char)((unsigned int)iVar43 >> 0x10);
              }
              else {
                bVar41 = 0xff;
              }
              pbVar32 = (unsigned char *)(iVar42 + iVar57);
              puStack_154[4] = bVar41;
              bVar41 = pbVar32[-4];
              uVar33 = (unsigned __int64)bVar41;
              bVar3 = pbVar32[4];
              uVar27 = (unsigned __int64)bVar3;
              iVar43 = *(int *)(param_5 + 0x50);
              bVar4 = *pbVar32;
              uVar34 = (unsigned __int64)bVar4;
              bVar5 = pbVar32[8];
              uVar55 = (unsigned __int64)bVar5;
              pbVar44 = pbVar32 + iVar43 * -2;
              bVar13 = pbVar32[(iVar43 + 2) * 2];
              uVar50 = (unsigned __int64)bVar13;
              pbVar47 = pbVar32 + iVar43 * 4;
              bVar14 = pbVar32[(iVar43 + 2) * 4];
              bVar6 = *pbVar44;
              uVar31 = (unsigned __int64)bVar6;
              bVar15 = pbVar32[(iVar43 + -2) * 2];
              uVar51 = (unsigned __int64)bVar15;
              bVar7 = pbVar44[-4];
              uVar25 = (unsigned __int64)bVar7;
              bVar8 = pbVar44[4];
              uVar53 = (unsigned __int64)bVar8;
              bVar9 = pbVar47[-4];
              uVar49 = (unsigned __int64)bVar9;
              uVar45 = (unsigned __int64)pbVar32[(iVar43 + 4) * 2];
              bVar16 = pbVar32[iVar43 * 2];
              uVar30 = (unsigned __int64)bVar16;
              bVar10 = pbVar44[8];
              uVar48 = (unsigned __int64)bVar10;
              bVar11 = *pbVar47;
              uVar58 = (unsigned __int64)bVar11;
              bVar12 = pbVar47[4];
              uVar22 = uVar58 + (uVar33 + uVar31) * -2 + uVar55;
              uVar36 = ((uVar34 * 2 + uVar51 + uVar53) * 2 - (unsigned __int64)bVar12) - uVar45;
              uVar23 = ((uVar30 - uVar50) - uVar55) + uVar33;
              iVar42 = (unsigned int)bVar4 + (unsigned int)bVar4 * 4;
              uVar39 = uVar50 - uVar30;
              uVar24 = (uVar34 - uVar27) + uVar39;
              iVar29 = (((int)(((int)((uVar22 & 0xffffffff) << 3) - (int)uVar22) +
                               (int)(((((uVar50 + uVar25) * 2 - uVar49) - uVar48 & 0x7fffffff) * 2 +
                                      (unsigned __int64)bVar14 & 0xffffffff) << 1) +
                               (int)uVar36 + (int)((uVar36 & 0xffffffff) << 2) +
                              ((unsigned int)bVar16 + (unsigned int)bVar3) * -0xd) >> 1) * iVar29 +
                        ((int)((int)(((((((uVar31 - uVar53 & 0x7fffffff) * 2 - uVar58) - uVar25) +
                                        (unsigned __int64)bVar12 + uVar48 & 0x7fffffff) * 2 -
                                      (unsigned __int64)bVar14) + uVar49 & 0xffffffff) << 1) +
                               ((int)((uVar23 & 0xffffffff) << 3) - (int)uVar23) +
                               (int)(uVar45 - uVar51) + (int)((uVar45 - uVar51 & 0xffffffff) << 2) +
                              ((unsigned int)bVar3 - (unsigned int)bVar4) * 0xb) >> 1) * iVar37 +
                        ((int)((((int)(((((uVar31 - uVar34) - uVar25 & 0x7fffffff) * 2 - uVar58) +
                                        uVar49 + uVar30 & 0xffffffff) << 1) +
                                (int)(uVar50 - uVar27) + (int)((uVar50 - uVar27 & 0xffffffff) << 1))
                               - ((unsigned int)bVar15 + (unsigned int)bVar15 * 4)) +
                              ((unsigned int)bVar41 * 8 - (unsigned int)bVar41)) >> 1) * iVar46 +
                       ((int)((((unsigned int)bVar16 * 2 + (unsigned int)bVar6) * 2 - (unsigned int)bVar11) - iVar42) >> 1)
                       * 0x100) * iVar54 +
                       (((int)((int)((((int)(((((uVar33 - uVar51 & 0x7fffffff) * 2 - uVar55) -
                                              uVar25) + uVar49 + uVar45 & 0xffffffff) << 1) -
                                      (unsigned int)bVar14) + uVar48 & 0xffffffff) << 1) +
                               ((((unsigned int)bVar3 - (unsigned int)bVar11) - (unsigned int)bVar13) + (unsigned int)bVar6) * 7 +
                               ((unsigned int)bVar16 - (unsigned int)bVar4) * 0xb + ((unsigned int)bVar12 - (unsigned int)bVar8) * 5
                              ) >> 1) * iVar29 +
                        (((((int)((((((((unsigned int)bVar11 - (unsigned int)bVar12) -
                                      (unsigned int)pbVar32[(iVar43 + 4) * 2]) - (unsigned int)bVar41) - (unsigned int)bVar6
                                    ) + (unsigned int)bVar15 + (unsigned int)bVar5) + uVar53 & 0xffffffff) << 1) +
                           (int)uVar24 + (int)((uVar24 & 0xffffffff) << 1)) - (unsigned int)bVar9) -
                         (unsigned int)bVar10) + (unsigned int)bVar14 + (unsigned int)bVar7) * iVar37 +
                       ((((((int)((uVar51 - uVar33 & 0xffffffff) << 1) - (unsigned int)bVar9) - (unsigned int)bVar13
                          ) - (unsigned int)bVar16) - (unsigned int)bVar6) + (unsigned int)bVar11 + (unsigned int)bVar3 +
                        (unsigned int)bVar4 + (unsigned int)bVar7) * iVar46) * iVar38 +
                       (((int)(((int)(((((unsigned __int64)(((unsigned int)bVar41 - (unsigned int)bVar4) - (unsigned int)bVar7) &
                                        0x7fffffff) * 2 - uVar55) + uVar27 + uVar48 & 0xffffffff) <<
                                     1) - ((unsigned int)bVar8 + (unsigned int)bVar8 * 4)) +
                               ((unsigned int)bVar6 * 8 - (unsigned int)bVar6) +
                              (int)uVar39 + (int)((uVar39 & 0xffffffff) << 1)) >> 1) * iVar29 +
                        ((((((int)((uVar53 - uVar31 & 0xffffffff) << 1) - (unsigned int)bVar13) -
                           (unsigned int)bVar3) - (unsigned int)bVar41) - (unsigned int)bVar10) + (unsigned int)bVar16 + (unsigned int)bVar5
                         + (unsigned int)bVar4 + (unsigned int)bVar7) * iVar37 +
                       ((((unsigned int)bVar4 - (unsigned int)bVar41) - (unsigned int)bVar6) + (unsigned int)bVar7) * iVar46) *
                       iVar1 + (int)(((__int64)
                                      ((int)((((unsigned int)bVar3 * 2 + (unsigned int)bVar41) * 2 - (unsigned int)bVar5) -
                                            iVar42) >> 1) * (__int64)iVar29 +
                                      (__int64)
                                      ((int)((((int)(uVar34 - uVar27) +
                                              (int)((uVar34 - uVar27 & 0xffffffff) << 1)) -
                                             (unsigned int)bVar41) + (unsigned int)bVar5) >> 1) * (__int64)iVar37 +
                                      (__int64)
                                      ((int)((((int)(uVar34 - uVar30) +
                                              (int)((uVar34 - uVar30 & 0xffffffff) << 1)) -
                                             (unsigned int)bVar6) + (unsigned int)bVar11) >> 1) * (__int64)iVar38 +
                                      (__int64)((int)((unsigned int)bVar16 - (unsigned int)bVar6) >> 1) *
                                      (__int64)iVar1 +
                                      (__int64)((int)((unsigned int)bVar3 - (unsigned int)bVar41) >> 1) *
                                      (__int64)iVar46 + uVar34 * 0x100 & 0xffffffff) << 8);
              if (iVar29 >> 0x10 < 0x100) {
                bVar41 = -(char)(iVar29 >> 0x1f) - 1U & (unsigned char)((unsigned int)iVar29 >> 0x10);
              }
              else {
                bVar41 = 0xff;
              }
              puStack_148[4] = bVar41;
              puVar40 = puStack_148;
              puVar35 = puStack_154;
            }
            puVar35 = puVar35 + 4;
            iStack_140 = iStack_140 + 2;
            puVar40 = puVar40 + 4;
            puStack_154 = puVar35;
            puStack_148 = puVar40;
          } while (iStack_140 < *(int *)(param_5 + 0x58));
        }
      }
      iStack_10c = iStack_10c + 1;
    } while (iStack_10c < *(int *)(param_5 + 0x5c));
  }
  return;
}

