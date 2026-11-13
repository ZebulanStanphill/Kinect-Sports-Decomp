typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8296CF68();
extern int fn_8296D7F0();
extern int fn_82975B00();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;


unsigned __int64 fn_829787A0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int *piVar9;
  unsigned int uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  int iVar16;
  unsigned int uVar17;
  int *piVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  uVar17 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar16 = 0;
    dVar21 = lbl_82005730;
    dVar22 = lbl_82005710;
    do {
      iVar11 = *(int *)(*(int *)(param_1 + 0x14) + iVar16);
      if ((*(int *)(param_1 + 0x74) != *(int *)(iVar11 + 4)) &&
         (piVar18 = (int *)(iVar11 + 8), *(int *)(iVar11 + 8) != -1)) {
        if (!bVar6) {
          fn_8296CF68(param_1);
          bVar6 = true;
        }
        iVar12 = *piVar18;
        iVar1 = *(int *)(param_1 + 0x14);
        iVar13 = *(int *)(*(int *)(iVar12 * 4 + iVar1) + 0x48);
        piVar9 = piVar18;
        if ((iVar13 != -1) &&
           (puVar3 = *(unsigned int **)(iVar13 * 4 + *(int *)(param_1 + 0x18)),
           (*puVar3 & 0xfff00000) == 0x10000000)) {
          uVar10 = 0;
          if (puVar3[3] != 0) {
            iVar13 = 0;
            do {
              if (*(int *)(iVar13 + puVar3[4]) == iVar12) break;
              uVar10 = uVar10 + 1;
              iVar13 = iVar13 + 4;
            } while (uVar10 < puVar3[3]);
          }
          piVar9 = (int *)(uVar10 * 4 + puVar3[2]);
        }
        iVar13 = *piVar9;
        iVar4 = *(int *)(iVar13 * 4 + iVar1);
        dVar19 = dVar21;
        if ((*(unsigned int *)(param_1 + 0x6c) & 0x40) != 0) {
          dVar19 = dVar22;
        }
        iVar2 = *(int *)(param_1 + 0x10);
        uVar10 = *(unsigned int *)(*(int *)(*(int *)(iVar4 + 4) * 4 + iVar2) + 4);
        if (((uVar10 & 0x100) == 0) || (*(int *)(iVar4 + 8) != -1)) {
          if (((uVar10 & 2) == 0) ||
             ((*(int *)(iVar4 + 0x48) == -1 ||
              (puVar3 = *(unsigned int **)(*(int *)(iVar4 + 0x48) * 4 + *(int *)(param_1 + 0x18)),
              (*puVar3 & 0xfff00000) != 0x20400000)))) goto LAB_82978c18;
          uVar10 = puVar3[3];
          uVar15 = 0;
          if (uVar10 != 0) {
            iVar11 = 0;
            do {
              if (*(int *)(iVar11 + puVar3[4]) == iVar13) break;
              uVar15 = uVar15 + 1;
              iVar11 = iVar11 + 4;
            } while (uVar15 < uVar10);
          }
          iVar1 = *(int *)(uVar15 * 4 + puVar3[2]);
          iVar11 = *(int *)((uVar10 + uVar15) * 4 + puVar3[2]);
          puVar3 = *(unsigned int **)(iVar1 * 4 + *(int *)(param_1 + 0x14));
          puVar5 = *(unsigned int **)(iVar11 * 4 + *(int *)(param_1 + 0x14));
          if (((((*(unsigned int *)(*(int *)(puVar3[1] * 4 + iVar2) + 4) & 0x100) == 0) ||
               (puVar3[2] != 0xffffffff)) || ((*puVar3 & 4) == 0)) ||
             (((*puVar3 & 2) == 0 && ((*puVar5 & 2) == 0)))) {
            if ((((*(unsigned int *)(*(int *)(puVar5[1] * 4 + iVar2) + 4) & 0x100) == 0) ||
                ((puVar5[2] != 0xffffffff || ((*puVar5 & 4) == 0)))) ||
               (((*puVar3 & 2) == 0 && ((*puVar5 & 2) == 0)))) goto LAB_82978c18;
            dVar20 = *(double *)(puVar5 + 8);
          }
          else {
            dVar20 = *(double *)(puVar3 + 8);
            iVar1 = iVar11;
          }
          uVar10 = 0;
          if (iVar13 == iVar12) {
            if (*(int *)(param_1 + 8) != 0) {
              iVar11 = 0;
              do {
                iVar13 = *(int *)(iVar11 + *(int *)(param_1 + 0x14));
                if (iVar12 == *(int *)(iVar13 + 8)) {
                  *(int *)(iVar13 + 8) = iVar1;
                  *(int *)(iVar13 + 0xc) = *(int *)(iVar13 + 0xc) + (int)(dVar20 + dVar19);
                }
                uVar10 = uVar10 + 1;
                iVar11 = iVar11 + 4;
              } while (uVar10 < *(unsigned int *)(param_1 + 8));
            }
          }
          else {
            if (*(int *)(param_1 + 8) != 0) {
              iVar11 = 0;
              do {
                iVar13 = *(int *)(*(int *)(param_1 + 0x14) + iVar11);
                if (iVar12 == *(int *)(iVar13 + 8)) {
                  *(int *)(iVar13 + 0xc) = *(int *)(iVar13 + 0xc) + (int)(dVar20 + dVar19);
                }
                uVar10 = uVar10 + 1;
                iVar11 = iVar11 + 4;
              } while (uVar10 < *(unsigned int *)(param_1 + 8));
            }
            *piVar9 = iVar1;
          }
        }
        else {
          uVar15 = 0;
          uVar10 = (int)(*(double *)(iVar4 + 0x20) + dVar19) + *(int *)(iVar11 + 0xc);
          if (*(unsigned int *)(param_1 + 8) != 0) {
            iVar12 = 0;
LAB_82978924:
            if (((((uVar15 == uVar17) ||
                  (iVar13 = *(int *)(iVar12 + iVar1), *(int *)(iVar13 + 4) != *(int *)(iVar11 + 4)))
                 || (*(int *)(iVar13 + 8) != -1)) ||
                ((*(unsigned int *)(iVar13 + 0xc) != uVar10 ||
                 (*(int *)(iVar13 + 0x10) != *(int *)(iVar11 + 0x10))))) ||
               ((*(int *)(iVar13 + 0x14) != *(int *)(iVar11 + 0x14) ||
                (*(int *)(iVar13 + 0x18) != *(int *)(iVar11 + 0x18))))) goto LAB_82978988;
            if (!bVar7) {
              uVar14 = 0;
              iVar12 = 0;
              do {
                piVar9 = (int *)(iVar12 + *(int *)(param_1 + 0x14));
                iVar12 = iVar12 + 4;
                *(unsigned int *)(*piVar9 + 0x30) = uVar14;
                uVar14 = uVar14 + 1;
              } while (uVar14 < *(unsigned int *)(param_1 + 8));
              bVar7 = true;
            }
            *(unsigned int *)(iVar11 + 0x30) = uVar15;
          }
LAB_829789d4:
          if (uVar15 == *(unsigned int *)(param_1 + 8)) {
            *(unsigned int *)(iVar11 + 0xc) = uVar10;
            *piVar18 = -1;
            if (*(unsigned int *)(*(int *)(*(int *)(iVar11 + 4) * 4 + *(int *)(param_1 + 0x10)) + 8) <=
                uVar10) {
              fn_82975B00(param_1,*(unsigned int *)(iVar11 + 0x60),0xfa7,0xffffffff8202dee8);
              return 0xffffffff80004005;
            }
          }
        }
        bVar8 = true;
      }
LAB_82978c18:
      uVar17 = uVar17 + 1;
      iVar16 = iVar16 + 4;
    } while (uVar17 < *(unsigned int *)(param_1 + 8));
    if (bVar8) {
      if (bVar7) {
        fn_8296D7F0(param_1);
      }
      return 0;
    }
  }
  return 1;
LAB_82978988:
  uVar15 = uVar15 + 1;
  iVar12 = iVar12 + 4;
  if (*(unsigned int *)(param_1 + 8) <= uVar15) goto LAB_829789d4;
  goto LAB_82978924;
}

