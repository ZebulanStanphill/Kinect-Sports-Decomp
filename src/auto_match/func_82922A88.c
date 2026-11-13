extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82922700();
extern int fn_829229F8();
extern int fn_82F691F0();
extern unsigned int iStack_bc;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82922A88(int *param_1)

{
  int iVar1;
  float fVar2;
  __int64 lVar3;
  int *piVar6;
  __int64 lVar4;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned __int64 uVar5;
  unsigned __int64 uVar9;
  int *piVar10;
  unsigned __int64 uVar11;
  float *pfVar12;
  __int64 lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  __int64 lVar19;
  unsigned __int64 uVar20;
  __int64 lVar21;
  unsigned __int64 uVar22;
  unsigned int *puVar23;
  unsigned int *puVar24;
  int *piVar25;
  int *piVar26;
  unsigned __int64 uVar27;
  unsigned __int64 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  unsigned int *puStack_c0;
  int iStack_bc;
  
  uVar17 = (unsigned __int64)(unsigned int)param_1[2];
  iStack_bc = 0;
  puStack_c0 = (unsigned int *)0x0;
  puVar24 = (unsigned int *)0x0;
  piVar6 = (int *)0x0;
  lVar21 = 0;
  puVar23 = (unsigned int *)0x0;
  lVar3 = fn_82922700(*(unsigned int *)(*param_1 + 0x68),*(unsigned int *)(param_1[1] + 0x68),
                        (~uVar17 & 0xffffffff) >> 0x10 & 1);
  if (((lVar3 == 0) ||
      (piVar6 = (int *)fn_82922700(*(unsigned int *)(*param_1 + 0x6c),
                                     *(unsigned int *)(param_1[1] + 0x6c),
                                     (~uVar17 & 0xffffffff) >> 0x11 & 1), piVar6 == (int *)0x0)) ||
     (lVar21 = fn_82922700(*(unsigned int *)(*param_1 + 0x70),*(unsigned int *)(param_1[1] + 0x70),
                             (~uVar17 & 0xffffffff) >> 0x12 & 1), lVar21 == 0)) {
    uVar28 = 0xffffffff80004005;
  }
  else {
    lVar4 = -1;
    iVar1 = *piVar6;
    uVar20 = (unsigned __int64)*(unsigned int *)lVar3 + lVar3;
    uVar8 = *(unsigned int *)(param_1[1] + 0x70);
    uVar27 = (unsigned __int64)uVar8;
    uVar22 = (unsigned __int64)*(unsigned int *)lVar21 + lVar21;
    uVar17 = uVar27 * 0xc;
    if (0x15555555 < uVar27) {
      uVar17 = 0xffffffffffffffff;
    }
    if ((uVar17 & 0xffffffff) < 0xfffffffc) {
      lVar4 = uVar17 + 4;
    }
    puVar7 = (unsigned int *)fn_8265C940(lVar4,0x24810000);
    if (puVar7 == (unsigned int *)0x0) {
      puVar23 = (unsigned int *)0x0;
    }
    else {
      *puVar7 = uVar8;
      puVar23 = puVar7 + 1;
      if (-1 < (__int64)(uVar27 - 1)) {
        do {
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7 = puVar7 + 3;
          *puVar7 = 0;
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
    }
    if ((puVar23 == (unsigned int *)0x0) ||
       (iStack_bc = fn_8265C940(*(int *)(*param_1 + 0x68) << 4,0x24810000), iStack_bc == 0)) {
LAB_829231e8:
      uVar28 = 0xffffffff8007000e;
    }
    else {
      uVar27 = lVar21 + 4;
      uVar17 = uVar27;
      if ((uVar27 & 0xffffffff) < (uVar22 & 0xffffffff)) {
        do {
          uVar11 = *(unsigned int *)uVar17 + uVar17;
          if ((uVar17 + 4 & 0xffffffff) < (uVar11 & 0xffffffff)) {
            lVar4 = uVar17 - 4;
            lVar18 = (((uVar11 - (uVar17 + 4)) - 1 & 0xffffffff) >> 3) + 1;
            do {
              lVar4 = lVar4 + 8;
              puVar23[*(int *)lVar4 * 3 + 2] = puVar23[*(int *)lVar4 * 3 + 2] + 1;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
          uVar17 = uVar11;
        } while ((uVar11 & 0xffffffff) < (uVar22 & 0xffffffff));
      }
      lVar4 = 0;
      if ((uVar27 & 0xffffffff) < (uVar22 & 0xffffffff)) {
        dVar31 = (double)lbl_821AAD20;
        dVar33 = (double)lbl_82002AE0;
        dVar32 = (double)lbl_8200133C;
        do {
          uVar11 = uVar27 + 4;
          uVar27 = *(unsigned int *)uVar27 + uVar27;
          uVar17 = uVar11;
          if ((uVar11 & 0xffffffff) < (uVar27 & 0xffffffff)) {
            do {
              iVar16 = *(int *)uVar17;
              if (puVar23[iVar16 * 3] == 0) {
                if (puVar24 == (unsigned int *)0x0) {
                  uVar8 = fn_8265C940(((__int64)*(int *)(param_1[1] + 0x6c) *
                                             (__int64)*(int *)(param_1[1] + 0x68) & 0xfffffffU) <<
                                            4,0x24810000);
                  puVar23[iVar16 * 3] = uVar8;
                  if (uVar8 == 0) goto LAB_829231e8;
                }
                else {
                  puVar23[iVar16 * 3] = *puVar24;
                  *puVar24 = 0;
                }
                    /* WARNING: Subroutine does not return */
                fn_82F691F0(puVar23[iVar16 * 3],0,
                             ((__int64)*(int *)(param_1[1] + 0x6c) *
                              (__int64)*(int *)(param_1[1] + 0x68) & 0xfffffffU) << 4);
              }
              uVar17 = uVar17 + 8;
            } while ((uVar17 & 0xffffffff) < (uVar27 & 0xffffffff));
          }
          lVar18 = 0;
          if (piVar6 + 1 < (int *)(iVar1 + (int)piVar6)) {
            piVar26 = piVar6 + 1;
            do {
              piVar25 = (int *)(*piVar26 + (int)piVar26);
              (**(int (***)())(*(int *)*param_1 + 4))((int *)*param_1,lVar18,lVar4,iStack_bc);
              if ((lVar3 + 4U & 0xffffffff) < (uVar20 & 0xffffffff)) {
                pfVar12 = (float *)(iStack_bc + 8);
                uVar17 = lVar3 + 4U;
                do {
                  uVar5 = *(unsigned int *)uVar17 + uVar17;
                  if ((uVar11 & 0xffffffff) < (uVar27 & 0xffffffff)) {
                    uVar9 = uVar11;
                    do {
                      if (piVar26 + 1 < piVar25) {
                        piVar10 = piVar26 + 1;
                        do {
                          iVar16 = puVar23[*(int *)uVar9 * 3] +
                                   *(int *)(param_1[1] + 0x68) * *piVar10 * 0x10;
                          if ((uVar17 + 4 & 0xffffffff) < (uVar5 & 0xffffffff)) {
                            lVar19 = uVar17 - 4;
                            lVar13 = (((uVar5 - (uVar17 + 4)) - 1 & 0xffffffff) >> 3) + 1;
                            do {
                              iVar15 = (int)lVar19;
                              iVar14 = *(int *)(iVar15 + 8) * 0x10;
                              fVar2 = (float)piVar10[1] * (float)((int *)uVar9)[1] *
                                      *(float *)(iVar15 + 0xc);
                              *(float *)(iVar14 + iVar16) =
                                   fVar2 * pfVar12[-2] + *(float *)(iVar14 + iVar16);
                              iVar14 = *(int *)(iVar15 + 8) * 0x10 + iVar16;
                              *(float *)(iVar14 + 4) = fVar2 * pfVar12[-1] + *(float *)(iVar14 + 4);
                              iVar14 = *(int *)(iVar15 + 8) * 0x10 + iVar16;
                              *(float *)(iVar14 + 8) = fVar2 * *pfVar12 + *(float *)(iVar14 + 8);
                              lVar19 = lVar19 + 8;
                              iVar14 = *(int *)lVar19 * 0x10 + iVar16;
                              *(float *)(iVar14 + 0xc) =
                                   fVar2 * pfVar12[1] + *(float *)(iVar14 + 0xc);
                              lVar13 = lVar13 + -1;
                            } while (lVar13 != 0);
                          }
                          piVar10 = piVar10 + 2;
                        } while (piVar10 < piVar25);
                      }
                      uVar9 = uVar9 + 8;
                    } while ((uVar9 & 0xffffffff) < (uVar27 & 0xffffffff));
                  }
                  pfVar12 = pfVar12 + 4;
                  uVar17 = uVar5;
                } while ((uVar5 & 0xffffffff) < (uVar20 & 0xffffffff));
              }
              lVar18 = lVar18 + 1;
              piVar26 = piVar25;
              puVar24 = puStack_c0;
            } while (piVar25 < (int *)(iVar1 + (int)piVar6));
          }
          if ((uVar11 & 0xffffffff) < (uVar27 & 0xffffffff)) {
            do {
              puVar7 = puVar23 + *(int *)uVar11 * 3;
              uVar8 = puVar7[2];
              puVar7[2] = (unsigned int)((unsigned __int64)uVar8 - 1);
              if ((unsigned __int64)uVar8 - 1 == 0) {
                iVar16 = param_1[1];
                uVar17 = 0;
                if (*(int *)(iVar16 + 0x6c) != 0) {
                  do {
                    iVar16 = *(int *)(iVar16 + 0x68);
                    iVar14 = *(int *)(*param_1 + 8);
                    iVar15 = (int)uVar17 * iVar16 * 0x10 + *puVar7;
                    if (iVar14 == 1) {
                      uVar8 = 0;
                      if (iVar16 != 0) {
                        pfVar12 = (float *)(iVar15 + -4);
                        do {
                          dVar30 = (double)pfVar12[1];
                          dVar29 = dVar31;
                          if ((dVar31 <= dVar30) && (dVar29 = dVar30, dVar33 <= dVar30)) {
                            dVar29 = dVar33;
                          }
                          dVar30 = (double)pfVar12[2];
                          pfVar12[1] = (float)dVar29;
                          dVar29 = dVar31;
                          if ((dVar31 <= dVar30) && (dVar29 = dVar33, dVar30 < dVar33)) {
                            dVar29 = dVar30;
                          }
                          dVar30 = (double)pfVar12[3];
                          pfVar12[2] = (float)dVar29;
                          dVar29 = dVar31;
                          if ((dVar31 <= dVar30) && (dVar29 = dVar33, dVar30 < dVar33)) {
                            dVar29 = dVar30;
                          }
                          dVar30 = (double)pfVar12[4];
                          pfVar12[3] = (float)dVar29;
                          dVar29 = dVar31;
                          if ((dVar31 <= dVar30) && (dVar29 = dVar30, dVar33 <= dVar30)) {
                            dVar29 = dVar33;
                          }
                          pfVar12 = pfVar12 + 4;
                          *pfVar12 = (float)dVar29;
                          uVar8 = uVar8 + 1;
                        } while (uVar8 < *(unsigned int *)(param_1[1] + 0x68));
                      }
                    }
                    else if (iVar14 == 2) {
                      uVar8 = 0;
                      if (iVar16 != 0) {
                        pfVar12 = (float *)(iVar15 + -4);
                        do {
                          dVar30 = (double)pfVar12[1];
                          dVar29 = dVar32;
                          if ((dVar32 <= dVar30) && (dVar29 = dVar30, dVar33 <= dVar30)) {
                            dVar29 = dVar33;
                          }
                          dVar30 = (double)pfVar12[2];
                          pfVar12[1] = (float)dVar29;
                          dVar29 = dVar32;
                          if ((dVar32 <= dVar30) && (dVar29 = dVar33, dVar30 < dVar33)) {
                            dVar29 = dVar30;
                          }
                          dVar30 = (double)pfVar12[3];
                          pfVar12[2] = (float)dVar29;
                          dVar29 = dVar32;
                          if ((dVar32 <= dVar30) && (dVar29 = dVar33, dVar30 < dVar33)) {
                            dVar29 = dVar30;
                          }
                          dVar30 = (double)pfVar12[4];
                          pfVar12[3] = (float)dVar29;
                          dVar29 = dVar31;
                          if ((dVar31 <= dVar30) && (dVar29 = dVar30, dVar33 <= dVar30)) {
                            dVar29 = dVar33;
                          }
                          pfVar12 = pfVar12 + 4;
                          *pfVar12 = (float)dVar29;
                          uVar8 = uVar8 + 1;
                        } while (uVar8 < *(unsigned int *)(param_1[1] + 0x68));
                      }
                    }
                    else if ((iVar14 == 3) && (uVar8 = 0, iVar16 != 0)) {
                      pfVar12 = (float *)(iVar15 + -4);
                      do {
                        dVar30 = (double)pfVar12[1];
                        dVar29 = dVar32;
                        if ((dVar32 <= dVar30) && (dVar29 = dVar30, dVar33 <= dVar30)) {
                          dVar29 = dVar33;
                        }
                        dVar30 = (double)pfVar12[2];
                        pfVar12[1] = (float)dVar29;
                        dVar29 = dVar32;
                        if ((dVar32 <= dVar30) && (dVar29 = dVar33, dVar30 < dVar33)) {
                          dVar29 = dVar30;
                        }
                        dVar30 = (double)pfVar12[3];
                        pfVar12[2] = (float)dVar29;
                        dVar29 = dVar32;
                        if ((dVar32 <= dVar30) && (dVar29 = dVar33, dVar30 < dVar33)) {
                          dVar29 = dVar30;
                        }
                        dVar30 = (double)pfVar12[4];
                        pfVar12[3] = (float)dVar29;
                        dVar29 = dVar32;
                        if ((dVar32 <= dVar30) && (dVar29 = dVar30, dVar33 <= dVar30)) {
                          dVar29 = dVar33;
                        }
                        pfVar12 = pfVar12 + 4;
                        *pfVar12 = (float)dVar29;
                        uVar8 = uVar8 + 1;
                      } while (uVar8 < *(unsigned int *)(param_1[1] + 0x68));
                    }
                    piVar26 = (int *)param_1[1];
                    (**(int (***)())(*piVar26 + 8))
                              (piVar26,uVar17,*(int *)uVar11,
                               ((__int64)piVar26[0x1a] * (__int64)(int)uVar17 & 0xfffffffU) * 0x10
                               + (unsigned __int64)*puVar7);
                    iVar16 = param_1[1];
                    uVar17 = uVar17 + 1;
                  } while ((uVar17 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar16 + 0x6c));
                }
                puVar7[1] = (unsigned int)puVar24;
                puStack_c0 = puVar7;
                puVar24 = puVar7;
              }
              uVar11 = uVar11 + 8;
            } while ((uVar11 & 0xffffffff) < (uVar27 & 0xffffffff));
          }
          lVar4 = lVar4 + 1;
        } while ((uVar27 & 0xffffffff) < (uVar22 & 0xffffffff));
      }
      uVar28 = 0;
    }
  }
  if (puVar23 != (unsigned int *)0x0) {
    fn_829229F8(puVar23,3);
  }
  fn_8265C990(lVar21,0x24810000);
  fn_8265C990(piVar6,0x24810000);
  fn_8265C990(lVar3,0x24810000);
  fn_8265C990(iStack_bc,0x24810000);
  fn_8265C990(0,0x24810000);
  return uVar28;
}

