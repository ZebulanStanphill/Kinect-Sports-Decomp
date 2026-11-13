extern int fn_82F68918();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6B2A8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82052318;
extern unsigned int lbl_820FC378;
extern unsigned int uStack_e8;


void fn_82C6A398(unsigned __int64 param_1,double param_2,double param_3)

{
  int iVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  unsigned char *pbVar12;
  unsigned char *pbVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  int iVar20;
  __int64 lVar21;
  unsigned int uVar22;
  unsigned char *pbVar23;
  unsigned __int64 uVar24;
  unsigned char *pbVar25;
  unsigned int uVar26;
  int iVar27;
  unsigned int uVar28;
  unsigned char *pbVar29;
  int iVar30;
  unsigned int uVar32;
  unsigned __int64 uVar31;
  unsigned char *puVar33;
  int iVar34;
  unsigned char *pbVar35;
  char *pcVar36;
  int iVar38;
  int iVar39;
  unsigned int uVar40;
  char *pcVar41;
  __int64 lVar37;
  unsigned char *puVar42;
  unsigned int uVar43;
  int iVar45;
  unsigned __int64 uVar44;
  int iVar46;
  int iVar47;
  unsigned int uVar48;
  double dVar49;
  double extraout_f1;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  char *pcStack_108;
  char *pcStack_104;
  unsigned int uStack_e8;
  
  iVar20 = fn_82F6A548();
  if (iVar20 == 0) {
    fn_82F6A594(0xfffffffffffffffd);
  }
  else {
    iVar5 = *(int *)(iVar20 + 0x3c30);
    iVar6 = *(int *)(iVar20 + 0x3c34);
    iVar7 = *(int *)(iVar20 + 0x14) >> 1;
    iVar8 = *(int *)(iVar20 + 0x3c20) >> 1;
    dVar49 = -extraout_f1;
    if (-extraout_f1 < 0.0) {
      dVar49 = lbl_82005710;
    }
    dVar54 = extraout_f1;
    dVar55 = lbl_82005710;
    dVar50 = (double)fn_82F6B2A8(dVar49);
    dVar49 = (double)(__int64)(int)dVar50;
    if ((double)(__int64)*(int *)(iVar20 + 0x3c20) < (double)(__int64)(int)dVar50) {
      dVar49 = (double)(__int64)*(int *)(iVar20 + 0x3c20);
    }
    dVar50 = (double)fn_82F68918(dVar49);
    dVar53 = (double)(__int64)*(int *)(iVar20 + 0x14) - dVar54;
    dVar49 = (double)(__int64)*(int *)(iVar20 + 0x3c20);
    if (dVar53 <= (double)(__int64)*(int *)(iVar20 + 0x3c20)) {
      dVar49 = dVar53;
    }
    dVar53 = (double)fn_82F68918(dVar49);
    dVar49 = (double)(__int64)(int)dVar53;
    if ((double)(__int64)(int)dVar53 < 0.0) {
      dVar49 = dVar55;
    }
    dVar53 = (double)fn_82F6B2A8(dVar49);
    dVar49 = -param_2;
    if (-param_2 < 0.0) {
      dVar49 = dVar55;
    }
    dVar51 = (double)fn_82F6B2A8(dVar49);
    dVar49 = (double)(__int64)*(int *)(iVar20 + 0x3c24);
    if ((double)(__int64)(int)dVar51 <= (double)(__int64)*(int *)(iVar20 + 0x3c24)) {
      dVar49 = (double)(__int64)(int)dVar51;
    }
    dVar51 = (double)fn_82F68918(dVar49);
    dVar49 = (double)(__int64)*(int *)(iVar20 + 0x3c1c) - param_2;
    if ((double)(__int64)*(int *)(iVar20 + 0x3c24) < dVar49) {
      dVar49 = (double)(__int64)*(int *)(iVar20 + 0x3c24);
    }
    dVar52 = (double)fn_82F68918(dVar49);
    uVar32 = (int)dVar50 + 1;
    uVar16 = (unsigned __int64)(unsigned int)(int)dVar51 + 1 & 0xfffffffe;
    uVar48 = uVar32 & 0xfffffffe;
    uVar17 = (int)dVar53 & 0xfffffffe;
    iVar45 = (int)uVar16;
    dVar49 = (double)(__int64)(int)dVar52;
    if ((double)(__int64)(int)dVar52 < 0.0) {
      dVar49 = dVar55;
    }
    dVar49 = (double)fn_82F6B2A8(dVar49);
    uStack_e8 = (int)dVar49 & 0xfffffffe;
    if ((int)uStack_e8 < 2) {
      uStack_e8 = 2;
    }
    pcStack_108 = *(char **)(iVar20 + 0x3c3c);
    pcStack_104 = *(char **)(iVar20 + 0x3c40);
    puVar42 = *(unsigned char **)(iVar20 + 0x3c38);
    uVar9 = (int)uVar32 >> 1;
    iVar27 = (int)dVar53 >> 1;
    uVar31 = ((unsigned __int64)(unsigned int)(int)dVar51 + 1 & 0x1ffffe) * 0x800 -
             (unsigned __int64)(unsigned int)(int)(param_2 * lbl_820FC378);
    uVar28 = (uVar32 & 0x1ffffe) * 0x800 - (int)(dVar54 * lbl_820FC378);
    iVar10 = (int)uVar28 >> 0xb;
    uVar14 = uVar28 & 0x7ff;
    uVar31 = ((uVar31 & 0xffffffff) >> 0x1f) - 1 & uVar31;
    uVar22 = (unsigned int)uVar31;
    iVar11 = (int)uVar28 >> 0xc;
    uVar15 = uVar22 & 0x7ff;
    uVar18 = (int)uVar28 >> 1 & 0x7ff;
    uVar19 = (int)uVar22 >> 1 & 0x7ff;
    iVar47 = (0x800 - uVar18) - uVar19;
    iVar46 = (0x800 - uVar15) - uVar14;
    dVar49 = lbl_82005758;
    if ((param_3 <= lbl_82005758) && (dVar49 = param_3, param_3 < dVar55)) {
      dVar49 = dVar55;
    }
    iVar30 = 0;
    iVar1 = (int)(dVar49 * lbl_82052318);
    if (0 < iVar45) {
      do {
        iVar38 = 0;
        if (0 < *(int *)(iVar20 + 0x3c20)) {
          puVar33 = puVar42 + -1;
          do {
            iVar38 = iVar38 + 1;
            puVar33 = puVar33 + 1;
            *puVar33 = 0;
          } while (iVar38 < *(int *)(iVar20 + 0x3c20));
        }
        if (0 < iVar8) {
          pcVar41 = pcStack_104;
          iVar38 = iVar8;
          do {
            pcVar41[(int)pcStack_108 - (int)pcStack_104] = -0x80;
            *pcVar41 = -0x80;
            pcVar41 = pcVar41 + 1;
            iVar38 = iVar38 + -1;
          } while (iVar38 != 0);
        }
        iVar38 = *(int *)(iVar20 + 0x3c20);
        pcStack_108 = pcStack_108 + iVar8;
        pcStack_104 = pcStack_104 + iVar8;
        iVar34 = 0;
        iVar39 = iVar38;
        if (0 < iVar38) {
          puVar33 = puVar42 + iVar38 + -1;
          do {
            puVar33 = puVar33 + 1;
            *puVar33 = 0;
            iVar34 = iVar34 + 1;
            iVar39 = *(int *)(iVar20 + 0x3c20);
          } while (iVar34 < iVar39);
        }
        iVar30 = iVar30 + 2;
        puVar42 = puVar42 + iVar39 + iVar38;
      } while (iVar30 < iVar45);
    }
    uVar40 = uStack_e8 - 2;
    if (iVar45 < (int)uVar40) {
      uVar44 = uVar16;
      uVar43 = (int)uVar22 >> 0xb;
      do {
        pbVar35 = (unsigned char *)(uVar43 * *(int *)(iVar20 + 0x14) + iVar10 + *(int *)(iVar20 + 0x3c2c));
        puVar33 = puVar42;
        if (0 < (int)uVar48) {
          puVar33 = puVar42 + -1;
          for (uVar26 = uVar32 & 0xfffffffe; uVar26 != 0; uVar26 = uVar26 - 1) {
            puVar33 = puVar33 + 1;
            *puVar33 = 0;
          }
          puVar33 = puVar42 + uVar48;
        }
        pbVar29 = pbVar35 + *(int *)(iVar20 + 0x14);
        if ((uVar28 & 0x7ff) == 0) {
          if ((uVar31 & 0x7ff) == 0) {
            if ((int)uVar48 < (int)uVar17) {
              iVar30 = uVar17 - uVar48;
              uVar26 = uVar48;
              do {
                iVar38 = uVar26 - uVar48;
                uVar26 = uVar26 + 1;
                *puVar33 = (char)((unsigned __int64)
                                  ((__int64)(int)(unsigned int)pbVar35[iVar38] * (__int64)iVar1) >> 8);
                puVar33 = puVar33 + 1;
                iVar30 = iVar30 + -1;
              } while (iVar30 != 0);
            }
          }
          else if ((int)uVar48 < (int)uVar17) {
            iVar30 = uVar17 - uVar48;
            pbVar29 = pbVar29 + -1;
            uVar26 = uVar48;
            do {
              iVar38 = uVar26 - uVar48;
              uVar26 = uVar26 + 1;
              pbVar29 = pbVar29 + 1;
              *puVar33 = (char)((unsigned __int64)
                                ((__int64)
                                 ((int)((unsigned int)pbVar35[iVar38] * iVar46 + *pbVar29 * uVar15) >> 0xb)
                                * (__int64)iVar1) >> 8);
              puVar33 = puVar33 + 1;
              iVar30 = iVar30 + -1;
            } while (iVar30 != 0);
          }
        }
        else if ((uVar31 & 0x7ff) == 0) {
          if ((int)uVar48 < (int)uVar17) {
            iVar30 = uVar17 - uVar48;
            do {
              bVar2 = *pbVar35;
              pbVar35 = pbVar35 + 1;
              *puVar33 = (char)((unsigned __int64)
                                ((__int64)((int)(*pbVar35 * uVar14 + (unsigned int)bVar2 * iVar46) >> 0xb)
                                * (__int64)iVar1) >> 8);
              puVar33 = puVar33 + 1;
              iVar30 = iVar30 + -1;
            } while (iVar30 != 0);
          }
        }
        else if ((int)uVar48 < (int)uVar17) {
          iVar30 = uVar17 - uVar48;
          do {
            bVar2 = *pbVar29;
            pbVar29 = pbVar29 + 1;
            bVar3 = *pbVar35;
            pbVar35 = pbVar35 + 1;
            *puVar33 = (char)((unsigned __int64)
                              ((__int64)
                               ((int)(((int)(((((unsigned int)*pbVar29 - (unsigned int)bVar2) - (unsigned int)*pbVar35) +
                                             (unsigned int)bVar3) * uVar15 * uVar14) >> 0xb) +
                                      (unsigned int)bVar3 * iVar46 + bVar2 * uVar15 + *pbVar35 * uVar14) >>
                               0xb) * (__int64)iVar1) >> 8);
            puVar33 = puVar33 + 1;
            iVar30 = iVar30 + -1;
          } while (iVar30 != 0);
        }
        if ((int)uVar17 < *(int *)(iVar20 + 0x3c20)) {
          puVar33 = puVar33 + -1;
          uVar26 = uVar17;
          do {
            uVar26 = uVar26 + 1;
            puVar33 = puVar33 + 1;
            *puVar33 = 0;
          } while ((int)uVar26 < *(int *)(iVar20 + 0x3c20));
        }
        uVar24 = (unsigned __int64)uVar9;
        iVar30 = ((((int)uVar44 >> 1) - (iVar45 >> 1)) + ((int)uVar22 >> 0xc)) * iVar7 + iVar11;
        pcVar41 = pcStack_108;
        pcVar36 = pcStack_104;
        if (0 < (int)uVar9) {
          do {
            *pcVar41 = -0x80;
            pcVar41 = pcVar41 + 1;
            *pcVar36 = -0x80;
            pcVar36 = pcVar36 + 1;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        pbVar29 = (unsigned char *)(iVar30 + iVar5);
        pbVar35 = (unsigned char *)(iVar30 + iVar6);
        if (uVar18 == 0) {
          if (uVar19 == 0) {
            if ((int)uVar9 < iVar27) {
              iVar30 = iVar27 - uVar9;
              do {
                pbVar29 = pbVar35 + (iVar5 - iVar6);
                bVar2 = *pbVar35;
                pbVar35 = pbVar35 + 1;
                *pcVar41 = (char)((unsigned __int64)((__int64)(int)(*pbVar29 - 0x80) * (__int64)iVar1) >>
                                 8) + -0x80;
                pcVar41 = pcVar41 + 1;
                *pcVar36 = (char)((unsigned __int64)((__int64)(int)(bVar2 - 0x80) * (__int64)iVar1) >> 8)
                           + -0x80;
                pcVar36 = pcVar36 + 1;
                iVar30 = iVar30 + -1;
              } while (iVar30 != 0);
            }
          }
          else if ((int)uVar9 < iVar27) {
            iVar30 = (int)pbVar29 - (int)pcVar41;
            iVar38 = iVar27 - uVar9;
            pbVar35 = pbVar29 + iVar7;
            pbVar29 = pbVar29 + (iVar6 - iVar5) + -1;
            do {
              bVar3 = pbVar35[iVar6 - iVar5];
              pbVar29 = pbVar29 + 1;
              bVar2 = *pbVar29;
              *pcVar41 = (char)((unsigned __int64)
                                ((__int64)
                                 (((int)((unsigned int)(unsigned char)pcVar41[iVar30] * iVar47 + *pbVar35 * uVar19)
                                  >> 0xb) + -0x80) * (__int64)iVar1) >> 8) + -0x80;
              pbVar35 = pbVar35 + 1;
              *pcVar36 = (char)((unsigned __int64)
                                ((__int64)
                                 (((int)((unsigned int)bVar2 * iVar47 + bVar3 * uVar19) >> 0xb) + -0x80) *
                                (__int64)iVar1) >> 8) + -0x80;
              pcVar41 = pcVar41 + 1;
              pcVar36 = pcVar36 + 1;
              iVar38 = iVar38 + -1;
            } while (iVar38 != 0);
          }
        }
        else if (uVar19 == 0) {
          if ((int)uVar9 < iVar27) {
            iVar30 = iVar27 - uVar9;
            do {
              bVar2 = *pbVar29;
              pbVar29 = pbVar29 + 1;
              bVar3 = *pbVar35;
              pbVar35 = pbVar35 + 1;
              bVar4 = *pbVar35;
              *pcVar41 = (char)((unsigned __int64)
                                ((__int64)
                                 (((int)(*pbVar29 * uVar18 + (unsigned int)bVar2 * iVar47) >> 0xb) + -0x80)
                                * (__int64)iVar1) >> 8) + -0x80;
              pcVar41 = pcVar41 + 1;
              *pcVar36 = (char)((unsigned __int64)
                                ((__int64)
                                 (((int)((unsigned int)bVar3 * iVar47 + bVar4 * uVar18) >> 0xb) + -0x80) *
                                (__int64)iVar1) >> 8) + -0x80;
              pcVar36 = pcVar36 + 1;
              iVar30 = iVar30 + -1;
            } while (iVar30 != 0);
          }
        }
        else if ((int)uVar9 < iVar27) {
          iVar30 = iVar27 - uVar9;
          pbVar23 = pbVar35 + iVar7;
          pbVar25 = pbVar29 + iVar7;
          do {
            bVar2 = *pbVar25;
            pbVar12 = pbVar29 + iVar7 + 1;
            pbVar13 = pbVar25 + (1 - iVar7);
            bVar3 = *pbVar29;
            pbVar29 = pbVar29 + 1;
            pbVar25 = pbVar25 + 1;
            *pcVar41 = (char)((unsigned __int64)
                              ((__int64)
                               (((int)(((int)(((((unsigned int)*pbVar12 - (unsigned int)bVar2) - (unsigned int)*pbVar13) +
                                              (unsigned int)bVar3) * uVar18 * uVar19) >> 0xb) +
                                       (unsigned int)bVar3 * iVar47 + *pbVar13 * uVar18 + bVar2 * uVar19) >>
                                0xb) + -0x80) * (__int64)iVar1) >> 8) + -0x80;
            pcVar41 = pcVar41 + 1;
            pbVar12 = pbVar35 + iVar7 + 1;
            pbVar13 = pbVar23 + (1 - iVar7);
            bVar2 = *pbVar35;
            pbVar35 = pbVar35 + 1;
            bVar3 = *pbVar23;
            pbVar23 = pbVar23 + 1;
            *pcVar36 = (char)((unsigned __int64)
                              ((__int64)
                               (((int)(((int)(((((unsigned int)*pbVar12 - (unsigned int)bVar3) - (unsigned int)*pbVar13) +
                                              (unsigned int)bVar2) * uVar18 * uVar19) >> 0xb) +
                                       (unsigned int)bVar2 * iVar47 + *pbVar13 * uVar18 + bVar3 * uVar19) >>
                                0xb) + -0x80) * (__int64)iVar1) >> 8) + -0x80;
            pcVar36 = pcVar36 + 1;
            iVar30 = iVar30 + -1;
          } while (iVar30 != 0);
        }
        if (iVar27 < iVar8) {
          iVar38 = iVar8 - iVar27;
          iVar30 = iVar27;
          do {
            pcVar41[iVar30 - iVar27] = -0x80;
            pcVar36[iVar30 - iVar27] = -0x80;
            iVar30 = iVar30 + 1;
            iVar38 = iVar38 + -1;
          } while (iVar38 != 0);
        }
        pcStack_108 = pcStack_108 + iVar8;
        pcStack_104 = pcStack_104 + iVar8;
        puVar42 = puVar42 + *(int *)(iVar20 + 0x3c20);
        pbVar35 = (unsigned char *)((uVar43 + 1) * *(int *)(iVar20 + 0x14) + iVar10 +
                          *(int *)(iVar20 + 0x3c2c));
        puVar33 = puVar42;
        if (0 < (int)uVar48) {
          puVar33 = puVar42 + -1;
          for (uVar26 = uVar32 & 0xfffffffe; uVar26 != 0; uVar26 = uVar26 - 1) {
            puVar33 = puVar33 + 1;
            *puVar33 = 0;
          }
          puVar33 = puVar42 + uVar48;
        }
        pbVar29 = pbVar35 + *(int *)(iVar20 + 0x14);
        if ((uVar28 & 0x7ff) == 0) {
          if ((uVar31 & 0x7ff) == 0) {
            if ((int)uVar48 < (int)uVar17) {
              iVar30 = uVar17 - uVar48;
              uVar26 = uVar48;
              do {
                iVar38 = uVar26 - uVar48;
                uVar26 = uVar26 + 1;
                *puVar33 = (char)((unsigned __int64)
                                  ((__int64)(int)(unsigned int)pbVar35[iVar38] * (__int64)iVar1) >> 8);
                puVar33 = puVar33 + 1;
                iVar30 = iVar30 + -1;
              } while (iVar30 != 0);
            }
          }
          else if ((int)uVar48 < (int)uVar17) {
            iVar30 = uVar17 - uVar48;
            pbVar29 = pbVar29 + -1;
            uVar26 = uVar48;
            do {
              pbVar29 = pbVar29 + 1;
              iVar38 = uVar26 - uVar48;
              uVar26 = uVar26 + 1;
              *puVar33 = (char)((unsigned __int64)
                                ((__int64)
                                 ((int)((unsigned int)pbVar35[iVar38] * iVar46 + *pbVar29 * uVar15) >> 0xb)
                                * (__int64)iVar1) >> 8);
              puVar33 = puVar33 + 1;
              iVar30 = iVar30 + -1;
            } while (iVar30 != 0);
          }
        }
        else if ((uVar31 & 0x7ff) == 0) {
          if ((int)uVar48 < (int)uVar17) {
            iVar30 = uVar17 - uVar48;
            do {
              bVar2 = *pbVar35;
              pbVar35 = pbVar35 + 1;
              *puVar33 = (char)((unsigned __int64)
                                ((__int64)((int)(*pbVar35 * uVar14 + (unsigned int)bVar2 * iVar46) >> 0xb)
                                * (__int64)iVar1) >> 8);
              puVar33 = puVar33 + 1;
              iVar30 = iVar30 + -1;
            } while (iVar30 != 0);
          }
        }
        else if ((int)uVar48 < (int)uVar17) {
          iVar30 = uVar17 - uVar48;
          do {
            bVar2 = *pbVar29;
            pbVar29 = pbVar29 + 1;
            bVar3 = *pbVar35;
            pbVar35 = pbVar35 + 1;
            *puVar33 = (char)((unsigned __int64)
                              ((__int64)
                               ((int)(((int)(((((unsigned int)*pbVar29 - (unsigned int)bVar2) - (unsigned int)*pbVar35) +
                                             (unsigned int)bVar3) * uVar15 * uVar14) >> 0xb) +
                                      (unsigned int)bVar3 * iVar46 + bVar2 * uVar15 + *pbVar35 * uVar14) >>
                               0xb) * (__int64)iVar1) >> 8);
            puVar33 = puVar33 + 1;
            iVar30 = iVar30 + -1;
          } while (iVar30 != 0);
        }
        iVar30 = *(int *)(iVar20 + 0x3c20);
        if ((int)uVar17 < iVar30) {
          puVar33 = puVar33 + -1;
          uVar26 = uVar17;
          do {
            puVar33 = puVar33 + 1;
            *puVar33 = 0;
            uVar26 = uVar26 + 1;
            iVar30 = *(int *)(iVar20 + 0x3c20);
          } while ((int)uVar26 < iVar30);
        }
        uVar44 = uVar44 + 2;
        puVar42 = puVar42 + iVar30;
        uVar43 = uVar43 + 2;
      } while ((int)uVar44 < (int)uVar40);
    }
    if ((iVar45 + 2 <= (int)uStack_e8) &&
       (uVar31 = (unsigned __int64)uVar40, (int)uVar40 < *(int *)(iVar20 + 0x3c24))) {
      lVar37 = uVar31 - uVar16;
      lVar21 = lVar37 + (unsigned __int64)(unsigned int)((int)uVar22 >> 0xb);
      do {
        iVar45 = *(int *)(iVar20 + 0x14);
        iVar47 = 0;
        iVar46 = (int)lVar21;
        iVar27 = *(int *)(iVar20 + 0x3c2c);
        if (0 < *(int *)(iVar20 + 0x3c20)) {
          puVar33 = puVar42 + -1;
          do {
            if (((iVar46 < *(int *)(iVar20 + 0x3c1c)) &&
                (iVar30 = (iVar10 - uVar48) + iVar47, iVar30 < *(int *)(iVar20 + 0x14))) &&
               (-1 < iVar30)) {
              puVar33[1] = (char)((unsigned __int64)
                                  ((__int64)
                                   (int)(unsigned int)*(unsigned char *)(((iVar46 * iVar45 + iVar10 + iVar27) -
                                                        uVar48) + iVar47) * (__int64)iVar1) >> 8);
            }
            else {
              puVar33[1] = 0;
            }
            puVar33 = puVar33 + 1;
            iVar47 = iVar47 + 1;
          } while (iVar47 < *(int *)(iVar20 + 0x3c20));
        }
        iVar27 = 0;
        iVar45 = ((int)lVar37 >> 1) + ((int)uVar22 >> 0xc);
        if (0 < iVar8) {
          pcVar41 = pcStack_104 + -1;
          pcVar36 = pcStack_108 + -1;
          iVar47 = iVar8;
          do {
            if (((iVar45 < *(int *)(iVar20 + 0x3c1c) >> 1) &&
                (iVar30 = (iVar11 - uVar9) + iVar27, iVar30 < iVar7)) && (-1 < iVar30)) {
              iVar30 = (iVar45 * iVar7 + iVar11) - uVar9;
              pcVar36[1] = (char)((unsigned __int64)
                                  ((__int64)(int)(*(unsigned char *)(iVar30 + iVar27 + iVar5) - 0x80) *
                                  (__int64)iVar1) >> 8) + -0x80;
              pcVar41[1] = (char)((unsigned __int64)
                                  ((__int64)(int)(*(unsigned char *)(iVar30 + iVar27 + iVar6) - 0x80) *
                                  (__int64)iVar1) >> 8) + -0x80;
            }
            else {
              pcVar36[1] = -0x80;
              pcVar41[1] = -0x80;
            }
            pcVar41 = pcVar41 + 1;
            pcVar36 = pcVar36 + 1;
            iVar27 = iVar27 + 1;
            iVar47 = iVar47 + -1;
          } while (iVar47 != 0);
        }
        iVar45 = *(int *)(iVar20 + 0x14);
        iVar27 = *(int *)(iVar20 + 0x3c2c);
        pcStack_108 = pcStack_108 + iVar8;
        iVar47 = *(int *)(iVar20 + 0x3c20);
        pcStack_104 = pcStack_104 + iVar8;
        iVar38 = 0;
        iVar30 = iVar47;
        if (0 < iVar47) {
          puVar33 = puVar42 + iVar47 + -1;
          do {
            if (((iVar46 + 1 < *(int *)(iVar20 + 0x3c1c)) &&
                (iVar30 = (iVar10 - uVar48) + iVar38, iVar30 < *(int *)(iVar20 + 0x14))) &&
               (-1 < iVar30)) {
              puVar33[1] = (char)((unsigned __int64)
                                  ((__int64)
                                   (int)(unsigned int)*(unsigned char *)((((iVar46 + 1) * iVar45 + iVar10 + iVar27) -
                                                        uVar48) + iVar38) * (__int64)iVar1) >> 8);
            }
            else {
              puVar33[1] = 0;
            }
            puVar33 = puVar33 + 1;
            iVar30 = *(int *)(iVar20 + 0x3c20);
            iVar38 = iVar38 + 1;
          } while (iVar38 < iVar30);
        }
        uVar31 = uVar31 + 2;
        lVar37 = lVar37 + 2;
        puVar42 = puVar42 + iVar30 + iVar47;
        lVar21 = lVar21 + 2;
      } while ((int)uVar31 < *(int *)(iVar20 + 0x3c24));
    }
    fn_82F6A594(0);
  }
  return;
}

