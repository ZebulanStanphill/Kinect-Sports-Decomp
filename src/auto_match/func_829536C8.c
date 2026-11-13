unsigned __int64 fn_829536C8(int param_1,unsigned int param_2,unsigned int *param_3,int *param_4,int param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  int iVar7;
  unsigned __int64 uVar6;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  __int64 lVar11;
  int *piVar12;
  unsigned __int64 uVar13;
  
  uVar1 = *param_3;
  uVar6 = (unsigned __int64)uVar1 & 0xfffff;
  if ((uVar1 & 0xfffff) != 0) {
    trapWord(6,uVar6,0);
    uVar8 = param_3[1] / uVar6;
    if ((int)uVar8 != 0) {
      lVar11 = 0;
      lVar10 = 0;
      uVar9 = uVar8;
      piVar12 = param_4;
      do {
        iVar7 = *(int *)(*(int *)(param_3[2] + (int)lVar10) * 4 + *(int *)(param_1 + 0x14));
        uVar2 = *(unsigned int *)(iVar7 + 0x48);
        uVar3 = *(unsigned int *)(iVar7 + 0x54);
        if (uVar2 == 0xffffffff) {
LAB_829538ec:
          *piVar12 = 0;
        }
        else {
          lVar5 = 0;
          puVar4 = *(unsigned int **)(uVar2 * 4 + *(int *)(param_1 + 0x18));
          *piVar12 = (int)puVar4;
          uVar13 = uVar6;
          if ((uVar1 & 0xfffff) != 0) {
            do {
              iVar7 = *(int *)(*(int *)((int)((lVar11 + lVar5 & 0xffffffffU) << 2) + param_3[2]) * 4
                              + *(int *)(param_1 + 0x14));
              if (*(int *)(param_1 + 0x88) != *(int *)(iVar7 + 4)) {
                *piVar12 = 0;
              }
              if (*(int *)(iVar7 + 0x3c) != 0) {
                *piVar12 = 0;
              }
              if ((uVar2 < *(unsigned int *)(iVar7 + 0x50)) && (*(unsigned int *)(iVar7 + 0x50) < uVar3)) {
                *piVar12 = 0;
              }
              if (*(int *)(iVar7 + 0x54) != *(int *)(iVar7 + 0x58)) {
                *piVar12 = 0;
              }
              lVar5 = lVar5 + 1;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          if (*piVar12 != 0) {
            if (param_2 == *puVar4) {
              lVar5 = 0;
              uVar13 = uVar6;
              if ((uVar1 & 0xfffff) != 0) {
                do {
                  if (*(unsigned int *)(*(int *)(*(int *)((int)((lVar11 + lVar5 & 0xffffffffU) << 2) +
                                                 param_3[2]) * 4 + *(int *)(param_1 + 0x14)) + 0x48)
                      != uVar2) {
                    *piVar12 = 0;
                  }
                  lVar5 = lVar5 + 1;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              if (*piVar12 == 0) goto LAB_829538f0;
              uVar2 = puVar4[3];
              if ((uVar2 == (*puVar4 & 0xfffff)) && (puVar4[1] <= (*puVar4 & 0xfffff) * param_5)) {
                uVar3 = param_3[1];
                uVar13 = 0;
                if (uVar3 != 0) {
                  iVar7 = 0;
                  do {
                    if (*(int *)(iVar7 + param_3[2]) == *(int *)puVar4[4]) break;
                    uVar13 = uVar13 + 1;
                    iVar7 = iVar7 + 4;
                  } while ((uVar13 & 0xffffffff) < (unsigned __int64)uVar3);
                }
                if ((uVar13 & 0xffffffff) != (unsigned __int64)uVar3) {
                  if (1 < uVar2) {
                    if ((uVar2 != uVar6) || ((unsigned __int64)uVar3 < (uVar13 + uVar6 & 0xffffffff))) {
                      *piVar12 = 0;
                    }
                    if ((uVar1 & 0xfffff) != 0) {
                      iVar7 = 0;
                      lVar5 = (uVar13 & 0x3fffffff) << 2;
                      uVar13 = uVar6;
                      do {
                        if (*(int *)(iVar7 + puVar4[4]) != *(int *)(param_3[2] + (int)lVar5)) {
                          *piVar12 = 0;
                        }
                        iVar7 = iVar7 + 4;
                        lVar5 = lVar5 + 4;
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                  }
                  goto LAB_829538f0;
                }
              }
            }
            goto LAB_829538ec;
          }
        }
LAB_829538f0:
        uVar9 = uVar9 - 1;
        lVar11 = lVar11 + uVar6;
        lVar10 = ((unsigned __int64)uVar1 & 0xfffff) * 4 + lVar10;
        piVar12 = piVar12 + 1;
      } while (uVar9 != 0);
    }
    uVar6 = 0;
    if (uVar8 != 0) {
      do {
        if (*param_4 != 0) {
          return 0;
        }
        uVar6 = uVar6 + 1;
        param_4 = param_4 + 1;
      } while ((uVar6 & 0xffffffff) < uVar8);
    }
  }
  return 1;
}

