unsigned __int64 fn_829690E8(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  unsigned int uVar9;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  unsigned int uVar11;
  int iVar13;
  unsigned __int64 uVar12;
  unsigned int uVar14;
  int iVar16;
  int iVar17;
  __int64 lVar15;
  int iVar18;
  unsigned __int64 uVar19;
  
  uVar10 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar13 = 0;
    do {
      iVar16 = *(int *)(iVar13 + *(int *)(param_1 + 0x14));
      iVar18 = *(int *)(*(int *)(iVar16 + 4) * 4 + *(int *)(param_1 + 0x10));
      uVar14 = *(unsigned int *)(iVar18 + 4);
      if (((uVar14 & 0x30) != 0) && ((uVar14 & 0x200) == 0)) {
        *(unsigned int *)(iVar16 + 4) = *(unsigned int *)(param_1 + 0x74);
      }
      if ((*(unsigned int *)(iVar18 + 4) & 4) != 0) {
        *(unsigned int *)(iVar16 + 4) = *(unsigned int *)(param_1 + 0x88);
      }
      uVar10 = uVar10 + 1;
      iVar13 = iVar13 + 4;
    } while (uVar10 < *(unsigned int *)(param_1 + 8));
  }
  uVar10 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar13 = 0;
    do {
      puVar2 = *(unsigned int **)(iVar13 + *(int *)(param_1 + 0x18));
      uVar14 = *puVar2;
      if ((uVar14 & 0xfff00000) != 0) {
        uVar1 = puVar2[3];
        uVar5 = 0;
        uVar9 = 0;
        if (uVar1 != 0) {
          iVar16 = 0;
          do {
            if ((**(unsigned int **)(*(int *)(iVar16 + puVar2[4]) * 4 + *(int *)(param_1 + 0x14)) & 0x20) !=
                0) {
              uVar5 = uVar5 + 1;
            }
            uVar9 = uVar9 + 1;
            iVar16 = iVar16 + 4;
          } while (uVar9 < uVar1);
        }
        if (uVar5 == uVar1) {
          *puVar2 = 0;
        }
        else {
          if (((uVar5 < uVar1) && (0xfffffff < (uVar14 & 0xf0000000))) &&
             ((uVar14 & 0xf0000000) < 0x40000001)) {
            uVar12 = 0;
            uVar7 = 0;
            uVar4 = (unsigned __int64)puVar2[1] / ((unsigned __int64)uVar14 & 0xfffff);
            trapWord(6,(unsigned __int64)uVar14 & 0xfffff,0);
            if (uVar1 != 0) {
              iVar16 = 0;
              iVar18 = 0;
              do {
                uVar14 = puVar2[4];
                if ((**(unsigned int **)(*(int *)(iVar18 + uVar14) * 4 + *(int *)(param_1 + 0x14)) & 0x20)
                    == 0) {
                  iVar17 = 0;
                  *(unsigned int *)(iVar16 + uVar14) = *(unsigned int *)(iVar18 + uVar14);
                  for (uVar19 = uVar4; uVar19 != 0; uVar19 = uVar19 - 1) {
                    lVar15 = (__int64)iVar17;
                    iVar17 = iVar17 + 1;
                    *(unsigned int *)
                     ((int)(((int)puVar2[3] * lVar15 + uVar12 & 0xffffffff) << 2) + puVar2[2]) =
                         *(unsigned int *)
                          ((int)(((int)puVar2[3] * lVar15 + uVar7 & 0xffffffff) << 2) + puVar2[2]);
                  }
                  uVar12 = uVar12 + 1;
                  iVar16 = iVar16 + 4;
                }
                uVar7 = uVar7 + 1;
                iVar18 = iVar18 + 4;
              } while ((uVar7 & 0xffffffff) < (unsigned __int64)puVar2[3]);
            }
            uVar14 = 1;
            uVar7 = uVar12;
            if (1 < uVar4) {
              do {
                lVar15 = 0;
                uVar19 = uVar12;
                uVar6 = uVar12 & 0xffffffff;
                while (uVar6 != 0) {
                  uVar6 = uVar7 + lVar15;
                  uVar8 = (__int64)(int)puVar2[3] * (__int64)(int)uVar14 + lVar15;
                  lVar15 = lVar15 + 1;
                  *(unsigned int *)((int)((uVar6 & 0xffffffff) << 2) + puVar2[2]) =
                       *(unsigned int *)((int)((uVar8 & 0xffffffff) << 2) + puVar2[2]);
                  uVar19 = uVar19 - 1;
                  uVar6 = uVar19;
                }
                uVar14 = uVar14 + 1;
                uVar7 = uVar7 + uVar12;
              } while (uVar14 < uVar4);
            }
            uVar14 = (unsigned int)uVar12;
            puVar2[3] = uVar14;
            puVar2[1] = uVar14 * (int)uVar4;
            *puVar2 = uVar14 & 0xfffff | *puVar2 & 0xfff00000;
          }
          uVar14 = 0;
          if (puVar2[3] != 0) {
            iVar16 = 0;
            do {
              iVar17 = *(int *)(*(int *)(iVar16 + puVar2[4]) * 4 + *(int *)(param_1 + 0x14));
              iVar18 = *(int *)(iVar17 + 0x14);
              uVar11 = *(unsigned int *)(iVar17 + 0x18);
              while ((iVar18 != -1 &&
                     ((**(unsigned int **)(iVar18 * 4 + *(int *)(param_1 + 0x14)) & 0x20) != 0))) {
                iVar3 = *(int *)(iVar18 * 4 + *(int *)(param_1 + 0x14));
                iVar18 = *(int *)(iVar3 + 0x14);
                uVar11 = *(unsigned int *)(iVar3 + 0x18);
              }
              uVar14 = uVar14 + 1;
              *(unsigned int *)(iVar17 + 0x18) = uVar11;
              *(int *)(iVar17 + 0x14) = iVar18;
              iVar16 = iVar16 + 4;
            } while (uVar14 < puVar2[3]);
          }
        }
      }
      uVar10 = uVar10 + 1;
      iVar13 = iVar13 + 4;
    } while (uVar10 < *(unsigned int *)(param_1 + 0xc));
  }
  return 0;
}

