typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82964628();
extern int fn_82965778();
extern int fn_8296CF68();
extern int fn_8296D7F0();
extern int fn_82F68CC0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


bool fn_8296FF60(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int *piVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  unsigned int uVar17;
  int iVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned __int64 uVar22;
  unsigned int uVar23;
  int iVar24;
  unsigned int uVar25;
  unsigned __int64 uVar26;
  __int64 lVar27;
  __int64 lVar28;
  unsigned __int64 uVar29;
  unsigned __int64 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  fn_8296CF68();
  uVar19 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar14 = 0;
    do {
      piVar11 = (int *)(iVar14 + *(int *)(param_1 + 0x14));
      iVar14 = iVar14 + 4;
      *(unsigned int *)(*piVar11 + 0x30) = uVar19;
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(unsigned int *)(param_1 + 8));
  }
  iVar15 = -1;
  bVar12 = false;
  iVar14 = -1;
  uVar19 = 0;
  dVar32 = lbl_82005758;
  dVar33 = lbl_82005710;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar18 = 0;
    do {
      puVar5 = *(unsigned int **)(iVar18 + *(int *)(param_1 + 0x18));
      uVar21 = *puVar5;
      if ((((uVar21 & 0xfff00000) != 0) && (0xfffffff < (uVar21 & 0xf0000000))) &&
         ((uVar21 & 0xf0000000) < 0x40000001)) {
        uVar17 = 0;
        uVar22 = (unsigned __int64)puVar5[1] / ((unsigned __int64)uVar21 & 0xfffff);
        trapWord(6,(unsigned __int64)uVar21 & 0xfffff,0);
        if ((int)uVar22 != 0) {
          do {
            uVar21 = puVar5[3];
            uVar23 = 0;
            uVar25 = 0;
            uVar20 = 0;
            if (uVar21 != 0) {
              iVar24 = 0;
              do {
                iVar6 = *(int *)(*(int *)(iVar24 + puVar5[4]) * 4 + *(int *)(param_1 + 0x14));
                iVar7 = *(int *)((uVar21 * uVar17 + uVar25) * 4 + puVar5[2]);
                if ((**(unsigned int **)(iVar7 * 4 + *(int *)(param_1 + 0x14)) & 1) != 0) {
                  iVar2 = *(int *)(iVar6 + 0x14);
                  iVar13 = *(int *)(iVar6 + 0x18);
                  if (iVar2 != -1) {
                    iVar3 = *(int *)(param_1 + 0x14);
                    iVar4 = *(int *)(param_1 + 0x18);
                    do {
                      uVar21 = 0;
                      iVar8 = *(int *)(*(int *)(*(int *)(iVar2 * 4 + iVar3) + 0x48) * 4 + iVar4);
                      if (*(unsigned int *)(iVar8 + 0xc) != 0) {
                        iVar16 = 0;
                        do {
                          if (*(int *)(iVar16 + *(int *)(iVar8 + 0x10)) == iVar2) break;
                          uVar21 = uVar21 + 1;
                          iVar16 = iVar16 + 4;
                        } while (uVar21 < *(unsigned int *)(iVar8 + 0xc));
                      }
                      if (iVar13 == 0) {
                        iVar13 = fn_82965778(param_1,*(unsigned int *)
                                                        (uVar21 * 4 + *(int *)(iVar8 + 8)),iVar7);
                        if (iVar13 != 0) {
                          *(unsigned int *)(iVar6 + 0x40) = 0;
                          goto LAB_82970148;
                        }
                      }
                      else {
                        iVar13 = fn_82965778(param_1,iVar7,
                                               *(unsigned int *)(uVar21 * 4 + *(int *)(iVar8 + 8)));
                        if (iVar13 != 0) {
                          *(unsigned int *)(iVar6 + 0x40) = 1;
LAB_82970148:
                          uVar23 = uVar23 + 1;
                          break;
                        }
                      }
                      iVar13 = *(int *)(*(int *)(param_1 + 0x14) + iVar2 * 4);
                      iVar2 = *(int *)(iVar13 + 0x14);
                      iVar13 = *(int *)(iVar13 + 0x18);
                    } while (iVar2 != -1);
                  }
                }
                uVar21 = puVar5[3];
                uVar25 = uVar25 + 1;
                iVar24 = iVar24 + 4;
                uVar20 = uVar21;
              } while (uVar25 < uVar21);
            }
            if ((uVar23 == uVar20) && (uVar29 = 0, uVar20 != 0)) {
              iVar24 = 0;
              do {
                iVar6 = *(int *)(*(int *)((int)(((__int64)(int)uVar20 * (__int64)(int)uVar17 +
                                                 uVar29 & 0xffffffff) << 2) + puVar5[2]) * 4 +
                                *(int *)(param_1 + 0x14));
                bVar1 = (*(unsigned int *)(*(int *)(*(int *)(iVar6 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4)
                        & 0x100) == 0;
                if (*(int *)(*(int *)(*(int *)(iVar24 + puVar5[4]) * 4 + *(int *)(param_1 + 0x14)) +
                            0x40) == 0) {
                  if ((bVar1) || (*(double *)(iVar6 + 0x20) != dVar33)) {
                    if (iVar15 == -1) {
                      iVar15 = fn_82964628(dVar33,param_1,*(unsigned int *)(param_1 + 0x78),0,0);
                    }
                    *(int *)((int)(((__int64)(int)uVar17 * (__int64)(int)puVar5[3] + uVar29 &
                                   0xffffffff) << 2) + puVar5[2]) = iVar15;
                    goto LAB_82970268;
                  }
                }
                else if ((bVar1) || (*(double *)(iVar6 + 0x20) != dVar32)) {
                  if (iVar14 == -1) {
                    iVar14 = fn_82964628(dVar32,param_1,*(unsigned int *)(param_1 + 0x78),0,0);
                  }
                  *(int *)((int)(((__int64)(int)uVar17 * (__int64)(int)puVar5[3] + uVar29 &
                                 0xffffffff) << 2) + puVar5[2]) = iVar14;
LAB_82970268:
                  bVar12 = true;
                }
                uVar20 = puVar5[3];
                uVar29 = uVar29 + 1;
                iVar24 = iVar24 + 4;
              } while ((uVar29 & 0xffffffff) < (unsigned __int64)uVar20);
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar22);
        }
      }
      uVar19 = uVar19 + 1;
      iVar18 = iVar18 + 4;
    } while (uVar19 < *(unsigned int *)(param_1 + 0xc));
  }
  bVar1 = false;
  uVar19 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar14 = 0;
    do {
      piVar11 = (int *)(iVar14 + *(int *)(param_1 + 0x14));
      iVar14 = iVar14 + 4;
      *(unsigned int *)(*piVar11 + 0x30) = uVar19;
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(unsigned int *)(param_1 + 8));
  }
  uVar19 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    do {
      puVar5 = *(unsigned int **)(uVar19 * 4 + *(int *)(param_1 + 0x18));
      if ((*puVar5 & 0xfff00000) != 0) {
        uVar21 = 0;
        if (puVar5[3] != 0) {
          iVar14 = 0;
          do {
            iVar24 = *(int *)(*(int *)(iVar14 + puVar5[4]) * 4 + *(int *)(param_1 + 0x14));
            iVar15 = *(int *)(iVar24 + 0x14);
            iVar18 = *(int *)(iVar24 + 0x18);
            while (iVar15 != -1) {
              puVar9 = *(unsigned int **)(iVar15 * 4 + *(int *)(param_1 + 0x14));
              if ((*puVar9 & 0x80) == 0) break;
              dVar31 = *(double *)(puVar9 + 8);
              if (iVar18 == 0) {
                if (dVar31 != dVar33) goto LAB_8297035c;
LAB_82970508:
                iVar15 = *(int *)(iVar15 * 4 + *(int *)(param_1 + 0x14));
                iVar18 = *(int *)(iVar15 + 0x18);
                iVar15 = *(int *)(iVar15 + 0x14);
              }
              else {
                if (dVar31 != dVar33) goto LAB_82970508;
LAB_8297035c:
                iVar18 = 0;
                iVar15 = -1;
              }
              bVar12 = true;
            }
            uVar21 = uVar21 + 1;
            *(int *)(iVar24 + 0x14) = iVar15;
            *(int *)(iVar24 + 0x18) = iVar18;
            iVar14 = iVar14 + 4;
          } while (uVar21 < puVar5[3]);
        }
        uVar21 = *puVar5;
        uVar17 = uVar21 & 0xfff00000;
        if ((uVar17 == 0x10f00000) || (uVar17 == 0x11400000)) {
          uVar17 = 0;
          uVar21 = 0;
          if (puVar5[3] != 0) {
            iVar14 = 0;
            iVar15 = 0;
            do {
              puVar9 = *(unsigned int **)(*(int *)(puVar5[2] + iVar15) * 4 + *(int *)(param_1 + 0x14));
              puVar10 = *(unsigned int **)(*(int *)(puVar5[4] + iVar15) * 4 + *(int *)(param_1 + 0x14));
              if (((*(unsigned int *)(*(int *)(puVar9[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) == 0)
                 || (puVar9[2] != 0xffffffff)) {
                if (((*puVar9 & 4) == 0) || ((*puVar9 & 8) == 0)) {
                  uVar20 = *puVar10 & 0xffffff7f;
                }
                else {
                  *(double *)(puVar10 + 8) = dVar33;
                  uVar20 = *puVar10 | 0x80;
                }
                *puVar10 = uVar20;
              }
              else {
                *puVar10 = *puVar10 | 0x80;
                dVar31 = dVar33;
                if (*(double *)(puVar9 + 8) != dVar33) {
                  dVar31 = dVar32;
                }
                *(double *)(puVar10 + 8) = dVar31;
              }
              if ((*puVar10 & 0x80) == 0) {
                uVar17 = uVar17 + 1;
                *(unsigned int *)(puVar5[4] + iVar14) = *(unsigned int *)(puVar5[4] + iVar15);
                *(unsigned int *)(puVar5[2] + iVar14) = *(unsigned int *)(puVar5[2] + iVar15);
                iVar14 = iVar14 + 4;
              }
              uVar21 = uVar21 + 1;
              iVar15 = iVar15 + 4;
            } while (uVar21 < puVar5[3]);
          }
          if (uVar17 != puVar5[3]) {
            if (uVar17 == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = uVar17 & 0xfffff | 0x10f00000;
            }
            puVar5[1] = uVar17;
            puVar5[3] = uVar17;
LAB_82970868:
            *puVar5 = uVar21;
LAB_8297086c:
            bVar12 = true;
          }
        }
        else if ((uVar17 == 0x20700000) || (uVar17 == 0x20800000)) {
          uVar26 = 0;
          uVar22 = 0;
          uVar29 = (unsigned __int64)puVar5[1] / ((unsigned __int64)uVar21 & 0xfffff);
          trapWord(6,(unsigned __int64)uVar21 & 0xfffff,0);
          if (puVar5[3] != 0) {
            iVar14 = 0;
            iVar15 = 0;
            do {
              uVar21 = puVar5[4];
              iVar18 = *(int *)(param_1 + 0x14);
              iVar24 = *(int *)(*(int *)(iVar15 + uVar21) * 4 + iVar18);
              if ((*(int *)(iVar24 + 0x14) != -1) || (*(int *)(iVar24 + 0x18) != 0)) {
                iVar6 = *(int *)(iVar15 + puVar5[2]);
                iVar7 = *(int *)((int)((uVar22 + puVar5[3] & 0xffffffff) << 2) + puVar5[2]);
                iVar13 = *(int *)(iVar6 * 4 + iVar18);
                if ((*(int *)(iVar13 + 0x14) == -1) && (*(int *)(iVar13 + 0x18) == 0)) {
                  bVar1 = true;
                  *(unsigned int *)(*(int *)(iVar7 * 4 + iVar18) + 4) =
                       *(unsigned int *)(param_1 + 0x88);
                  *(int *)(iVar24 + 0x30) = iVar7;
                }
                else {
                  iVar18 = *(int *)(iVar7 * 4 + iVar18);
                  if ((*(int *)(iVar18 + 0x14) == -1) && (*(int *)(iVar18 + 0x18) == 0)) {
                    bVar1 = true;
                    *(unsigned int *)(iVar13 + 4) = *(unsigned int *)(param_1 + 0x88);
                    *(int *)(iVar24 + 0x30) = iVar6;
                  }
                  else {
                    iVar18 = 0;
                    *(unsigned int *)(iVar14 + uVar21) = *(unsigned int *)(iVar15 + uVar21);
                    for (uVar30 = uVar29; uVar30 != 0; uVar30 = uVar30 - 1) {
                      lVar27 = (__int64)iVar18;
                      iVar18 = iVar18 + 1;
                      *(unsigned int *)
                       ((int)((lVar27 * (int)puVar5[3] + uVar26 & 0xffffffff) << 2) + puVar5[2]) =
                           *(unsigned int *)
                            ((int)((lVar27 * (int)puVar5[3] + uVar22 & 0xffffffff) << 2) + puVar5[2]
                            );
                    }
                    uVar26 = uVar26 + 1;
                    iVar14 = iVar14 + 4;
                  }
                }
              }
              uVar22 = uVar22 + 1;
              iVar15 = iVar15 + 4;
            } while ((uVar22 & 0xffffffff) < (unsigned __int64)puVar5[3]);
          }
          if ((uVar26 & 0xffffffff) != (unsigned __int64)puVar5[3]) {
            uVar21 = 0;
            if (uVar29 != 0) {
              lVar27 = (uVar26 & 0x3fffffff) * 4;
              lVar28 = 0;
              do {
                fn_82F68CC0((unsigned __int64)puVar5[2] + lVar28,
                             ((__int64)(int)uVar21 * (__int64)(int)puVar5[3] & 0x3fffffffU) * 4 +
                             (unsigned __int64)puVar5[2],lVar27);
                uVar21 = uVar21 + 1;
                lVar28 = lVar27 + lVar28;
              } while (uVar21 < uVar29);
            }
LAB_829704e8:
            uVar17 = (unsigned int)uVar26;
            if ((uVar26 & 0xffffffff) == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = *puVar5 & 0xfff00000 | uVar17 & 0xfffff;
            }
            puVar5[3] = uVar17;
            puVar5[1] = (int)uVar29 * uVar17;
            goto LAB_82970868;
          }
        }
        else if (((uVar21 & 0xf0000000) < 0x10000000) || (0x40000000 < (uVar21 & 0xf0000000))) {
          if (puVar5[3] != 0) {
            iVar14 = 0;
            uVar21 = 0;
            iVar15 = 0;
            do {
              iVar18 = *(int *)(*(int *)(iVar15 + puVar5[4]) * 4 + *(int *)(param_1 + 0x14));
              if ((*(int *)(iVar18 + 0x14) != -1) || (*(int *)(iVar18 + 0x18) != 0)) {
                iVar14 = iVar14 + 1;
              }
              uVar21 = uVar21 + 1;
              iVar15 = iVar15 + 4;
            } while (uVar21 < puVar5[3]);
            if (iVar14 == 0) {
              *puVar5 = 0;
              puVar5[1] = 0;
              puVar5[3] = 0;
              goto LAB_8297086c;
            }
          }
        }
        else {
          uVar26 = 0;
          uVar22 = 0;
          uVar29 = (unsigned __int64)puVar5[1] / ((unsigned __int64)uVar21 & 0xfffff);
          trapWord(6,(unsigned __int64)uVar21 & 0xfffff,0);
          if (puVar5[3] != 0) {
            iVar14 = 0;
            iVar15 = 0;
            do {
              uVar21 = puVar5[4];
              iVar18 = *(int *)(*(int *)(iVar15 + uVar21) * 4 + *(int *)(param_1 + 0x14));
              if ((*(int *)(iVar18 + 0x14) != -1) || (*(int *)(iVar18 + 0x18) != 0)) {
                iVar18 = 0;
                *(unsigned int *)(iVar14 + uVar21) = *(unsigned int *)(iVar15 + uVar21);
                for (uVar30 = uVar29; uVar30 != 0; uVar30 = uVar30 - 1) {
                  lVar27 = (__int64)iVar18;
                  iVar18 = iVar18 + 1;
                  *(unsigned int *)
                   ((int)((lVar27 * (int)puVar5[3] + uVar26 & 0xffffffff) << 2) + puVar5[2]) =
                       *(unsigned int *)
                        ((int)((lVar27 * (int)puVar5[3] + uVar22 & 0xffffffff) << 2) + puVar5[2]);
                }
                uVar26 = uVar26 + 1;
                iVar14 = iVar14 + 4;
              }
              uVar22 = uVar22 + 1;
              iVar15 = iVar15 + 4;
            } while ((uVar22 & 0xffffffff) < (unsigned __int64)puVar5[3]);
          }
          if ((uVar26 & 0xffffffff) != (unsigned __int64)puVar5[3]) {
            uVar21 = 0;
            if (uVar29 != 0) {
              lVar27 = (uVar26 & 0x3fffffff) * 4;
              lVar28 = 0;
              do {
                fn_82F68CC0(lVar28 + (unsigned __int64)puVar5[2],
                             ((__int64)(int)uVar21 * (__int64)(int)puVar5[3] & 0x3fffffffU) * 4 +
                             (unsigned __int64)puVar5[2],lVar27);
                uVar21 = uVar21 + 1;
                lVar28 = lVar28 + lVar27;
              } while (uVar21 < uVar29);
            }
            goto LAB_829704e8;
          }
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(unsigned int *)(param_1 + 0xc));
    if (bVar1) {
      fn_8296D7F0(param_1);
    }
  }
  return !bVar12;
}

