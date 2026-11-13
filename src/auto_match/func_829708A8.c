typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_110;
extern int fn_82969740();
extern int fn_8296CF68();
extern int fn_82BA02A8();


unsigned __int64 fn_829708A8(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  int iVar10;
  unsigned int *puVar11;
  unsigned int uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  unsigned __int64 uVar16;
  unsigned int uVar18;
  unsigned __int64 uVar17;
  unsigned __int64 uVar19;
  unsigned char auStack_110 [272];
  
  bVar4 = false;
  uVar12 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar15 = 0;
    do {
      iVar10 = *(int *)(iVar15 + *(int *)(param_1 + 0x14));
      iVar13 = *(int *)(*(int *)(iVar10 + 4) * 4 + *(int *)(param_1 + 0x10));
      *(unsigned int *)(iVar10 + 0x30) = *(unsigned int *)(iVar10 + 0x14);
      *(unsigned int *)(iVar10 + 0x40) = *(unsigned int *)(iVar10 + 0x18);
      uVar18 = *(unsigned int *)(iVar13 + 4);
      if ((uVar18 & 0x10) == 0) {
        if ((uVar18 & 0x11028) == 0) {
          *(unsigned int *)(iVar10 + 0x18) = 0;
          goto LAB_8297092c;
        }
      }
      else {
        *(unsigned int *)(iVar10 + 0x18) = 1;
LAB_8297092c:
        *(unsigned int *)(iVar10 + 0x14) = 0xffffffff;
      }
      uVar12 = uVar12 + 1;
      iVar15 = iVar15 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 8));
  }
  iVar15 = *(int *)(param_1 + 0xc);
  if (iVar15 != 0) {
    iVar10 = iVar15 << 2;
    do {
      iVar10 = iVar10 + -4;
      iVar15 = iVar15 + -1;
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar10);
      if ((*puVar2 & 0xfff00000) != 0) {
        uVar12 = puVar2[3];
        uVar18 = 1;
        if (1 < uVar12) {
          iVar13 = 4;
          do {
            fn_82969740(param_1,*(unsigned int *)(*(int *)puVar2[4] * 4 + *(int *)(param_1 + 0x14)),
                          *(unsigned int *)
                           (*(int *)(iVar13 + (int)puVar2[4]) * 4 + *(int *)(param_1 + 0x14)));
            uVar12 = puVar2[3];
            uVar18 = uVar18 + 1;
            iVar13 = iVar13 + 4;
          } while (uVar18 < uVar12);
        }
        uVar18 = 1;
        if (1 < uVar12) {
          iVar13 = 4;
          do {
            uVar18 = uVar18 + 1;
            *(unsigned int *)
             (*(int *)(*(int *)(iVar13 + (int)puVar2[4]) * 4 + *(int *)(param_1 + 0x14)) + 0x14) =
                 *(unsigned int *)(*(int *)(*(int *)puVar2[4] * 4 + *(int *)(param_1 + 0x14)) + 0x14);
            piVar5 = (int *)(iVar13 + (int)puVar2[4]);
            iVar13 = iVar13 + 4;
            *(unsigned int *)(*(int *)(*piVar5 * 4 + *(int *)(param_1 + 0x14)) + 0x18) =
                 *(unsigned int *)(*(int *)(*(int *)puVar2[4] * 4 + *(int *)(param_1 + 0x14)) + 0x18);
            uVar12 = puVar2[3];
          } while (uVar18 < uVar12);
        }
        uVar18 = *puVar2;
        uVar6 = uVar18 & 0xfff00000;
        if (((uVar6 == 0x20700000) || (uVar6 == 0x20800000)) || (uVar6 == 0x11500000)) {
          uVar18 = 0;
          if (uVar12 != 0) {
            iVar13 = 0;
            do {
              iVar14 = *(int *)(param_1 + 0x14);
              fn_82969740(param_1,*(unsigned int *)(*(int *)(iVar13 + puVar2[4]) * 4 + iVar14),
                            *(unsigned int *)
                             (*(int *)(*(int *)(*(int *)(iVar13 + puVar2[2]) * 4 + iVar14) + 0x14) *
                              4 + iVar14));
              iVar14 = *(int *)(param_1 + 0x14);
              fn_82969740(param_1,*(unsigned int *)
                                     (*(int *)(*(int *)(*(int *)(iVar13 + puVar2[2]) * 4 + iVar14) +
                                              0x14) * 4 + iVar14),
                            *(unsigned int *)(*(int *)(iVar13 + puVar2[4]) * 4 + iVar14));
              uVar18 = uVar18 + 1;
              iVar13 = iVar13 + 4;
            } while (uVar18 < puVar2[3]);
          }
        }
        else if (uVar6 == 0x11200000) {
          uVar17 = 0;
          uVar16 = (unsigned __int64)puVar2[1] / ((unsigned __int64)uVar18 & 0xfffff);
          trapWord(6,(unsigned __int64)uVar18 & 0xfffff,0);
          if (uVar12 != 0) {
            do {
              uVar12 = 0;
              if (uVar16 != 0) {
                do {
                  iVar13 = *(int *)((int)(((__int64)(int)uVar12 * (__int64)(int)puVar2[3] + uVar17
                                          & 0xffffffff) << 2) + puVar2[2]);
                  if (iVar13 != -1) {
                    do {
                      iVar14 = *(int *)(param_1 + 0x14);
                      fn_82969740(param_1,*(unsigned int *)(iVar13 * 4 + iVar14),
                                    *(unsigned int *)
                                     (*(int *)(*(int *)(*(int *)((int)((uVar17 & 0xffffffff) << 2) +
                                                                puVar2[4]) * 4 + iVar14) + 0x14) * 4
                                     + iVar14));
                      iVar13 = *(int *)(*(int *)(iVar13 * 4 + *(int *)(param_1 + 0x14)) + 8);
                    } while (iVar13 != -1);
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar16);
              }
              uVar17 = uVar17 + 1;
            } while ((uVar17 & 0xffffffff) < (unsigned __int64)puVar2[3]);
          }
        }
        else if (((uVar18 & 0xf0000000) < 0x10000000) || (0x40000000 < (uVar18 & 0xf0000000))) {
          if (uVar12 == 0) {
            uVar12 = 0;
            if (puVar2[1] != 0) {
              iVar13 = 0;
              do {
                uVar12 = uVar12 + 1;
                *(unsigned int *)
                 (*(int *)(*(int *)(iVar13 + puVar2[2]) * 4 + *(int *)(param_1 + 0x14)) + 0x14) =
                     0xffffffff;
                piVar5 = (int *)(iVar13 + puVar2[2]);
                iVar13 = iVar13 + 4;
                *(unsigned int *)(*(int *)(*piVar5 * 4 + *(int *)(param_1 + 0x14)) + 0x18) = 1;
              } while (uVar12 < puVar2[1]);
            }
          }
          else {
            uVar12 = 0;
            if (puVar2[1] != 0) {
              iVar13 = 0;
              do {
                for (iVar14 = *(int *)(iVar13 + puVar2[2]); iVar14 != -1;
                    iVar14 = *(int *)(*(int *)(iVar14 * 4 + *(int *)(param_1 + 0x14)) + 8)) {
                  fn_82969740(param_1,*(unsigned int *)(iVar14 * 4 + *(int *)(param_1 + 0x14)),
                                *(unsigned int *)(*(int *)puVar2[4] * 4 + *(int *)(param_1 + 0x14)));
                }
                uVar12 = uVar12 + 1;
                iVar13 = iVar13 + 4;
              } while (uVar12 < puVar2[1]);
            }
          }
        }
        else {
          uVar17 = 0;
          uVar16 = (unsigned __int64)puVar2[1] / ((unsigned __int64)uVar18 & 0xfffff);
          trapWord(6,(unsigned __int64)uVar18 & 0xfffff,0);
          if (uVar12 != 0) {
            do {
              uVar12 = 0;
              if (uVar16 != 0) {
                do {
                  iVar13 = *(int *)((int)(((__int64)(int)uVar12 * (__int64)(int)puVar2[3] + uVar17
                                          & 0xffffffff) << 2) + puVar2[2]);
                  if (iVar13 != -1) {
                    do {
                      fn_82969740(param_1,*(unsigned int *)(iVar13 * 4 + *(int *)(param_1 + 0x14)),
                                    *(unsigned int *)
                                     (*(int *)((int)((uVar17 & 0xffffffff) << 2) + puVar2[4]) * 4 +
                                     *(int *)(param_1 + 0x14)));
                      iVar13 = *(int *)(*(int *)(iVar13 * 4 + *(int *)(param_1 + 0x14)) + 8);
                    } while (iVar13 != -1);
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar16);
              }
              uVar17 = uVar17 + 1;
            } while ((uVar17 & 0xffffffff) < (unsigned __int64)puVar2[3]);
          }
        }
      }
    } while (iVar15 != 0);
  }
  fn_82BA02A8(auStack_110);
  uVar12 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar15 = 0;
    do {
      puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar15);
      uVar18 = *puVar2 & 0xfff00000;
      if ((((((*puVar2 & 0xfff00000) != 0) && (uVar18 != 0x10f00000)) &&
           ((uVar18 != 0x20700000 &&
            ((((uVar18 != 0x11100000 && (uVar18 != 0x11200000)) && (uVar18 != 0x11300000)) &&
             ((uVar18 != 0x11400000 && (uVar18 != 0x20800000)))))))) && (uVar18 != 0x20900000)) &&
         (uVar18 != 0x11500000)) {
        iVar10 = *(int *)(param_1 + 0x14);
        iVar13 = *(int *)(*(int *)puVar2[4] * 4 + iVar10);
        if ((*(unsigned int *)(*(int *)(*(int *)(iVar13 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x1000)
            == 0) {
          iVar14 = *(int *)(iVar13 + 0x14);
          uVar17 = 0;
          uVar7 = 0;
          uVar16 = 0;
          if (iVar14 != -1) {
            do {
              uVar7 = uVar7 + 1;
              iVar14 = *(int *)(*(int *)(iVar14 * 4 + iVar10) + 0x14);
            } while (iVar14 != -1);
            if ((uVar7 & 0xffffffff) != 0) {
              uVar16 = uVar7;
            }
          }
          iVar14 = *(int *)(iVar13 + 8);
          while (iVar14 != -1) {
            uVar7 = 0;
            iVar3 = *(int *)(iVar14 * 4 + iVar10);
            iVar14 = *(int *)(iVar3 + 0x14);
            if (iVar14 != -1) {
              do {
                uVar7 = uVar7 + 1;
                iVar14 = *(int *)(*(int *)(iVar14 * 4 + iVar10) + 0x14);
              } while (iVar14 != -1);
              if ((uVar17 & 0xffffffff) < (uVar7 & 0xffffffff)) {
                uVar17 = uVar7;
              }
            }
            iVar14 = *(int *)(iVar3 + 8);
          }
          uVar7 = (unsigned __int64)puVar2[1];
          if (uVar7 != 0) {
            piVar5 = (int *)puVar2[2];
            do {
              iVar14 = *piVar5;
              while (iVar14 != -1) {
                uVar8 = 0;
                iVar3 = *(int *)(iVar14 * 4 + iVar10);
                iVar14 = *(int *)(iVar3 + 0x14);
                if (iVar14 != -1) {
                  do {
                    uVar8 = uVar8 + 1;
                    iVar14 = *(int *)(*(int *)(iVar14 * 4 + iVar10) + 0x14);
                  } while (iVar14 != -1);
                  if ((uVar17 & 0xffffffff) < (uVar8 & 0xffffffff)) {
                    uVar17 = uVar8;
                  }
                }
                iVar14 = *(int *)(iVar3 + 8);
              }
              piVar5 = piVar5 + 1;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          iVar10 = *(int *)(iVar13 + 0x14);
          if ((uVar17 & 0xffffffff) < (uVar16 & 0xffffffff)) {
            lVar9 = uVar16 - uVar17;
            do {
              iVar10 = iVar10 * 4;
              if (((*(unsigned int *)(*(int *)(*(int *)(*(int *)(iVar10 + *(int *)(param_1 + 0x14)) + 4) * 4
                                      + *(int *)(param_1 + 0x10)) + 4) & 0x8000) != 0) &&
                 (uVar18 = 0, puVar2[3] != 0)) {
                iVar13 = 0;
                do {
                  uVar18 = uVar18 + 1;
                  *(unsigned int *)
                   (*(int *)(*(int *)(puVar2[4] + iVar13) * 4 + *(int *)(param_1 + 0x14)) + 0x18) =
                       *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x14) + iVar10) + 0x18);
                  piVar5 = (int *)(puVar2[4] + iVar13);
                  iVar13 = iVar13 + 4;
                  *(unsigned int *)(*(int *)(*piVar5 * 4 + *(int *)(param_1 + 0x14)) + 0x14) =
                       *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x14) + iVar10) + 0x14);
                } while (uVar18 < puVar2[3]);
              }
              iVar10 = *(int *)(*(int *)(iVar10 + *(int *)(param_1 + 0x14)) + 0x14);
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
        }
      }
      uVar12 = uVar12 + 1;
      iVar15 = iVar15 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 0xc));
  }
  uVar12 = 0;
  if (*(unsigned int *)(param_1 + 8) != 0) {
    iVar15 = 0;
    do {
      iVar10 = *(int *)(*(int *)(param_1 + 0x14) + iVar15);
      if ((*(int *)(iVar10 + 0x30) != *(int *)(iVar10 + 0x14)) ||
         (*(int *)(iVar10 + 0x40) != *(int *)(iVar10 + 0x18))) {
        bVar4 = true;
      }
      uVar12 = uVar12 + 1;
      iVar15 = iVar15 + 4;
    } while (uVar12 < *(unsigned int *)(param_1 + 8));
    if (bVar4) {
      fn_8296CF68(param_1);
      do {
        uVar12 = *(unsigned int *)(param_1 + 0xc);
        bVar4 = true;
        if (uVar12 == 0) break;
        iVar15 = uVar12 << 2;
        do {
          iVar15 = iVar15 + -4;
          uVar12 = uVar12 - 1;
          puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar15);
          if ((*puVar2 & 0xfff00000) != 0) {
            uVar6 = 0;
            uVar18 = uVar12;
            if (puVar2[3] != 0) {
              iVar10 = 0;
              do {
                iVar13 = *(int *)(*(int *)(*(int *)(puVar2[4] + iVar10) * 4 +
                                          *(int *)(param_1 + 0x14)) + 0x14);
                if ((iVar13 != -1) &&
                   (uVar1 = *(unsigned int *)(*(int *)(iVar13 * 4 + *(int *)(param_1 + 0x14)) + 0x48),
                   uVar18 < uVar1)) {
                  uVar18 = uVar1;
                }
                uVar6 = uVar6 + 1;
                iVar10 = iVar10 + 4;
              } while (uVar6 < puVar2[3]);
            }
            uVar6 = 0;
            if (puVar2[1] != 0) {
              iVar10 = 0;
              do {
                uVar1 = *(unsigned int *)(*(int *)(*(int *)(puVar2[2] + iVar10) * 4 +
                                          *(int *)(param_1 + 0x14)) + 0x48);
                if ((uVar1 != 0xffffffff) && (uVar18 < uVar1)) {
                  uVar18 = uVar1;
                }
                uVar6 = uVar6 + 1;
                iVar10 = iVar10 + 4;
              } while (uVar6 < puVar2[1]);
            }
            if (uVar12 != uVar18) {
              if (uVar12 < uVar18) {
                iVar13 = uVar18 - uVar12;
                iVar10 = iVar15;
                do {
                  puVar11 = (unsigned int *)(*(int *)(param_1 + 0x18) + iVar10);
                  iVar10 = iVar10 + 4;
                  *puVar11 = puVar11[1];
                  iVar13 = iVar13 + -1;
                } while (iVar13 != 0);
              }
              *(unsigned int **)(uVar18 * 4 + *(int *)(param_1 + 0x18)) = puVar2;
              fn_8296CF68(param_1);
              bVar4 = false;
            }
          }
        } while (uVar12 != 0);
      } while (!bVar4);
      uVar19 = 0;
      goto LAB_82971020;
    }
  }
  uVar19 = 1;
LAB_82971020:
  fn_82BA02A8(auStack_110);
  return uVar19;
}

