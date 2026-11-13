#define true 1
extern unsigned int *auStack_100;
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963A30();
extern int fn_829699A0();
extern int fn_82BA02A8();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


unsigned __int64 fn_8296ADB0(int param_1,unsigned int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  unsigned int uVar16;
  int iVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  int iVar20;
  unsigned char auStack_100 [8];
  unsigned int *puStack_f8;
  int *piStack_f0;
  
  iVar1 = *(int *)(param_1 + 0x14);
  puVar6 = *(unsigned int **)(param_3 * 4 + iVar1);
  uVar2 = *(unsigned int *)(*(int *)(param_4 * 4 + iVar1) + 0x30);
  uVar3 = *(unsigned int *)(*(int *)(param_5 * 4 + iVar1) + 0x30);
  uVar4 = *(unsigned int *)(*(int *)(param_6 * 4 + iVar1) + 0x30);
  uVar18 = *puVar6;
  uVar16 = uVar18 & 0x40;
  puVar7 = *(unsigned int **)(uVar2 * 4 + iVar1);
  puVar8 = *(unsigned int **)(uVar3 * 4 + iVar1);
  puVar9 = *(unsigned int **)(uVar4 * 4 + iVar1);
  uVar19 = *(unsigned int *)(*(int *)(puVar6[1] * 4 + *(int *)(param_1 + 0x10)) + 4);
  if ((uVar19 & 1) == 0) {
    return 0;
  }
  if ((uVar19 & 0x1000) != 0) {
    return 0;
  }
  if (((uVar18 & 0xe000000) == 0) && ((*param_2 & 0xfff00000) == 0x30000000)) {
    uVar19 = *puVar9 | *puVar8;
    if ((uVar19 & 0x8000000) == 0) {
      if ((uVar19 & 0x4000000) != 0) {
        uVar18 = uVar18 | 0x4000000;
        goto LAB_8296ae90;
      }
      if ((uVar19 & 0x2000000) != 0) {
        uVar18 = uVar18 | 0x2000000;
        goto LAB_8296ae90;
      }
    }
    else {
      uVar18 = uVar18 | 0x8000000;
LAB_8296ae90:
      *puVar6 = uVar18;
    }
    *puVar6 = *puVar9 & *puVar8 & 0x1f | *puVar6;
  }
  if ((((*puVar9 | *puVar8) & 0x40) != 0) && ((*param_2 & 0xfff00000) == 0x30000000)) {
    uVar16 = 0x40;
    *puVar6 = *puVar6 | 0x40;
  }
  if ((*param_2 & 0xfff00000) == 0x30000000) {
    if ((*puVar7 & 0x40) != 0) {
      uVar16 = 0x40;
    }
    *puVar6 = *puVar9 & *puVar8 & 0x1f | *puVar6;
    if ((uVar2 == uVar3) && ((*puVar9 & 4) != 0)) {
      *puVar6 = *puVar6 | 4;
    }
    if ((uVar2 == uVar4) && ((*puVar8 & 8) != 0)) {
      *puVar6 = *puVar6 | 8;
    }
  }
  if ((*param_2 & 0xfff00000) != 0x30000000) {
    return 0;
  }
  if ((uVar16 != 0) || ((*puVar7 & 4) == 0)) {
    iVar1 = *(int *)(param_1 + 0x10);
    uVar18 = *(unsigned int *)(*(int *)(puVar7[1] * 4 + iVar1) + 4);
    if (((uVar18 & 0x100) != 0) && (puVar7[2] == 0xffffffff)) {
      uVar19 = uVar3;
      if (*(double *)(puVar7 + 8) < lbl_82005710) {
        uVar19 = uVar4;
      }
LAB_8296afd8:
      puVar6[0xc] = uVar19;
      return 0;
    }
    if (uVar3 != uVar4) {
      uVar5 = *(unsigned int *)(*(int *)(puVar8[1] * 4 + iVar1) + 4);
      if (((((uVar5 & 0x100) == 0) || (puVar8[2] != 0xffffffff)) ||
          ((*(unsigned int *)(*(int *)(puVar9[1] * 4 + iVar1) + 4) & 0x100) == 0)) ||
         ((puVar9[2] != 0xffffffff || (*(double *)(puVar8 + 8) != *(double *)(puVar9 + 8))))) {
        if (uVar16 != 0) {
          return 0;
        }
        if (puVar7[2] != 0xffffffff) {
          return 0;
        }
        if (((((uVar18 & 2) != 0) &&
             (puVar10 = *(unsigned int **)(puVar7[0x12] * 4 + *(int *)(param_1 + 0x18)),
             (*puVar10 & 0xfff00000) == 0x10100000)) &&
            (((uVar5 & 0x100) != 0 &&
             (((puVar8[2] == 0xffffffff && (*(double *)(puVar8 + 8) == lbl_82005710)) &&
              ((*(unsigned int *)(*(int *)(puVar9[1] * 4 + iVar1) + 4) & 0x100) != 0)))))) &&
           ((puVar9[2] == 0xffffffff && (*(double *)(puVar9 + 8) == lbl_82005758)))) {
          uVar19 = 0;
          if (puVar10[3] != 0) {
            iVar20 = 0;
            do {
              if (*(unsigned int *)(iVar20 + puVar10[4]) == uVar2) break;
              uVar19 = uVar19 + 1;
              iVar20 = iVar20 + 4;
            } while (uVar19 < puVar10[3]);
          }
          uVar19 = *(unsigned int *)(*(int *)(*(int *)(uVar19 * 4 + puVar10[2]) * 4 +
                                     *(int *)(param_1 + 0x14)) + 0x30);
          if ((**(unsigned int **)(uVar19 * 4 + *(int *)(param_1 + 0x14)) & 1) != 0) goto LAB_8296afd8;
        }
        if (((((uVar18 & 2) != 0) &&
             (puVar10 = *(unsigned int **)(puVar7[0x12] * 4 + *(int *)(param_1 + 0x18)),
             (*puVar10 & 0xfff00000) == 0x20500000)) &&
            (((uVar5 & 0x100) != 0 &&
             (((puVar8[2] == 0xffffffff && (*(double *)(puVar8 + 8) == lbl_82005710)) &&
              ((*(unsigned int *)(*(int *)(puVar9[1] * 4 + iVar1) + 4) & 0x100) != 0)))))) &&
           ((puVar9[2] == 0xffffffff && (*(double *)(puVar9 + 8) == lbl_82005758)))) {
          uVar12 = 0;
          if (puVar10[3] != 0) {
            iVar20 = 0;
            do {
              if (*(unsigned int *)(iVar20 + puVar10[4]) == uVar2) break;
              uVar12 = uVar12 + 1;
              iVar20 = iVar20 + 4;
            } while ((uVar12 & 0xffffffff) < (unsigned __int64)puVar10[3]);
          }
          uVar19 = 0;
          iVar15 = 1;
          iVar20 = *(int *)(param_1 + 0x14);
          do {
            uVar16 = *(unsigned int *)(*(int *)(*(int *)((int)(((__int64)(int)puVar10[3] *
                                                        (__int64)(int)uVar19 + uVar12 & 0xffffffff)
                                                      << 2) + puVar10[2]) * 4 + iVar20) + 0x30);
            iVar17 = *(int *)(*(int *)(*(int *)(*(int *)((int)(((__int64)iVar15 *
                                                                (__int64)(int)puVar10[3] + uVar12 &
                                                               0xffffffff) << 2) + puVar10[2]) * 4 +
                                               iVar20) + 0x30) * 4 + iVar20);
            if ((((**(unsigned int **)(uVar16 * 4 + iVar20) & 1) != 0) &&
                ((*(unsigned int *)(*(int *)(*(int *)(iVar17 + 4) * 4 + iVar1) + 4) & 0x100) != 0)) &&
               ((*(int *)(iVar17 + 8) == -1 && (*(double *)(iVar17 + 0x20) < lbl_82005710)))) {
              puVar6[0xc] = uVar16;
              return 0;
            }
            uVar19 = uVar19 + 1;
            iVar15 = iVar15 + -1;
          } while (uVar19 < 2);
        }
        if ((uVar18 & 2) == 0) {
          return 0;
        }
        puVar6 = *(unsigned int **)(puVar7[0x12] * 4 + *(int *)(param_1 + 0x18));
        if ((*puVar6 & 0xfff00000) != 0x20400000) {
          return 0;
        }
        uVar12 = 0xffffffffffffffff;
        if (((((uVar5 & 0x100) != 0) && (puVar8[2] == 0xffffffff)) &&
            ((*(unsigned int *)(*(int *)(puVar9[1] * 4 + iVar1) + 4) & 0x100) != 0)) &&
           (puVar9[2] == 0xffffffff)) {
          if ((*(double *)(puVar8 + 8) == lbl_82005710) && (*(double *)(puVar9 + 8) == lbl_82005758)
             ) {
            uVar12 = 0x20200000;
          }
          else {
            if ((*(double *)(puVar8 + 8) != lbl_82005758) ||
               (*(double *)(puVar9 + 8) != lbl_82005710)) goto LAB_8296b358;
            uVar12 = 0x20300000;
          }
          uVar12 = uVar12 | 1;
        }
LAB_8296b358:
        uVar18 = 0;
        if (puVar6[3] != 0) {
          iVar20 = 0;
          do {
            if (*(unsigned int *)(iVar20 + puVar6[4]) == uVar2) break;
            uVar18 = uVar18 + 1;
            iVar20 = iVar20 + 4;
          } while (uVar18 < puVar6[3]);
        }
        uVar2 = puVar6[3];
        uVar19 = 0;
        iVar20 = *(int *)(param_1 + 0x14);
        piVar14 = (int *)(uVar18 * 4 + puVar6[2]);
        piVar13 = (int *)((uVar2 + uVar18) * 4 + puVar6[2]);
        while( true ) {
          iVar15 = *(int *)(*(int *)(*piVar13 * 4 + iVar20) + 0x30);
          uVar18 = *(unsigned int *)(*(int *)(*piVar14 * 4 + iVar20) + 0x30);
          iVar17 = *(int *)(iVar15 * 4 + iVar20);
          if (((*(int *)(iVar17 + 8) == -1) &&
              ((*(unsigned int *)(*(int *)(*(int *)(iVar17 + 4) * 4 + iVar1) + 4) & 2) != 0)) &&
             (puVar6 = *(unsigned int **)(*(int *)(iVar17 + 0x48) * 4 + *(int *)(param_1 + 0x18)),
             (*puVar6 & 0xfff00000) == 0x10100000)) break;
LAB_8296b498:
          uVar19 = uVar19 + 1;
          piVar14 = piVar14 + uVar2;
          piVar13 = piVar13 + -uVar2;
          if (1 < uVar19) {
            return 0;
          }
        }
        uVar16 = 0;
        if (puVar6[3] != 0) {
          iVar17 = 0;
          do {
            if (*(int *)(iVar17 + puVar6[4]) == iVar15) break;
            uVar16 = uVar16 + 1;
            iVar17 = iVar17 + 4;
          } while (uVar16 < puVar6[3]);
        }
        uVar16 = *(unsigned int *)(*(int *)(*(int *)(uVar16 * 4 + puVar6[2]) * 4 + *(int *)(param_1 + 0x14))
                          + 0x30);
        if ((int)uVar12 != -1) goto LAB_8296b4c0;
        if ((uVar3 == uVar16) && (uVar4 == uVar18)) {
          uVar12 = 0x20000000;
        }
        else {
          if ((uVar3 != uVar18) || (uVar4 != uVar16)) goto LAB_8296b498;
          uVar12 = 0x20100000;
        }
        uVar12 = uVar12 | 1;
LAB_8296b4c0:
        fn_829632A0(auStack_100);
        uVar11 = fn_82963A30(auStack_100,uVar12,2,1,0);
        if ((-1 < (int)uVar11) && (uVar11 = fn_829632F0(auStack_100,param_2), -1 < (int)uVar11)) {
          *piStack_f0 = param_3;
          *puStack_f8 = uVar18;
          puStack_f8[1] = uVar16;
          uVar11 = fn_829699A0(param_1,auStack_100,param_3,uVar18,uVar16);
        }
        fn_82BA02A8(auStack_100);
        return uVar11;
      }
    }
  }
  puVar6[0xc] = uVar3;
  return 0;
}

