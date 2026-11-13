extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963FA8();
extern int fn_829644B8();
extern int fn_82964628();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_82005710;


__int64 fn_8294C180(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar8;
  __int64 lVar6;
  int iVar9;
  int iVar10;
  __int64 lVar7;
  int *piVar12;
  unsigned __int64 uVar11;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  int *piVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  int *piVar18;
  unsigned __int64 uVar19;
  __int64 lVar20;
  __int64 lVar21;
  unsigned __int64 uVar22;
  int iVar23;
  unsigned __int64 uVar24;
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  unsigned int auStack_b0 [4];
  unsigned int auStack_a0 [40];
  
  puVar1 = *(unsigned int **)(param_1 + 0x104);
  uVar2 = *puVar1;
  uVar11 = (unsigned __int64)uVar2 & 0xfffff;
  if ((((uVar2 & 0xfffff) != 0) && (puVar1[1] != 0)) && (puVar1[3] != 0)) {
    uVar19 = puVar1[1] / uVar11;
    trapWord(6,uVar11,0);
    uVar22 = 0;
    iVar10 = 0;
    uVar14 = 0;
    if ((int)uVar19 != 0) {
      uVar13 = (unsigned __int64)puVar1[2];
      piVar12 = aiStack_d0;
      iVar23 = *(int *)(param_1 + 0x14);
      piVar18 = aiStack_d0;
      lVar7 = ((unsigned __int64)uVar2 & 0xfffff) * 4;
      do {
        iVar8 = *(int *)(*(int *)(*(int *)uVar13 * 4 + iVar23) + 8);
        if ((iVar8 != -1) &&
           ((*(unsigned int *)(*(int *)(*(int *)(*(int *)(iVar8 * 4 + iVar23) + 4) * 4 +
                               *(int *)(param_1 + 0x10)) + 4) & 4) == 0)) {
          *piVar18 = iVar8;
          uVar16 = 0;
          if ((uVar14 & 0xffffffff) != 0) {
            piVar15 = aiStack_d0;
            do {
              if (*piVar15 == *piVar12) break;
              uVar16 = uVar16 + 1;
              piVar15 = piVar15 + 1;
            } while ((uVar16 & 0xffffffff) < (uVar14 & 0xffffffff));
          }
          if ((uVar16 & 0xffffffff) == (uVar14 & 0xffffffff)) {
            iVar10 = iVar10 + 1;
          }
          uVar22 = uVar22 + 1;
          piVar18 = piVar18 + 1;
        }
        uVar14 = uVar14 + 1;
        uVar13 = lVar7 + uVar13;
        piVar12 = piVar12 + 1;
      } while ((uVar14 & 0xffffffff) < uVar19);
      if ((uVar22 & 0xffffffff) != 0) {
        uVar14 = 0;
        uVar24 = lbl_82005710;
        if ((uVar22 & 0xffffffff) != 0) {
          iVar23 = 0;
          do {
            uVar17 = 0;
            if ((uVar14 & 0xffffffff) == 0) {
LAB_8294c2f4:
              uVar13 = 3;
              if (iVar10 != 1) {
                uVar13 = uVar14;
              }
              iVar8 = fn_82964628(uVar24,param_1,*(unsigned int *)(param_1 + 0x8c),0,uVar13);
              *(int *)((int)aiStack_c0 + iVar23) = iVar8;
              if (iVar8 == -1) {
                return -0x7ff8fff2;
              }
              iVar8 = *(int *)(iVar8 * 4 + *(int *)(param_1 + 0x14));
              *(unsigned int *)(iVar8 + 0x14) =
                   *(unsigned int *)
                    (*(int *)(**(int **)(*(int *)(param_1 + 0x104) + 0x10) * 4 +
                             *(int *)(param_1 + 0x14)) + 0x14);
              *(unsigned int *)(iVar8 + 0x18) =
                   *(unsigned int *)
                    (*(int *)(**(int **)(*(int *)(param_1 + 0x104) + 0x10) * 4 +
                             *(int *)(param_1 + 0x14)) + 0x18);
            }
            else {
              piVar18 = aiStack_d0;
              do {
                if (*piVar18 == *(int *)((int)aiStack_d0 + iVar23)) {
                  *(int *)((int)aiStack_c0 + iVar23) = aiStack_c0[uVar17];
                  break;
                }
                uVar17 = uVar17 + 1;
                piVar18 = piVar18 + 1;
              } while ((unsigned __int64)uVar17 < (uVar14 & 0xffffffff));
              if ((uVar14 & 0xffffffff) <= (unsigned __int64)uVar17) goto LAB_8294c2f4;
            }
            uVar14 = uVar14 + 1;
            iVar23 = iVar23 + 4;
          } while ((uVar14 & 0xffffffff) < (uVar22 & 0xffffffff));
        }
        uVar14 = 0;
        uVar22 = 0;
        lVar21 = 0;
        piVar18 = aiStack_c0;
        lVar20 = 0;
        do {
          iVar10 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + (int)lVar20)
                                     * 4 + *(int *)(param_1 + 0x14)) + 8);
          if ((iVar10 != -1) &&
             ((*(unsigned int *)(*(int *)(*(int *)(*(int *)(iVar10 * 4 + *(int *)(param_1 + 0x14)) + 4) * 4
                                 + *(int *)(param_1 + 0x10)) + 4) & 4) == 0)) {
            uVar13 = 0;
            if ((uVar2 & 0xfffff) != 0) {
              do {
                iVar23 = (int)((lVar21 + uVar13 & 0xffffffff) << 2);
                iVar10 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar23) * 4 +
                                 *(int *)(param_1 + 0x14));
                iVar8 = fn_82964628(uVar24,param_1,0,0,0);
                if (iVar8 == -1) {
                  return -0x7ff8fff2;
                }
                iVar3 = *(int *)(iVar8 * 4 + *(int *)(param_1 + 0x14));
                lVar6 = fn_82963FA8(iVar3,iVar10);
                if ((int)lVar6 < 0) {
                  return lVar6;
                }
                if (*(int *)(iVar3 + 0x38) != -1) {
                  iVar9 = fn_82964628(uVar24,param_1,0,0,0);
                  if (iVar9 == -1) {
                    return -0x7ff8fff2;
                  }
                  iVar4 = *(int *)(iVar9 * 4 + *(int *)(param_1 + 0x14));
                  fn_82963FA8(iVar4,*(unsigned int *)
                                      (*(int *)(iVar10 + 0x38) * 4 + *(int *)(param_1 + 0x14)));
                  iVar10 = *piVar18;
                  *(int *)(iVar3 + 0x38) = iVar9;
                  *(int *)(iVar4 + 8) = iVar10;
                }
                uVar13 = uVar13 + 1;
                *(int *)(iVar3 + 8) = *piVar18;
                *(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar23) = iVar8;
              } while ((uVar13 & 0xffffffff) < uVar11);
            }
            uVar14 = uVar14 + 1;
            piVar18 = piVar18 + 1;
          }
          uVar22 = uVar22 + 1;
          lVar21 = lVar21 + uVar11;
          lVar20 = lVar20 + lVar7;
        } while ((uVar22 & 0xffffffff) < uVar19);
        iVar10 = fn_82963998(0x74);
        if (iVar10 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = fn_829632A0();
        }
        if (iVar10 == 0) {
          return -0x7ff8fff2;
        }
        uVar11 = 0;
        uVar19 = 0;
        if ((uVar14 & 0xffffffff) != 0) {
          iVar8 = 0;
          iVar23 = 0;
          do {
            uVar22 = 0;
            if ((uVar19 & 0xffffffff) != 0) {
              piVar18 = aiStack_d0;
              do {
                if (*piVar18 == *(int *)((int)aiStack_d0 + iVar8)) break;
                uVar22 = uVar22 + 1;
                piVar18 = piVar18 + 1;
              } while ((uVar22 & 0xffffffff) < (uVar19 & 0xffffffff));
            }
            if ((uVar22 & 0xffffffff) == (uVar19 & 0xffffffff)) {
              uVar11 = uVar11 + 1;
              uVar5 = *(unsigned int *)((int)aiStack_d0 + iVar8);
              *(unsigned int *)((int)auStack_b0 + iVar23) = *(unsigned int *)((int)aiStack_c0 + iVar8);
              *(unsigned int *)((int)auStack_a0 + iVar23) = uVar5;
              iVar23 = iVar23 + 4;
            }
            uVar19 = uVar19 + 1;
            iVar8 = iVar8 + 4;
          } while ((uVar19 & 0xffffffff) < (uVar14 & 0xffffffff));
        }
        lVar7 = fn_82963A30(iVar10,uVar11 & 0xffffffff000fffff | 0x10000000,uVar11,uVar11,0);
        if ((-1 < lVar7) &&
           (lVar7 = fn_829632F0(iVar10,*(unsigned int *)(param_1 + 0x104)), -1 < lVar7)) {
          lVar7 = (uVar14 & 0x3fffffff) << 2;
          fn_82F68CC0(*(unsigned int *)(iVar10 + 0x10),auStack_b0,lVar7);
          fn_82F68CC0(*(unsigned int *)(iVar10 + 8),auStack_a0,lVar7);
          lVar7 = fn_829644B8(param_1,iVar10);
          if (-1 < lVar7) {
            return 0;
          }
        }
        fn_82BA02A8(iVar10);
        fn_829639F0(iVar10);
        return lVar7;
      }
    }
  }
  return 1;
}

