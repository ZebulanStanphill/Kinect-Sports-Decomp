typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82968F88();
extern int fn_8296CF68();


bool fn_8296E438(int param_1)

{
  unsigned int *puVar1;
  bool bVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar9;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  int iVar13;
  int iVar14;
  int iVar15;
  unsigned int uVar16;
  __int64 lVar12;
  int iVar17;
  unsigned int uVar18;
  int iVar19;
  unsigned __int64 uVar20;
  
  bVar3 = false;
  fn_8296CF68();
  uVar10 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar9 = 0;
    do {
      iVar19 = *(int *)(iVar9 + *(int *)(param_1 + 0x14));
      uVar18 = *(unsigned int *)(*(int *)(*(int *)(iVar19 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4);
      if ((uVar18 & 0x1ffe0) == 0 && (uVar18 & 0x10020) == 0) {
        *(unsigned int *)(iVar19 + 0x54) = 0;
      }
      else {
        *(unsigned int *)(iVar19 + 0x54) = 2;
      }
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + 4;
    } while (uVar10 < *(unsigned int *)(param_1 + 8));
  }
  iVar9 = *(int *)(param_1 + 0xc);
  if (iVar9 != 0) {
    iVar19 = iVar9 << 2;
    do {
      iVar19 = iVar19 + -4;
      iVar9 = iVar9 + -1;
      puVar1 = *(unsigned int **)(iVar19 + *(int *)(param_1 + 0x18));
      if (((*puVar1 & 0xfff00000) == 0x20900000) && (uVar10 = 0, puVar1[3] != 0)) {
        iVar13 = 0;
        do {
          iVar15 = *(int *)(*(int *)(puVar1[4] + iVar13) * 4 + *(int *)(param_1 + 0x14));
          if (*(int *)(iVar15 + 0x54) != 2) {
            *(unsigned int *)(iVar15 + 0x54) = 1;
          }
          uVar10 = uVar10 + 1;
          iVar13 = iVar13 + 4;
        } while (uVar10 < puVar1[3]);
      }
    } while (iVar9 != 0);
  }
  do {
    iVar9 = *(int *)(param_1 + 0xc);
    bVar2 = false;
    if (iVar9 == 0) break;
    iVar19 = iVar9 << 2;
    do {
      iVar19 = iVar19 + -4;
      iVar9 = iVar9 + -1;
      puVar1 = *(unsigned int **)(iVar19 + *(int *)(param_1 + 0x18));
      uVar11 = ZEXT48(puVar1);
      uVar10 = *puVar1;
      if ((uVar10 & 0xfff00000) != 0) {
        if (((uVar10 & 0xf0000000) < 0x10000000) || (0x40000000 < (uVar10 & 0xf0000000))) {
          uVar10 = puVar1[3];
          uVar4 = 0;
          uVar18 = 0;
          if (uVar10 != 0) {
            iVar13 = 0;
            do {
              uVar20 = (unsigned __int64)
                       *(unsigned int *)(*(int *)(*(int *)(puVar1[4] + iVar13) * 4 +
                                         *(int *)(param_1 + 0x14)) + 0x54);
              if (uVar4 < uVar20) {
                uVar4 = uVar20;
              }
              uVar18 = uVar18 + 1;
              iVar13 = iVar13 + 4;
            } while (uVar18 < uVar10);
            if (uVar4 == 1) {
              bVar2 = true;
            }
          }
          uVar20 = 0;
          if (uVar10 != 0) {
            lVar12 = 0;
            do {
              fn_82968F88(param_1,*(unsigned int *)((int)lVar12 + *(int *)((int)uVar11 + 0x10)),
                            uVar4);
              uVar20 = uVar20 + 1;
              lVar12 = lVar12 + 4;
            } while ((uVar20 & 0xffffffff) < (unsigned __int64)*(unsigned int *)((int)uVar11 + 0xc));
          }
          uVar20 = 0;
          if (*(int *)((int)uVar11 + 4) != 0) {
            lVar12 = 0;
            do {
              fn_82968F88(param_1,*(unsigned int *)((int)lVar12 + *(int *)((int)uVar11 + 8)),uVar4);
              uVar20 = uVar20 + 1;
              lVar12 = lVar12 + 4;
            } while ((uVar20 & 0xffffffff) < (unsigned __int64)*(unsigned int *)((int)uVar11 + 4));
          }
        }
        else {
          uVar4 = 0;
          uVar20 = (unsigned __int64)puVar1[1] / ((unsigned __int64)uVar10 & 0xfffff);
          trapWord(6,(unsigned __int64)uVar10 & 0xfffff,0);
          if (puVar1[3] != 0) {
            iVar13 = 0;
            do {
              iVar15 = *(int *)(iVar13 + *(int *)((int)uVar11 + 0x10));
              uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar15 * 4 + *(int *)(param_1 + 0x14)) + 0x54);
              if (uVar6 == 1) {
                bVar2 = true;
              }
              fn_82968F88(param_1,iVar15,uVar6);
              uVar8 = 0;
              if (uVar20 != 0) {
                do {
                  fn_82968F88(param_1,*(unsigned int *)
                                         ((int)(((__int64)*(int *)((int)uVar11 + 0xc) *
                                                 (__int64)(int)uVar8 + uVar4 & 0xffffffff) << 2) +
                                         *(int *)((int)uVar11 + 8)),uVar6);
                  uVar8 = uVar8 + 1;
                } while ((uVar8 & 0xffffffff) < uVar20);
              }
              uVar4 = uVar4 + 1;
              iVar13 = iVar13 + 4;
            } while ((uVar4 & 0xffffffff) < (unsigned __int64)*(unsigned int *)((int)uVar11 + 0xc));
          }
        }
      }
    } while (iVar9 != 0);
    if (!bVar2) break;
    bVar2 = false;
    uVar10 = 0;
    if (*(int *)(param_1 + 0xc) == 0) break;
    iVar9 = 0;
    do {
      puVar1 = *(unsigned int **)(iVar9 + *(int *)(param_1 + 0x18));
      if ((*puVar1 & 0xfff00000) == 0x20900000) {
        uVar18 = puVar1[3];
        uVar16 = 0;
        if (uVar18 != 0) {
          iVar19 = 0;
          do {
            iVar13 = *(int *)(param_1 + 0x14);
            iVar15 = *(int *)(*(int *)(iVar19 + puVar1[4]) * 4 + iVar13);
            if (*(int *)(iVar15 + 0x54) == 1) {
              iVar17 = *(int *)((uVar16 + uVar18) * 4 + puVar1[2]);
              if ((iVar17 == -1) ||
                 (iVar7 = *(int *)(*(int *)(iVar17 * 4 + iVar13) + 0x38), iVar7 == -1)) {
                iVar7 = iVar17;
              }
              uVar18 = 0;
              iVar17 = *(int *)(*(int *)(*(int *)(iVar7 * 4 + iVar13) + 0x48) * 4 +
                               *(int *)(param_1 + 0x18));
              if (*(unsigned int *)(iVar17 + 0xc) != 0) {
                iVar14 = 0;
                do {
                  if (*(int *)(iVar14 + *(int *)(iVar17 + 0x10)) == iVar7) break;
                  uVar18 = uVar18 + 1;
                  iVar14 = iVar14 + 4;
                } while (uVar18 < *(unsigned int *)(iVar17 + 0xc));
              }
              iVar17 = *(int *)(uVar18 * 4 + *(int *)(iVar17 + 8));
              if ((iVar17 != -1) &&
                 (iVar7 = *(int *)(*(int *)(iVar17 * 4 + iVar13) + 0x38), iVar7 != -1)) {
                iVar17 = iVar7;
              }
              iVar13 = *(int *)(*(int *)(iVar17 * 4 + iVar13) + 0x54);
              if (iVar13 != 1) {
                *(int *)(iVar15 + 0x54) = iVar13;
                bVar2 = true;
              }
            }
            uVar18 = puVar1[3];
            uVar16 = uVar16 + 1;
            iVar19 = iVar19 + 4;
          } while (uVar16 < uVar18);
        }
      }
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + 4;
    } while (uVar10 < *(unsigned int *)(param_1 + 0xc));
  } while (bVar2);
  uVar10 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar9 = 0;
    do {
      puVar1 = *(unsigned int **)(iVar9 + *(int *)(param_1 + 0x18));
      uVar18 = *puVar1;
      if ((uVar18 & 0xfff00000) != 0) {
        if (((uVar18 & 0xf0000000) < 0x10000000) || (0x40000000 < (uVar18 & 0xf0000000))) {
          uVar18 = 0;
          if (puVar1[3] != 0) {
            iVar19 = 0;
            do {
              if (*(int *)(*(int *)(*(int *)(iVar19 + puVar1[4]) * 4 + *(int *)(param_1 + 0x14)) +
                          0x54) == 2) break;
              uVar18 = uVar18 + 1;
              iVar19 = iVar19 + 4;
            } while (uVar18 < puVar1[3]);
          }
          if (uVar18 == puVar1[3]) {
            *puVar1 = 0;
            puVar1[3] = 0;
            puVar1[1] = 0;
            goto LAB_8296ea44;
          }
        }
        else {
          uVar4 = 0;
          uVar20 = 0;
          uVar11 = (unsigned __int64)puVar1[1] / ((unsigned __int64)uVar18 & 0xfffff);
          trapWord(6,(unsigned __int64)uVar18 & 0xfffff,0);
          if (puVar1[3] != 0) {
            iVar19 = 0;
            iVar13 = 0;
            do {
              uVar18 = puVar1[4];
              if (*(int *)(*(int *)(*(int *)(iVar13 + uVar18) * 4 + *(int *)(param_1 + 0x14)) + 0x54
                          ) == 2) {
                iVar15 = 0;
                *(unsigned int *)(iVar19 + uVar18) = *(unsigned int *)(iVar13 + uVar18);
                for (uVar6 = uVar11; uVar6 != 0; uVar6 = uVar6 - 1) {
                  lVar12 = (__int64)iVar15;
                  iVar15 = iVar15 + 1;
                  *(unsigned int *)
                   ((int)((lVar12 * (int)puVar1[3] + uVar20 & 0xffffffff) << 2) + puVar1[2]) =
                       *(unsigned int *)
                        ((int)((lVar12 * (int)puVar1[3] + uVar4 & 0xffffffff) << 2) + puVar1[2]);
                }
                uVar20 = uVar20 + 1;
                iVar19 = iVar19 + 4;
              }
              uVar4 = uVar4 + 1;
              iVar13 = iVar13 + 4;
            } while ((uVar4 & 0xffffffff) < (unsigned __int64)puVar1[3]);
          }
          if ((uVar20 & 0xffffffff) != (unsigned __int64)puVar1[3]) {
            uVar18 = (unsigned int)uVar20;
            if ((uVar20 & 0xffffffff) == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = uVar18 & 0xfffff | *puVar1 & 0xfff00000;
            }
            *puVar1 = uVar16;
            uVar16 = 1;
            uVar4 = uVar20;
            if (1 < uVar11) {
              do {
                lVar12 = 0;
                uVar6 = uVar20;
                uVar8 = uVar20 & 0xffffffff;
                while (uVar8 != 0) {
                  uVar8 = uVar4 + lVar12;
                  uVar5 = (__int64)(int)uVar16 * (__int64)(int)puVar1[3] + lVar12;
                  lVar12 = lVar12 + 1;
                  *(unsigned int *)((int)((uVar8 & 0xffffffff) << 2) + puVar1[2]) =
                       *(unsigned int *)((int)((uVar5 & 0xffffffff) << 2) + puVar1[2]);
                  uVar6 = uVar6 - 1;
                  uVar8 = uVar6;
                }
                uVar16 = uVar16 + 1;
                uVar4 = uVar4 + uVar20;
              } while (uVar16 < uVar11);
            }
            puVar1[3] = uVar18;
            puVar1[1] = uVar18 * (int)uVar11;
LAB_8296ea44:
            bVar3 = true;
          }
        }
      }
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + 4;
    } while (uVar10 < *(unsigned int *)(param_1 + 0xc));
  }
  uVar10 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar9 = 0;
    do {
      puVar1 = *(unsigned int **)(*(int *)(param_1 + 0x14) + iVar9);
      if ((uVar10 == 0xffffffff) || (uVar18 = puVar1[0xe], puVar1[0xe] == 0xffffffff)) {
        uVar18 = uVar10;
      }
      if (*(int *)(*(int *)(uVar18 * 4 + *(int *)(param_1 + 0x14)) + 0x54) != 2) {
        uVar18 = puVar1[1];
        if ((*(unsigned int *)(param_1 + 0x74) != uVar18) &&
           ((puVar1[2] != 0xffffffff ||
            ((*(unsigned int *)(*(int *)(uVar18 * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x400) == 0)))) {
          uVar18 = *(unsigned int *)(*(int *)(uVar18 * 4 + *(int *)(param_1 + 0x10)) + 4);
          if (((uVar18 & 0x300) == 0) || ((uVar18 & 0x800) == 0)) {
            puVar1[1] = *(unsigned int *)(param_1 + 0x74);
            bVar3 = true;
          }
          else {
            *puVar1 = *puVar1 | 0x10000000;
          }
        }
      }
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + 4;
    } while (uVar10 < *(unsigned int *)(param_1 + 8));
  }
  return !bVar3;
}

