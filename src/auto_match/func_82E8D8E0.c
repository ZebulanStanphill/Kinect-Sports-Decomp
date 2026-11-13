extern unsigned int *auStack_a0;


void fn_82E8D8E0(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  int iVar11;
  __int64 lVar10;
  __int64 lVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned int uVar15;
  int iVar17;
  __int64 lVar16;
  unsigned __int64 uVar18;
  unsigned int auStack_a0 [40];
  
  iVar11 = *(int *)(param_1 + 0x1e54);
  auStack_a0[1] = 0;
  auStack_a0[0] = 1000;
  auStack_a0[2] = 0;
  if (*(int *)(param_1 + 0x6d8c) == 2) {
    puVar1 = *(unsigned int **)(*(int *)(param_1 + 0x7b40) + 0x18);
    if ((int)(auStack_a0[*(unsigned char *)*puVar1] + *(int *)puVar1[3]) < 0) {
      *(unsigned int *)(iVar11 + 0x94) = 0;
    }
    else {
      *(unsigned int *)(iVar11 + 0x94) = 1;
    }
  }
  else {
    *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
  }
  iVar11 = iVar11 + 0x114;
  uVar15 = 1;
  if (1 < *(int *)(param_1 + 0x2d0) - 1U) {
    iVar17 = 4;
    do {
      if (*(int *)(param_1 + 0x6d8c) == 2) {
        piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
        if ((int)(auStack_a0[*(unsigned char *)(*piVar2 + uVar15)] + *(int *)(piVar2[3] + iVar17)) < 0) {
          piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
          if (((int)(auStack_a0[*(unsigned char *)(*piVar2 + uVar15 + -1)] +
                    *(int *)(piVar2[3] + iVar17 + -4)) < 0) ||
             (piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18),
             (int)(auStack_a0[*(unsigned char *)(*piVar2 + uVar15 + 1)] + *(int *)(piVar2[3] + iVar17 + 4)) <
             0)) {
            *(unsigned int *)(iVar11 + 0x94) = 0;
          }
          else {
            *(unsigned int *)(iVar11 + 0x94) = 1;
          }
        }
        else {
          *(unsigned int *)(iVar11 + 0x94) = 1;
        }
      }
      else {
        *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
      }
      uVar15 = uVar15 + 1;
      iVar11 = iVar11 + 0x114;
      iVar17 = iVar17 + 4;
    } while (uVar15 < *(int *)(param_1 + 0x2d0) - 1U);
  }
  if (*(int *)(param_1 + 0x6d8c) == 2) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
    if ((int)(*(int *)(*(int *)(param_1 + 0x2d0) * 4 + piVar2[3] + -4) +
             auStack_a0[*(unsigned char *)(*(int *)(param_1 + 0x2d0) + *piVar2 + -1)]) < 0) {
      *(unsigned int *)(iVar11 + 0x94) = 0;
    }
    else {
      *(unsigned int *)(iVar11 + 0x94) = 1;
    }
  }
  else {
    *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
  }
  iVar11 = iVar11 + 0x114;
  uVar15 = 1;
  if (1 < *(int *)(param_1 + 0x2d4) - 1U) {
    do {
      if (*(int *)(param_1 + 0x6d8c) == 2) {
        iVar17 = uVar15 * *(int *)(param_1 + 0x2d0);
        piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
        if ((int)(*(int *)(iVar17 * 4 + piVar2[3]) + auStack_a0[*(unsigned char *)(iVar17 + *piVar2)]) < 0) {
          *(unsigned int *)(iVar11 + 0x94) = 0;
        }
        else {
          *(unsigned int *)(iVar11 + 0x94) = 1;
        }
      }
      else {
        *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
      }
      iVar11 = iVar11 + 0x114;
      uVar18 = 1;
      if (1 < *(int *)(param_1 + 0x2d0) - 1U) {
        do {
          if (*(int *)(param_1 + 0x6d8c) == 2) {
            iVar17 = (int)uVar18;
            if ((*(int *)(param_1 + 0x6d54) == 0) || (*(int *)(param_1 + 0x7b38) == 0)) {
              lVar16 = (__int64)(int)uVar15 * (__int64)*(int *)(param_1 + 0x2d0);
              piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
              if ((int)(*(int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) + piVar2[3]) +
                       auStack_a0[*(unsigned char *)(*piVar2 + (int)lVar16 + iVar17)]) < 0) {
                iVar7 = *(int *)(param_1 + 0x7b40);
                iVar8 = *(int *)(param_1 + 0x2d0);
                piVar2 = *(int **)(iVar7 + 0x18);
                lVar9 = (__int64)(int)(uVar15 - 1) * (__int64)iVar8;
                lVar16 = (__int64)(int)(uVar15 + 1) * (__int64)iVar8;
                if (1 < ((int)((~((unsigned __int64)
                                  *(unsigned int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) +
                                           (*(int **)(iVar7 + 0x18))[3]) +
                                  (unsigned __int64)
                                  auStack_a0
                                  [*(unsigned char *)((int)lVar16 + iVar17 + **(int **)(iVar7 + 0x18))] ^
                                 0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                        ((int)((~((unsigned __int64)
                                  *(unsigned int *)((int)(((__int64)(int)uVar15 * (__int64)iVar8 + uVar18
                                                  & 0xffffffff) << 2) + piVar2[3] + 4) +
                                  (unsigned __int64)
                                  auStack_a0
                                  [*(unsigned char *)(*piVar2 + (int)((__int64)(int)uVar15 * (__int64)iVar8
                                                            ) + iVar17 + 1)] ^ 0xffffffffffffffff) &
                               0xffffffff) >> 0x1f) + 1U & 1) +
                        ((int)((~((unsigned __int64)
                                  *(unsigned int *)((int)((lVar9 + uVar18 & 0xffffffff) << 2) + piVar2[3]) +
                                  (unsigned __int64)auStack_a0[*(unsigned char *)(*piVar2 + (int)lVar9 + iVar17)] ^
                                 0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                        ((int)((~((unsigned __int64)
                                  *(unsigned int *)((int)(((__int64)(int)uVar15 * (__int64)iVar8 + uVar18
                                                  & 0xffffffff) << 2) + (*(int **)(iVar7 + 0x18))[3]
                                           + -4) +
                                  (unsigned __int64)
                                  auStack_a0
                                  [*(unsigned char *)((int)((__int64)(int)uVar15 * (__int64)iVar8) + iVar17
                                             + **(int **)(iVar7 + 0x18) + -1)] ^ 0xffffffffffffffff)
                               & 0xffffffff) >> 0x1f) + 1U & 1)) goto LAB_82e8e0b8;
LAB_82e8e0c0:
                *(unsigned int *)(iVar11 + 0x94) = 0;
              }
              else {
                *(unsigned int *)(iVar11 + 0x94) = 1;
              }
            }
            else {
              piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
              lVar16 = ((__int64)(int)uVar15 * (__int64)*(int *)(param_1 + 0x2d0) & 0x7fffffffU) *
                       2;
              if ((int)(*(int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) + piVar2[3]) +
                       auStack_a0[*(unsigned char *)((int)lVar16 + *piVar2 + iVar17)]) < 0) {
                iVar7 = uVar15 * 2;
                iVar8 = iVar7 + 1;
                lVar16 = (__int64)iVar8 * (__int64)*(int *)(param_1 + 0x2d0);
                piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
                if ((int)(*(int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) + piVar2[3]) +
                         auStack_a0[*(unsigned char *)((int)lVar16 + *piVar2 + iVar17)]) < 0) {
                  iVar3 = *(int *)(param_1 + 0x7b40);
                  iVar4 = *(int *)(param_1 + 0x2d0);
                  lVar12 = ((__int64)(int)uVar15 * (__int64)iVar4 & 0x7fffffffU) * 2;
                  lVar10 = (__int64)(iVar7 + -1) * (__int64)iVar4;
                  lVar16 = (__int64)(iVar7 + -2) * (__int64)iVar4;
                  iVar5 = *(int *)(param_1 + 0x7b40);
                  iVar6 = *(int *)(param_1 + 0x2d0);
                  lVar13 = ((__int64)(int)uVar15 * (__int64)iVar4 & 0x7fffffffU) * 2;
                  lVar9 = (__int64)(iVar7 + 2) * (__int64)iVar6;
                  piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
                  lVar14 = (__int64)(iVar7 + 3) * (__int64)iVar6;
                  if (((int)((~((unsigned __int64)
                                *(unsigned int *)((int)((lVar14 + uVar18 & 0xffffffff) << 2) + piVar2[3]) +
                                (unsigned __int64)auStack_a0[*(unsigned char *)((int)lVar14 + iVar17 + *piVar2)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((unsigned __int64)
                                *(unsigned int *)((int)((lVar9 + uVar18 & 0xffffffff) << 2) +
                                         (*(int **)(iVar5 + 0x18))[3]) +
                                (unsigned __int64)
                                auStack_a0
                                [*(unsigned char *)(**(int **)(iVar5 + 0x18) + (int)lVar9 + iVar17)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((unsigned __int64)
                                *(unsigned int *)((int)(((__int64)iVar8 * (__int64)iVar6 + uVar18 &
                                                0xffffffff) << 2) + (*(int **)(iVar5 + 0x18))[3] + 4
                                         ) +
                                (unsigned __int64)
                                auStack_a0
                                [*(unsigned char *)(**(int **)(iVar5 + 0x18) +
                                           (int)((__int64)iVar8 * (__int64)iVar6) + iVar17 + 1)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((unsigned __int64)
                                *(unsigned int *)((int)((lVar13 + uVar18 & 0xffffffff) << 2) +
                                          (*(int **)(iVar5 + 0x18))[3] + 4) +
                                (unsigned __int64)
                                auStack_a0
                                [*(unsigned char *)((int)lVar13 + **(int **)(iVar5 + 0x18) + iVar17 + 1)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((unsigned __int64)
                                *(unsigned int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) +
                                         (*(int **)(iVar3 + 0x18))[3]) +
                                (unsigned __int64)
                                auStack_a0
                                [*(unsigned char *)((int)lVar16 + **(int **)(iVar3 + 0x18) + iVar17)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((unsigned __int64)
                                *(unsigned int *)((int)((lVar10 + uVar18 & 0xffffffff) << 2) +
                                         (*(int **)(iVar3 + 0x18))[3]) +
                                (unsigned __int64)
                                auStack_a0
                                [*(unsigned char *)((int)lVar10 + **(int **)(iVar3 + 0x18) + iVar17)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((unsigned __int64)
                                *(unsigned int *)((int)(((__int64)iVar8 * (__int64)iVar4 + uVar18 &
                                                0xffffffff) << 2) + (*(int **)(iVar3 + 0x18))[3] +
                                         -4) +
                                (unsigned __int64)
                                auStack_a0
                                [*(unsigned char *)((int)((__int64)iVar8 * (__int64)iVar4) +
                                           **(int **)(iVar3 + 0x18) + iVar17 + -1)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) +
                      ((int)((~((unsigned __int64)
                                *(unsigned int *)((int)((lVar12 + uVar18 & 0xffffffff) << 2) +
                                          (*(int **)(iVar3 + 0x18))[3] + -4) +
                                (unsigned __int64)
                                auStack_a0
                                [*(unsigned char *)((int)lVar12 + iVar17 + **(int **)(iVar3 + 0x18) + -1)] ^
                               0xffffffffffffffff) & 0xffffffff) >> 0x1f) + 1U & 1) < 4)
                  goto LAB_82e8e0c0;
                  *(unsigned int *)(iVar11 + 0x94) = 1;
                  goto LAB_82e8e0cc;
                }
              }
LAB_82e8e0b8:
              *(unsigned int *)(iVar11 + 0x94) = 1;
            }
          }
          else {
            *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
          }
LAB_82e8e0cc:
          uVar18 = uVar18 + 1;
          iVar11 = iVar11 + 0x114;
        } while ((uVar18 & 0xffffffff) < (unsigned __int64)(*(int *)(param_1 + 0x2d0) - 1));
      }
      if (*(int *)(param_1 + 0x6d8c) == 2) {
        piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
        if ((int)(*(int *)((uVar15 + 1) * *(int *)(param_1 + 0x2d0) * 4 + piVar2[3] + -4) +
                 auStack_a0[*(unsigned char *)((uVar15 + 1) * *(int *)(param_1 + 0x2d0) + *piVar2 + -1)]) < 0
           ) {
          *(unsigned int *)(iVar11 + 0x94) = 0;
        }
        else {
          *(unsigned int *)(iVar11 + 0x94) = 1;
        }
      }
      else {
        *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
      }
      uVar15 = uVar15 + 1;
      iVar11 = iVar11 + 0x114;
    } while (uVar15 < *(int *)(param_1 + 0x2d4) - 1U);
  }
  if (*(int *)(param_1 + 0x6d8c) == 2) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
    iVar17 = (*(int *)(param_1 + 0x2d4) + -1) * *(int *)(param_1 + 0x2d0);
    if ((int)(*(int *)(piVar2[3] + iVar17 * 4) + auStack_a0[*(unsigned char *)(iVar17 + *piVar2)]) < 0) {
      *(unsigned int *)(iVar11 + 0x94) = 0;
    }
    else {
      *(unsigned int *)(iVar11 + 0x94) = 1;
    }
  }
  else {
    *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
  }
  iVar11 = iVar11 + 0x114;
  uVar18 = 1;
  if (1 < *(int *)(param_1 + 0x2d0) - 1U) {
    do {
      if (*(int *)(param_1 + 0x6d8c) == 2) {
        piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
        lVar16 = (__int64)(*(int *)(param_1 + 0x2d4) + -1) * (__int64)*(int *)(param_1 + 0x2d0);
        iVar17 = (int)uVar18;
        if ((int)(*(int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) + piVar2[3]) +
                 auStack_a0[*(unsigned char *)(*piVar2 + (int)lVar16 + iVar17)]) < 0) {
          piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
          lVar16 = (__int64)(*(int *)(param_1 + 0x2d4) + -1) * (__int64)*(int *)(param_1 + 0x2d0);
          if (((int)(*(int *)((int)((lVar16 + uVar18 & 0xffffffff) << 2) + piVar2[3] + -4) +
                    auStack_a0[*(unsigned char *)(*piVar2 + (int)lVar16 + iVar17 + -1)]) < 0) ||
             (piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18),
             lVar16 = (__int64)(*(int *)(param_1 + 0x2d4) + -1) *
                      (__int64)*(int *)(param_1 + 0x2d0),
             (int)(*(int *)((int)((lVar16 + uVar18 + 1 & 0xffffffff) << 2) + piVar2[3]) +
                  auStack_a0[*(unsigned char *)((int)lVar16 + *piVar2 + iVar17 + 1)]) < 0)) {
            *(unsigned int *)(iVar11 + 0x94) = 0;
          }
          else {
            *(unsigned int *)(iVar11 + 0x94) = 1;
          }
        }
        else {
          *(unsigned int *)(iVar11 + 0x94) = 1;
        }
      }
      else {
        *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
      }
      uVar18 = uVar18 + 1;
      iVar11 = iVar11 + 0x114;
    } while ((uVar18 & 0xffffffff) < (unsigned __int64)(*(int *)(param_1 + 0x2d0) - 1));
  }
  if (*(int *)(param_1 + 0x6d8c) == 2) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x7b40) + 0x18);
    if ((int)(*(int *)(*(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x2d4) * 4 + piVar2[3] + -4) +
             auStack_a0
             [*(unsigned char *)(*(int *)(param_1 + 0x2d0) * *(int *)(param_1 + 0x2d4) + *piVar2 + -1)]) < 0)
    {
      *(unsigned int *)(iVar11 + 0x94) = 0;
    }
    else {
      *(unsigned int *)(iVar11 + 0x94) = 1;
    }
  }
  else {
    *(int *)(iVar11 + 0x94) = *(int *)(param_1 + 0x6d8c);
  }
  return;
}

