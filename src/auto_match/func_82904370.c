extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82902688();
extern int fn_82904070();
extern int fn_82904258();
extern int fn_82963318();
extern int fn_829636A8();
extern int fn_82963E70();
extern int fn_829640A0();
extern int fn_82964628();
extern int fn_829646C8();
extern int fn_82F68CC0();
extern unsigned int iStack_94;
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int lbl_82005710;
extern unsigned int uStack_a4;


/* WARNING: Type propagation algorithm not settling */

unsigned int fn_82904370(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,int *param_5,
                  int *param_6,unsigned __int64 param_7)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int uVar5;
  __int64 lVar4;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  __int64 lVar16;
  unsigned int *puVar17;
  unsigned int uVar18;
  unsigned int *puVar19;
  __int64 lVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  int aiStack_b0 [3];
  unsigned int uStack_a4;
  int iStack_a0;
  int iStack_9c;
  unsigned int *puStack_98;
  int iStack_94;
  
  if (((param_3 & 0xfff00000) == 0x20500000) && ((param_7 & 4) != 0)) {
    uVar10 = param_3 & 0xfffff;
    uVar11 = 0;
    if (uVar10 != 0) {
      piVar14 = param_5;
      do {
        if ((*piVar14 != *(int *)(((int)param_6 - (int)param_5) + (int)piVar14)) ||
           ((**(unsigned int **)(*(int *)(*(int *)(param_1 + 8) + 0x14) + *piVar14 * 4) & 1) == 0)) break;
        uVar11 = uVar11 + 1;
        piVar14 = piVar14 + 1;
      } while ((uVar11 & 0xffffffff) < uVar10);
    }
    if ((uVar11 & 0xffffffff) == uVar10) {
      param_3 = uVar10 | 0x10000000;
    }
  }
  if ((param_3 & 0xffffffff) == 0x50000001) {
    uVar10 = 0x20500000;
LAB_82904430:
    uVar5 = fn_82904370(param_1,param_2,uVar10 | 1,param_4,param_5,param_6,param_7);
    return (int)uVar5 >> 0x1f & uVar5;
  }
  if (((param_3 & 0xffffffff) == 0x50000002) &&
     ((*(unsigned int *)(*(int *)(param_1 + 8) + 0x6c) & 0x2000000) == 0)) {
    aiStack_b0[0] = -1;
    aiStack_b0[1] = 0xffffffff;
    uVar5 = fn_82904370(param_1,param_2,0x20500001,aiStack_b0,param_5,param_6,param_7 & 0x40);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar5 = fn_82904370(param_1,param_2,0x20500001,aiStack_b0 + 1,param_5 + 1,param_6 + 1,
                          param_7 & 0x40);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar10 = 0x20400000;
    param_6 = aiStack_b0 + 1;
    param_5 = aiStack_b0;
    goto LAB_82904430;
  }
  if (((*(unsigned int *)(*(int *)(param_1 + 8) + 0x6c) & 0x800000) == 0) ||
     ((((uVar10 = param_3 & 0xfff00000, uVar10 != 0x20000000 && (uVar10 != 0x20100000)) &&
       (uVar10 != 0x20200000)) && (uVar10 != 0x20300000)))) {
    uVar5 = fn_829646C8(*(int *)(param_1 + 8),param_3,0xffffffffffffffff);
    if (uVar5 < *(unsigned int *)(*(int *)(param_1 + 8) + 0xc)) {
      puVar19 = *(unsigned int **)(*(int *)(*(int *)(param_1 + 8) + 0x18) + uVar5 * 4);
    }
    else {
      puVar19 = (unsigned int *)0x0;
    }
    if (puVar19 == (unsigned int *)0x0) {
      return 0x8007000e;
    }
    if ((puVar19[3] == 0) && (puVar19[1] == 0)) {
      *puVar19 = 0;
      return 0;
    }
    uVar10 = fn_82963E70(puVar19,0,0);
    uVar11 = fn_82963318(puVar19,0,0);
    lVar4 = (uVar11 & 0x3fffffff) * 4;
    uVar18 = puVar19[1];
    fn_82F68CC0(puVar19[2],param_5,lVar4);
    fn_82F68CC0((unsigned __int64)puVar19[2] + lVar4,param_6,(uVar18 - uVar11 & 0x3fffffff) << 2);
    uVar18 = 0;
    if (puVar19[1] != 0) {
      iVar8 = 0;
      do {
        iVar9 = *(int *)(param_1 + 8);
        if (*(unsigned int *)(puVar19[2] + iVar8) < *(unsigned int *)(iVar9 + 8)) {
          puVar17 = *(unsigned int **)(*(unsigned int *)(puVar19[2] + iVar8) * 4 + *(int *)(iVar9 + 0x14));
        }
        else {
          puVar17 = (unsigned int *)0x0;
        }
        if (puVar17 != (unsigned int *)0x0) {
          if (((puVar17[1] == *(unsigned int *)(iVar9 + 0x88)) && ((*puVar17 & 0x80) != 0)) &&
             (*(int *)(param_1 + 0x68) == 0)) {
            puVar17[0x17] = puVar17[0x17] + 1;
            uVar6 = fn_82964628(*(unsigned __int64 *)(puVar17 + 8),*(int *)(param_1 + 8),
                                      *(unsigned int *)(*(int *)(param_1 + 8) + 0x78),0,0);
            *(unsigned int *)(puVar19[2] + iVar8) = uVar6;
            if (*(int *)(puVar19[2] + iVar8) == -1) {
              return 0x8007000e;
            }
            fn_829640A0(*(unsigned int *)
                          (*(int *)(*(int *)(param_1 + 8) + 0x14) + *(int *)(puVar19[2] + iVar8) * 4
                          ),puVar17);
            *(unsigned int *)(*(int *)(*(int *)(puVar19[2] + iVar8) * 4 +
                              *(int *)(*(int *)(param_1 + 8) + 0x14)) + 0x30) = puVar17[0xc];
          }
          else {
            puVar17[0x17] = puVar17[0x17] + 1;
          }
        }
        uVar18 = uVar18 + 1;
        iVar8 = iVar8 + 4;
      } while (uVar18 < puVar19[1]);
    }
    uVar18 = 0;
    if ((uVar10 & 0xffffffff) != 0) {
      iVar8 = 0;
      uVar22 = lbl_82005710;
      do {
        iVar9 = 0;
        if ((param_4 != 0) && (uVar7 = *(unsigned int *)(iVar8 + param_4), uVar7 != 0xffffffff)) {
          if (uVar7 < *(unsigned int *)(*(int *)(param_1 + 8) + 8)) {
            iVar9 = *(int *)(uVar7 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
          }
          else {
            iVar9 = 0;
          }
          if (iVar9 == 0) {
            fn_82904258(param_1,0,0,0xffffffff8202dad0);
            return 0x80004005;
          }
        }
        uVar7 = fn_82964628(uVar22,*(int *)(param_1 + 8),
                                  *(unsigned int *)(*(int *)(param_1 + 8) + 0x88),0,0);
        if (uVar7 == 0xffffffff) {
          return 0x8007000e;
        }
        if (uVar7 < *(unsigned int *)(*(int *)(param_1 + 8) + 8)) {
          puVar17 = *(unsigned int **)(*(int *)(*(int *)(param_1 + 8) + 0x14) + uVar7 * 4);
        }
        else {
          puVar17 = (unsigned int *)0x0;
        }
        if (puVar17 == (unsigned int *)0x0) {
          return 0x8007000e;
        }
        *puVar17 = (unsigned int)param_7;
        puVar17[0x12] = uVar5;
        puVar17[4] = uVar18;
        if ((param_7 & 0xe000000) == 0) {
          *puVar17 = *(unsigned int *)(param_1 + 100) | (unsigned int)param_7;
        }
        puVar17[5] = *(unsigned int *)(param_1 + 0x30);
        puVar17[6] = *(unsigned int *)(param_1 + 0x34);
        *(unsigned int *)(iVar8 + puVar19[4]) = uVar7;
        if (param_4 != 0) {
          *(unsigned int *)(iVar8 + param_4) = uVar7;
        }
        if (iVar9 != 0) {
          puVar17[0xc] = *(unsigned int *)(iVar9 + 0x30);
          puVar17[0x18] = *(unsigned int *)(iVar9 + 0x60);
          puVar17[0x19] = *(unsigned int *)(iVar9 + 100);
        }
        if ((puVar17[0xc] != 0xffffffff) &&
           (*(unsigned int *)(puVar17[0xc] * 4 + *(int *)(param_1 + 0x18)) =
                 *(unsigned int *)(iVar8 + puVar19[4]), puVar17[0x18] == 0)) {
          fn_82904258(param_1,0,0,0xffffffff8202daf8);
        }
        uVar18 = uVar18 + 1;
        iVar8 = iVar8 + 4;
      } while ((unsigned __int64)uVar18 < (uVar10 & 0xffffffff));
      if ((uVar10 & 0xffffffff) != 0) {
        iVar8 = 0;
        uVar11 = uVar10;
        do {
          fn_82902688(param_1,*(unsigned int *)(iVar8 + puVar19[4]),0);
          uVar11 = uVar11 - 1;
          iVar8 = iVar8 + 4;
        } while (uVar11 != 0);
      }
    }
    if (((*(unsigned int *)(param_1 + 0x14) & 4) == 0) && (iVar8 = fn_829636A8(puVar19), iVar8 == 0)) {
      uVar11 = 0;
      if ((uVar10 & 0xffffffff) != 0) {
        iVar8 = 0;
        do {
          if (((**(unsigned int **)(*(int *)(*(int *)(param_1 + 8) + 0x14) +
                           *(int *)(iVar8 + puVar19[4]) * 4) & 0x40) != 0) ||
             (iVar9 = fn_82904070(param_1,*(int *)(iVar8 + puVar19[4]),&iStack_a0), iVar9 < 0))
          break;
          uVar11 = uVar11 + 1;
          iVar8 = iVar8 + 4;
        } while ((uVar11 & 0xffffffff) < (uVar10 & 0xffffffff));
      }
      if ((uVar11 & 0xffffffff) == (uVar10 & 0xffffffff)) {
        uVar11 = 0;
        puVar19[1] = puVar19[3];
        *puVar19 = (unsigned int)uVar10 & 0xfffff | 0x10000000;
        if ((uVar10 & 0xffffffff) != 0) {
          iVar8 = 0;
          do {
            iVar9 = *(int *)(param_1 + 8);
            uVar6 = fn_82964628(*(unsigned __int64 *)
                                       (*(int *)(*(int *)(iVar8 + puVar19[4]) * 4 +
                                                *(int *)(iVar9 + 0x14)) + 0x20),iVar9,
                                      *(unsigned int *)(iVar9 + 0x78),0,0);
            *(unsigned int *)(puVar19[2] + iVar8) = uVar6;
            if (*(int *)(puVar19[2] + iVar8) == -1) {
              return 0x8007000e;
            }
            uVar11 = uVar11 + 1;
            iVar8 = iVar8 + 4;
          } while ((uVar11 & 0xffffffff) < (uVar10 & 0xffffffff));
        }
      }
    }
    uVar5 = *puVar19 & 0xfff00000;
    if (uVar5 < 0x20500001) {
      if (uVar5 != 0x20500000) {
        if (uVar5 == 0x10000000) {
          if ((uVar10 & 0xffffffff) != 0) {
            iVar8 = 0;
            do {
              piVar14 = (int *)(iVar8 + puVar19[4]);
              iVar9 = *(int *)(*(int *)(param_1 + 8) + 0x14);
              puVar3 = (unsigned int *)(puVar19[2] + iVar8);
              iVar8 = iVar8 + 4;
              puVar17 = *(unsigned int **)(*piVar14 * 4 + iVar9);
              puVar1 = *(unsigned int **)(*puVar3 * 4 + iVar9);
              puVar17[0xd] = *puVar3;
              *puVar17 = *puVar1 | *puVar17;
              *(unsigned __int64 *)(puVar17 + 8) = *(unsigned __int64 *)(puVar1 + 8);
              *(unsigned __int64 *)(puVar17 + 10) = *(unsigned __int64 *)(puVar1 + 10);
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          goto code_r0x82904ee8;
        }
        if (uVar5 == 0x10100000) {
          if ((uVar10 & 0xffffffff) != 0) {
            iVar8 = 0;
            do {
              piVar14 = (int *)(puVar19[2] + iVar8);
              iVar9 = *(int *)(*(int *)(param_1 + 8) + 0x14);
              piVar2 = (int *)(iVar8 + puVar19[4]);
              iVar8 = iVar8 + 4;
              puVar17 = *(unsigned int **)(*piVar2 * 4 + iVar9);
              *puVar17 = **(unsigned int **)(*piVar14 * 4 + iVar9) & 2 | *puVar17;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          goto code_r0x82904ee8;
        }
        if ((uVar5 != 0x20000000) && (uVar5 != 0x20100000)) {
          if ((uVar5 == 0x20400000) && (iVar8 = 0, (uVar10 & 0xffffffff) != 0)) {
            iVar9 = 0;
            do {
              iVar13 = iVar8 + puVar19[3];
              iVar8 = iVar8 + 1;
              piVar14 = (int *)(iVar9 + puVar19[2]);
              iVar15 = *(int *)(*(int *)(param_1 + 8) + 0x14);
              piVar2 = (int *)(iVar9 + puVar19[4]);
              iVar9 = iVar9 + 4;
              puVar17 = *(unsigned int **)(*piVar2 * 4 + iVar15);
              *puVar17 = **(unsigned int **)(*(int *)(iVar13 * 4 + puVar19[2]) * 4 + iVar15) &
                         **(unsigned int **)(*piVar14 * 4 + iVar15) & 2 | *puVar17;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          goto code_r0x82904ee8;
        }
      }
    }
    else if ((uVar5 != 0x20700000) && (uVar5 != 0x20800000)) {
      if (uVar5 == 0x30000000) {
        lVar4 = 0;
        if ((uVar10 & 0xffffffff) != 0) {
          iVar8 = 0;
          do {
            iVar9 = *(int *)(*(int *)(param_1 + 8) + 0x14);
            puVar17 = *(unsigned int **)(*(int *)(iVar8 + puVar19[4]) * 4 + iVar9);
            uVar5 = **(unsigned int **)(*(int *)((int)((((unsigned __int64)puVar19[3] & 0x7fffffff) * 2 + lVar4 &
                                               0xffffffff) << 2) + puVar19[2]) * 4 + iVar9) &
                    **(unsigned int **)(*(int *)((int)(((unsigned __int64)puVar19[3] + lVar4 & 0xffffffff) << 2) +
                                        puVar19[2]) * 4 + iVar9);
            if ((uVar5 & 1) == 0) {
              if ((uVar5 & 2) != 0) {
                uVar5 = *puVar17 | 2;
                goto code_r0x82904e40;
              }
            }
            else {
              uVar5 = *puVar17 | 0x17;
code_r0x82904e40:
              *puVar17 = uVar5;
            }
            lVar4 = lVar4 + 1;
            iVar8 = iVar8 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      else if (uVar5 == 0x50000000) {
        uVar5 = *puVar19 & 0xfffff;
        uVar18 = 0;
        puVar17 = *(unsigned int **)(*(int *)puVar19[4] * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
        if (uVar5 != 0) {
          iVar15 = 0;
          iVar9 = uVar5 << 2;
          iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x14);
          do {
            if ((**(unsigned int **)(*(int *)(iVar9 + puVar19[2]) * 4 + iVar8) &
                 **(unsigned int **)(*(int *)(iVar15 + puVar19[2]) * 4 + iVar8) & 2) == 0) break;
            uVar18 = uVar18 + 1;
            iVar15 = iVar15 + 4;
            iVar9 = iVar9 + 4;
          } while (uVar18 < uVar5);
        }
        if (uVar18 == uVar5) {
          *puVar17 = *puVar17 | 2;
        }
      }
      goto code_r0x82904ee8;
    }
    iVar8 = 0;
    if ((uVar10 & 0xffffffff) != 0) {
      iVar9 = 0;
      do {
        iVar15 = *(int *)(*(int *)(param_1 + 8) + 0x14);
        puVar17 = *(unsigned int **)(*(int *)(iVar9 + puVar19[4]) * 4 + iVar15);
        uVar5 = **(unsigned int **)(*(int *)((iVar8 + puVar19[3]) * 4 + puVar19[2]) * 4 + iVar15) &
                **(unsigned int **)(*(int *)(iVar9 + puVar19[2]) * 4 + iVar15);
        if ((uVar5 & 1) == 0) {
          if ((uVar5 & 2) != 0) {
            uVar5 = *puVar17 | 2;
            goto code_r0x82904ed8;
          }
        }
        else {
          uVar5 = *puVar17 | 0x17;
code_r0x82904ed8:
          *puVar17 = uVar5;
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
code_r0x82904ee8:
    puVar19[0xf] = (unsigned int)param_2;
    puVar19[0xe] = *(unsigned int *)(param_1 + 0x38);
    return 0;
  }
  uVar11 = param_3 & 0xfffff;
  lVar4 = fn_8265C940((param_3 & 0xfffff) << 4,0x24810000);
  if (lVar4 == 0) {
    return 0x8007000e;
  }
  puVar12 = &uStack_a4;
  lVar20 = 4;
  lVar16 = lVar4;
  do {
    puVar12 = puVar12 + 1;
    *puVar12 = (int)lVar16;
    lVar16 = (param_3 & 0xfffff) * 4 + lVar16;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  if (uVar11 != 0) {
    iVar9 = (int)param_6 - (int)puStack_98;
    iVar8 = (int)param_5 - (int)puStack_98;
    iStack_94 = iStack_94 - (int)puStack_98;
    uVar21 = uVar11;
    do {
      if (uVar10 == 0x20000000) {
        *puStack_98 = *(unsigned int *)(iVar9 + (int)puStack_98);
        uVar6 = *(unsigned int *)(iVar8 + (int)puStack_98);
LAB_829045f8:
        *(unsigned int *)(iStack_94 + (int)puStack_98) = uVar6;
      }
      else {
        if (uVar10 == 0x20100000) {
          *puStack_98 = *(unsigned int *)(iVar8 + (int)puStack_98);
          uVar6 = *(unsigned int *)(iVar9 + (int)puStack_98);
          goto LAB_829045f8;
        }
        if (uVar10 == 0x20200000) {
          *puStack_98 = *(unsigned int *)(param_1 + 0x24);
          uVar6 = *(unsigned int *)(param_1 + 0x20);
          goto LAB_829045f8;
        }
        if (uVar10 == 0x20300000) {
          *puStack_98 = *(unsigned int *)(param_1 + 0x20);
          uVar6 = *(unsigned int *)(param_1 + 0x24);
          goto LAB_829045f8;
        }
      }
      puStack_98 = puStack_98 + 1;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  if (uVar11 != 0) {
    puVar12 = (unsigned int *)(iStack_a0 + -4);
    for (uVar10 = uVar11; uVar10 != 0; uVar10 = uVar10 - 1) {
      puVar12 = puVar12 + 1;
      *puVar12 = 0xffffffff;
    }
  }
  if (uVar11 != 0) {
    puVar12 = (unsigned int *)(iStack_9c + -4);
    for (uVar10 = uVar11; uVar10 != 0; uVar10 = uVar10 - 1) {
      puVar12 = puVar12 + 1;
      *puVar12 = 0xffffffff;
    }
  }
  uVar5 = fn_82904370(param_1,param_2,uVar11 | 0x10100000,iStack_a0,param_6,0,param_7 & 0x40);
  if ((-1 < (int)uVar5) &&
     (uVar5 = fn_82904370(param_1,param_2,uVar11 | 0x20400000,iStack_9c,param_5,iStack_a0,
                            param_7 & 0x40), -1 < (int)uVar5)) {
    uVar5 = fn_82904370(param_1,param_2,uVar11 | 0x30000000,param_4,iStack_9c,
                          (param_3 & 0xfffff) * 8 + lVar4,param_7);
    uVar18 = 0;
    if (-1 < (int)uVar5) goto LAB_829046e0;
  }
  uVar18 = uVar5;
LAB_829046e0:
  fn_8265C990(lVar4,0x24810000);
  return uVar18;
}

