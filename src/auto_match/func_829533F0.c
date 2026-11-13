extern unsigned int *auStack_60;
extern int fn_82F68CC0();


unsigned int * fn_829533F0(int param_1,unsigned int param_2,int param_3,unsigned int *param_4,int param_5,int param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  unsigned int *puVar12;
  unsigned int uVar13;
  unsigned int *puVar14;
  unsigned int auStack_60 [24];
  
  iVar10 = *(int *)(**(int **)(param_3 + 0x10) * 4 + *(int *)(param_1 + 0x14));
  uVar1 = *(unsigned int *)(iVar10 + 0x54);
  uVar8 = *(unsigned int *)(iVar10 + 0x48);
  if (uVar1 != 0xffffffff) {
    uVar13 = 0;
    if (*(unsigned int *)(param_3 + 4) != 0) {
      iVar10 = 0;
      do {
        iVar11 = *(int *)(*(int *)(iVar10 + *(int *)(param_3 + 8)) * 4 + *(int *)(param_1 + 0x14));
        if (((*(int *)(param_1 + 0x88) == *(int *)(iVar11 + 4)) &&
            (uVar2 = *(unsigned int *)(iVar11 + 0x50), uVar8 < uVar2)) && (uVar2 < uVar1)) {
          return (unsigned int *)0x0;
        }
        uVar13 = uVar13 + 1;
        iVar10 = iVar10 + 4;
      } while (uVar13 < *(unsigned int *)(param_3 + 4));
    }
    puVar3 = *(unsigned int **)(uVar1 * 4 + *(int *)(param_1 + 0x18));
    uVar13 = *puVar3;
    if (param_2 == uVar13) {
      uVar2 = *(unsigned int *)(param_3 + 0xc);
      uVar6 = 0;
      if (uVar2 != 0) {
        iVar10 = 0;
        do {
          iVar11 = *(int *)(*(int *)(iVar10 + *(int *)(param_3 + 0x10)) * 4 +
                           *(int *)(param_1 + 0x14));
          if (*(unsigned int *)(iVar11 + 0x54) != uVar1) {
            return (unsigned int *)0x0;
          }
          if (*(unsigned int *)(iVar11 + 0x58) != uVar1) {
            return (unsigned int *)0x0;
          }
          iVar5 = param_6;
          if (uVar2 == 1) {
            iVar5 = (param_2 & 0xfffff) * param_6;
          }
          if (*(int *)(iVar11 + 0x5c) != iVar5) {
            return (unsigned int *)0x0;
          }
          uVar6 = uVar6 + 1;
          iVar10 = iVar10 + 4;
        } while (uVar6 < uVar2);
      }
      uVar2 = uVar13 & 0xfffff;
      if ((puVar3[3] == uVar2) && (uVar6 = puVar3[1], uVar6 <= uVar2 * param_5)) {
        uVar9 = 0;
        if (uVar6 != 0) {
          iVar10 = 0;
          do {
            iVar11 = *(int *)(*(int *)(iVar10 + puVar3[2]) * 4 + *(int *)(param_1 + 0x14));
            if ((*(int *)(param_1 + 0x88) == *(int *)(iVar11 + 4)) &&
               (uVar8 < *(unsigned int *)(iVar11 + 0x48))) {
              return (unsigned int *)0x0;
            }
            uVar9 = uVar9 + 1;
            iVar10 = iVar10 + 4;
          } while (uVar9 < uVar6);
        }
        uVar8 = 0;
        if (uVar6 != 0) {
          iVar10 = 0;
          do {
            if (*(int *)(iVar10 + puVar3[2]) == **(int **)(param_3 + 0x10)) break;
            uVar8 = uVar8 + 1;
            iVar10 = iVar10 + 4;
          } while (uVar8 < uVar6);
        }
        if (uVar8 != uVar6) {
          if ((uVar2 <= uVar8) && ((uVar13 & 0xfffff) != 0)) {
            iVar11 = 0;
            iVar10 = (uVar13 & 0xfffff) << 2;
            uVar8 = uVar2;
            do {
              uVar6 = puVar3[2];
              uVar4 = *(unsigned int *)(iVar11 + uVar6);
              *(unsigned int *)(iVar11 + uVar6) = *(unsigned int *)(iVar10 + uVar6);
              iVar11 = iVar11 + 4;
              *(unsigned int *)(iVar10 + puVar3[2]) = uVar4;
              iVar10 = iVar10 + 4;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if (1 < *(unsigned int *)(param_3 + 0xc)) {
            puVar14 = *(unsigned int **)(param_3 + 8);
            puVar12 = puVar14 + *(int *)(param_3 + 4);
            if (puVar14 < puVar12) {
              do {
                if ((uVar13 & 0xfffff) != 0) {
                  uVar8 = puVar3[2];
                  iVar10 = *(int *)(param_3 + 0x10);
                  puVar7 = puVar14;
                  uVar6 = uVar2;
                  do {
                    uVar9 = 0;
                    iVar11 = 0;
                    do {
                      if (*(int *)(iVar11 + iVar10) ==
                          *(int *)((uVar8 - (int)puVar14) + (int)puVar7)) {
                        auStack_60[uVar9] = *puVar7;
                        break;
                      }
                      uVar9 = uVar9 + 1;
                      iVar11 = iVar11 + 4;
                    } while (uVar9 < uVar2);
                    puVar7 = puVar7 + 1;
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
                fn_82F68CC0(puVar14,auStack_60,(uVar13 & 0xfffff) * 4);
                puVar14 = puVar14 + (uVar13 & 0xfffff);
              } while (puVar14 < puVar12);
            }
          }
          if (param_4 != (unsigned int *)0x0) {
            *param_4 = uVar1;
            return puVar3;
          }
          return puVar3;
        }
      }
    }
  }
  return (unsigned int *)0x0;
}

