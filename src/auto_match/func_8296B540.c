typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82964628();
extern int fn_82F68CC0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


bool fn_8296B540(int param_1,unsigned int *param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  int iVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  int iVar15;
  __int64 lVar16;
  int iVar17;
  int iVar19;
  bool bVar20;
  __int64 lVar18;
  unsigned __int64 uVar21;
  bool bVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  uVar9 = *param_2;
  if ((uVar9 & 0xfff00000) == 0x50000000) {
    puVar2 = *(unsigned int **)(*(int *)param_2[4] * 4 + *(int *)(param_1 + 0x14));
    uVar8 = *(unsigned int *)(*(int *)(puVar2[1] * 4 + *(int *)(param_1 + 0x10)) + 4);
    if (((uVar8 & 1) != 0) && ((uVar8 & 0x1000) == 0)) {
      uVar24 = (unsigned __int64)uVar9;
      uVar14 = uVar24 & 0xfffff;
      uVar8 = 0xe;
      if ((uVar9 & 0xfffff) != 0) {
        iVar19 = 0;
        lVar16 = (uVar24 & 0xfffff) << 2;
        uVar23 = uVar14;
        do {
          iVar15 = *(int *)(param_1 + 0x14);
          puVar3 = *(unsigned int **)(*(int *)(iVar19 + param_2[2]) * 4 + iVar15);
          puVar4 = *(unsigned int **)(*(int *)((int)lVar16 + param_2[2]) * 4 + iVar15);
          if (param_3 != 0) {
            puVar3 = *(unsigned int **)(puVar3[0xc] * 4 + iVar15);
            puVar4 = *(unsigned int **)(puVar4[0xc] * 4 + iVar15);
          }
          uVar1 = *puVar3;
          uVar10 = 0;
          if (((((uVar1 & 4) != 0) && ((*puVar4 & 4) != 0)) ||
              (((uVar1 & 8) != 0 && ((*puVar4 & 8) != 0)))) || (puVar3 == puVar4)) {
            uVar10 = 4;
          }
          if ((((uVar1 & 4) != 0) && ((*puVar4 & 8) != 0)) ||
             (((uVar1 & 8) != 0 && ((*puVar4 & 4) != 0)))) {
            uVar10 = uVar10 | 8;
          }
          if (((uVar1 & 2) != 0) && ((*puVar4 & 2) != 0)) {
            uVar10 = uVar10 | 2;
          }
          uVar8 = uVar10 & uVar8;
          iVar19 = iVar19 + 4;
          lVar16 = lVar16 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      *puVar2 = *puVar2 | uVar8;
      dVar27 = lbl_82005758;
      dVar7 = lbl_82005710;
      if (param_3 != 0) {
        uVar23 = 0;
        uVar8 = 0xffffffff;
        iVar19 = 0;
        uVar21 = 0;
        if ((uVar9 & 0xfffff) != 0) {
          iVar11 = 0;
          iVar15 = *(int *)(param_1 + 0x14);
          lVar16 = (uVar24 & 0xfffff) << 2;
          dVar25 = lbl_82005710;
          do {
            uVar1 = *(unsigned int *)(*(int *)(*(int *)(iVar11 + param_2[2]) * 4 + iVar15) + 0x30);
            uVar10 = *(unsigned int *)(*(int *)(*(int *)((int)lVar16 + param_2[2]) * 4 + iVar15) + 0x30);
            iVar17 = *(int *)(uVar1 * 4 + iVar15);
            iVar12 = *(int *)(uVar10 * 4 + iVar15);
            if (((*(unsigned int *)(*(int *)(*(int *)(iVar17 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                 0x100) == 0) || (bVar22 = true, *(int *)(iVar17 + 8) != -1)) {
              bVar22 = false;
            }
            if (((*(unsigned int *)(*(int *)(*(int *)(iVar12 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                 0x100) == 0) || (bVar20 = true, *(int *)(iVar12 + 8) != -1)) {
              bVar20 = false;
            }
            if (((bVar22) && (*(double *)(iVar17 + 0x20) == lbl_82005710)) ||
               ((bVar20 && (*(double *)(iVar12 + 0x20) == lbl_82005710)))) {
              uVar23 = uVar23 + 1;
            }
            else {
              if (bVar22) {
                if (bVar20) {
                  uVar23 = uVar23 + 1;
                  dVar25 = *(double *)(iVar12 + 0x20) * *(double *)(iVar17 + 0x20) + dVar25;
                  goto LAB_8296b7f8;
                }
                dVar26 = *(double *)(iVar17 + 0x20);
              }
              else {
                if (!bVar20) break;
                dVar26 = *(double *)(iVar12 + 0x20);
                uVar10 = uVar1;
              }
              if (dVar26 != lbl_82005758) break;
              iVar19 = iVar19 + 1;
              uVar8 = uVar10;
            }
LAB_8296b7f8:
            uVar21 = uVar21 + 1;
            iVar11 = iVar11 + 4;
            lVar16 = lVar16 + 4;
          } while ((uVar21 & 0xffffffff) < uVar14);
          if (((iVar19 == 1) && ((uVar14 - 1 & 0xffffffff) == (uVar23 & 0xffffffff))) &&
             (dVar25 == lbl_82005710)) {
            *param_2 = 0;
            puVar2[0xc] = uVar8;
            return false;
          }
        }
        if (uVar14 == (uVar23 & 0xffffffff)) {
          *param_2 = 0;
          uVar9 = fn_82964628(param_1,*(unsigned int *)(param_1 + 0x78),0,0);
          puVar2[0xc] = uVar9;
          *(unsigned int *)(*(int *)(uVar9 * 4 + *(int *)(param_1 + 0x14)) + 0x30) = uVar9;
          return false;
        }
      }
      iVar15 = 0;
      iVar19 = 0;
      iVar11 = 0;
      bVar22 = false;
      uVar23 = uVar14;
      if ((uVar9 & 0xfffff) != 0) {
        lVar16 = (uVar24 & 0xfffff) * 4;
        iVar17 = 0;
        lVar13 = lVar16;
        uVar24 = uVar14;
        do {
          iVar12 = *(int *)(param_1 + 0x14);
          iVar5 = *(int *)(*(int *)(iVar17 + param_2[2]) * 4 + iVar12);
          iVar6 = *(int *)(*(int *)((int)lVar13 + param_2[2]) * 4 + iVar12);
          if (param_3 != 0) {
            iVar5 = *(int *)(*(int *)(iVar5 + 0x30) * 4 + iVar12);
            iVar6 = *(int *)(*(int *)(iVar6 + 0x30) * 4 + iVar12);
          }
          if (((((*(unsigned int *)(*(int *)(*(int *)(iVar5 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                 0x100) == 0) || (*(int *)(iVar5 + 8) != -1)) ||
              (*(double *)(iVar5 + 0x20) != lbl_82005710)) &&
             ((((*(unsigned int *)(*(int *)(*(int *)(iVar6 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100
                ) == 0 || (*(int *)(iVar6 + 8) != -1)) ||
              (*(double *)(iVar6 + 0x20) != lbl_82005710)))) {
            iVar19 = iVar19 + 1;
            iVar11 = 0;
          }
          else {
            iVar15 = iVar15 + 1;
            iVar11 = iVar11 + 1;
          }
          iVar17 = iVar17 + 4;
          lVar13 = lVar13 + 4;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
        if (((iVar15 != 0) && ((iVar19 != 2 || ((*(unsigned int *)(param_1 + 0x6c) & 0x2000000) != 0)))) &&
           ((iVar19 == 1 ||
            ((iVar15 == iVar11 ||
             (((*(unsigned int *)(param_1 + 0x6c) & 0x10000000) == 0 &&
              ((*(unsigned int *)(param_1 + 0x6c) & 0x20000000) == 0)))))))) {
          if (iVar19 == 0) {
            *param_2 = 0;
            return false;
          }
          uVar23 = 0;
          iVar19 = 0;
          iVar15 = 0;
          lVar13 = lVar16;
          lVar18 = lVar16;
          uVar24 = uVar14;
          do {
            uVar9 = param_2[2];
            iVar11 = *(int *)(param_1 + 0x14);
            iVar12 = *(int *)(iVar15 + uVar9) * 4;
            iVar17 = *(int *)(*(int *)((int)lVar18 + uVar9) * 4 + iVar11);
            if (param_3 != 0) {
              iVar12 = *(int *)(*(int *)(iVar12 + iVar11) + 0x30) << 2;
              iVar17 = *(int *)(*(int *)(iVar17 + 0x30) * 4 + iVar11);
            }
            iVar11 = *(int *)(iVar12 + iVar11);
            if (((((*(unsigned int *)(*(int *)(*(int *)(iVar11 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                   0x100) == 0) || (*(int *)(iVar11 + 8) != -1)) ||
                (*(double *)(iVar11 + 0x20) != dVar7)) &&
               ((((*(unsigned int *)(*(int *)(*(int *)(iVar17 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                  0x100) == 0 || (*(int *)(iVar17 + 8) != -1)) ||
                (*(double *)(iVar17 + 0x20) != dVar7)))) {
              uVar23 = uVar23 + 1;
              *(unsigned int *)(iVar19 + uVar9) = *(unsigned int *)(iVar15 + uVar9);
              iVar19 = iVar19 + 4;
              *(unsigned int *)((int)lVar13 + param_2[2]) = *(unsigned int *)((int)lVar18 + param_2[2]);
              lVar13 = lVar13 + 4;
            }
            iVar15 = iVar15 + 4;
            lVar18 = lVar18 + 4;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
          fn_82F68CC0((uVar23 & 0x3fffffff) * 4 + (unsigned __int64)param_2[2],
                       lVar16 + (unsigned __int64)param_2[2]);
          if ((uVar23 & 0xffffffff) == 1) {
            uVar9 = 0x20500001;
          }
          else {
            uVar9 = (unsigned int)uVar23 & 0xfffff | 0x50000000;
          }
          *param_2 = uVar9;
          param_2[3] = 1;
          bVar22 = uVar23 != uVar14;
          param_2[1] = (unsigned int)((uVar23 & 0xffffffff) << 1);
        }
      }
      if (((uVar23 & 0xffffffff) < 2) ||
         (((uVar23 & 0xffffffff) == 2 && ((*(unsigned int *)(param_1 + 0x6c) & 0x2000000) == 0)))) {
        uVar14 = 0;
        if ((uVar23 & 0xffffffff) != 0) {
          iVar19 = 0;
          lVar16 = (uVar23 & 0x3fffffff) << 2;
          do {
            iVar15 = *(int *)(param_1 + 0x14);
            iVar11 = *(int *)((int)lVar16 + param_2[2]);
            iVar17 = *(int *)(iVar19 + param_2[2]) * 4;
            if (param_3 != 0) {
              iVar17 = *(int *)(*(int *)(iVar17 + iVar15) + 0x30) << 2;
              iVar11 = *(int *)(*(int *)(iVar11 * 4 + iVar15) + 0x30);
            }
            iVar17 = *(int *)(iVar17 + iVar15);
            iVar15 = *(int *)(iVar11 * 4 + iVar15);
            if (((((*(unsigned int *)(*(int *)(*(int *)(iVar17 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                   0x100) == 0) || (*(int *)(iVar17 + 8) != -1)) ||
                (*(double *)(iVar17 + 0x20) != dVar27)) &&
               ((((*(unsigned int *)(*(int *)(*(int *)(iVar15 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                  0x100) == 0 || (*(int *)(iVar15 + 8) != -1)) ||
                (*(double *)(iVar15 + 0x20) != dVar27)))) break;
            uVar14 = uVar14 + 1;
            iVar19 = iVar19 + 4;
            lVar16 = lVar16 + 4;
          } while ((uVar14 & 0xffffffff) < (uVar23 & 0xffffffff));
        }
        if ((uVar14 & 0xffffffff) == (uVar23 & 0xffffffff)) {
          if ((uVar23 & 0xffffffff) != 0) {
            iVar19 = 0;
            lVar16 = (uVar23 & 0x3fffffff) << 2;
            uVar14 = uVar23;
            do {
              uVar9 = param_2[2];
              iVar15 = *(int *)(uVar9 + iVar19) * 4;
              if (param_3 != 0) {
                iVar15 = *(int *)(*(int *)(iVar15 + *(int *)(param_1 + 0x14)) + 0x30) << 2;
              }
              iVar15 = *(int *)(iVar15 + *(int *)(param_1 + 0x14));
              if ((((*(unsigned int *)(*(int *)(*(int *)(iVar15 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                    0x100) != 0) && (*(int *)(iVar15 + 8) == -1)) &&
                 (*(double *)(iVar15 + 0x20) == dVar27)) {
                *(unsigned int *)(uVar9 + iVar19) = *(unsigned int *)((int)lVar16 + uVar9);
              }
              iVar19 = iVar19 + 4;
              lVar16 = lVar16 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          if ((uVar23 & 0xffffffff) == 2) {
            uVar9 = 0x20400000;
            param_2[1] = 2;
          }
          else {
            uVar9 = 0x10000000;
            param_2[1] = 1;
          }
          bVar22 = true;
          *param_2 = uVar9 | 1;
        }
      }
      return !bVar22;
    }
  }
  return true;
}

