#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_829655B8();
extern int fn_8296CF68();


unsigned __int64 fn_82971768(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  unsigned __int64 uVar9;
  int iVar12;
  __int64 lVar11;
  unsigned __int64 uVar13;
  unsigned int *puVar14;
  unsigned int uVar15;
  unsigned __int64 uVar16;
  
  fn_8296CF68();
  uVar10 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar12 = 0;
    do {
      puVar14 = *(unsigned int **)(iVar12 + *(int *)(param_1 + 0x14));
      uVar15 = *puVar14;
      iVar5 = *(int *)(puVar14[1] * 4 + *(int *)(param_1 + 0x10));
      *puVar14 = uVar15 & 0xffffffdf;
      uVar1 = *(unsigned int *)(iVar5 + 4);
      if (((uVar1 & 0x10) != 0) && ((uVar1 & 0x200) == 0)) {
        *puVar14 = uVar15 & 0xffffffdf | 0x20;
      }
      if ((*(unsigned int *)(iVar5 + 4) & 0x800) != 0) {
        *puVar14 = *puVar14 | 0x20;
      }
      uVar10 = uVar10 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar10 < *(unsigned int *)(param_1 + 8));
  }
  uVar10 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar12 = 0;
    do {
      puVar14 = *(unsigned int **)(iVar12 + *(int *)(param_1 + 0x18));
      uVar13 = ZEXT48(puVar14);
      uVar15 = *puVar14;
      uVar1 = uVar15 & 0xfff00000;
      if ((uVar15 & 0xfff00000) != 0) {
        if ((((uVar1 == 0x50100000) || (uVar1 == 0x11000000)) || (uVar1 == 0x11200000)) ||
           ((uVar15 & 0xf0000000) == 0x60000000)) {
          uVar15 = 0;
          if (puVar14[3] != 0) {
            iVar5 = 0;
            do {
              uVar15 = uVar15 + 1;
              piVar4 = (int *)(iVar5 + puVar14[4]);
              iVar5 = iVar5 + 4;
              puVar3 = *(unsigned int **)(*piVar4 * 4 + *(int *)(param_1 + 0x14));
              *puVar3 = *puVar3 | 0x20;
            } while (uVar15 < puVar14[3]);
          }
        }
        else if (((uVar1 == 0x10f00000) || (uVar1 == 0x11100000)) || (uVar1 == 0x11400000)) {
          uVar15 = 0;
          if (puVar14[3] != 0) {
            iVar5 = 0;
            do {
              uVar15 = uVar15 + 1;
              piVar4 = (int *)(iVar5 + puVar14[4]);
              iVar5 = iVar5 + 4;
              puVar3 = *(unsigned int **)(*piVar4 * 4 + *(int *)(param_1 + 0x14));
              *puVar3 = *puVar3 | 0x20;
            } while (uVar15 < puVar14[3]);
          }
        }
        else {
          uVar7 = 0;
          uVar9 = 0;
          if (puVar14[3] != 0) {
            lVar11 = 0;
            do {
              iVar5 = *(int *)(*(int *)((int)lVar11 + *(int *)((int)uVar13 + 0x10)) * 4 +
                              *(int *)(param_1 + 0x14));
              if (((*(unsigned int *)(*(int *)(*(int *)(iVar5 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                   0x1000) != 0) &&
                 (iVar5 = fn_829655B8(param_1,*(unsigned int *)(iVar5 + 0x14)), iVar5 != 0)) {
                puVar14 = *(unsigned int **)(*(int *)((int)lVar11 + *(int *)((int)uVar13 + 0x10)) * 4 +
                                    *(int *)(param_1 + 0x14));
                *puVar14 = *puVar14 | 0x20;
              }
              uVar9 = (unsigned __int64)*(unsigned int *)((int)uVar13 + 0xc);
              uVar7 = uVar7 + 1;
              lVar11 = lVar11 + 4;
            } while ((uVar7 & 0xffffffff) < uVar9);
          }
          puVar14 = (unsigned int *)uVar13;
          uVar15 = *puVar14 & 0xf0000000;
          if ((uVar15 < 0x10000000) || (0x40000000 < uVar15)) {
            uVar15 = puVar14[1];
            uVar7 = 0;
            if (uVar15 != 0) {
              uVar1 = puVar14[2];
              lVar11 = 0;
              do {
                iVar5 = fn_829655B8(param_1,*(unsigned int *)((int)lVar11 + uVar1));
                if (iVar5 != 0) {
                  uVar15 = 0;
                  if ((uVar9 & 0xffffffff) != 0) {
                    iVar5 = 0;
                    do {
                      uVar15 = uVar15 + 1;
                      piVar4 = (int *)(iVar5 + *(int *)((int)uVar13 + 0x10));
                      iVar5 = iVar5 + 4;
                      puVar14 = *(unsigned int **)(*piVar4 * 4 + *(int *)(param_1 + 0x14));
                      *puVar14 = *puVar14 | 0x20;
                    } while (uVar15 < *(unsigned int *)((int)uVar13 + 0xc));
                  }
                  break;
                }
                uVar7 = uVar7 + 1;
                lVar11 = lVar11 + 4;
              } while ((uVar7 & 0xffffffff) < (unsigned __int64)uVar15);
            }
          }
          else {
            uVar7 = (unsigned __int64)*puVar14 & 0xfffff;
            uVar8 = 0;
            uVar16 = puVar14[1] / uVar7;
            trapWord(6,uVar7,0);
            if (uVar9 != 0) {
              iVar5 = 0;
              do {
                uVar7 = 0;
                if (uVar16 != 0) {
                  iVar2 = *(int *)((int)uVar13 + 8);
                  do {
                    iVar6 = fn_829655B8(param_1,*(unsigned int *)
                                                   ((int)(((__int64)(int)uVar9 *
                                                           (__int64)(int)uVar7 + uVar8 & 0xffffffff
                                                          ) << 2) + iVar2));
                    if (iVar6 != 0) {
                      puVar14 = *(unsigned int **)(*(int *)(*(int *)((int)uVar13 + 0x10) + iVar5) * 4 +
                                          *(int *)(param_1 + 0x14));
                      *puVar14 = *puVar14 | 0x20;
                      break;
                    }
                    uVar7 = uVar7 + 1;
                  } while ((uVar7 & 0xffffffff) < uVar16);
                }
                uVar9 = (unsigned __int64)*(unsigned int *)((int)uVar13 + 0xc);
                uVar8 = uVar8 + 1;
                iVar5 = iVar5 + 4;
              } while ((uVar8 & 0xffffffff) < uVar9);
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar10 < *(unsigned int *)(param_1 + 0xc));
  }
  uVar10 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar12 = 0;
    do {
      puVar14 = *(unsigned int **)(*(int *)(param_1 + 0x14) + iVar12);
      if ((*(unsigned int *)(*(int *)(puVar14[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x20) != 0) {
        *puVar14 = *puVar14 | 0x20;
      }
      uVar10 = uVar10 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar10 < *(unsigned int *)(param_1 + 8));
  }
  return 0;
}

