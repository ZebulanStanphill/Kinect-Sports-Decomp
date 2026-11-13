int fn_829EC740(int param_1,int param_2,unsigned int param_3,unsigned short *param_4,unsigned short param_5)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned short *puVar3;
  int iVar4;
  unsigned short *puVar5;
  int iVar6;
  unsigned short *puVar7;
  unsigned short *puVar8;
  
  puVar3 = (unsigned short *)((param_3 & 0xfffffffe) + param_2);
  if ((param_2 != 0) && (param_4 != (unsigned short *)0x0)) {
    *(unsigned short *)(param_1 + 0x10) = param_5;
    uVar2 = (int)param_4 - param_2 & 1;
    if (uVar2 != 0) {
      param_4 = (unsigned short *)((int)param_4 + (2 - uVar2));
    }
    puVar8 = param_4 + 1;
    if (puVar8 <= puVar3) {
      *(unsigned short *)(param_1 + 0x14) = *param_4;
      if (9 < param_5) {
        uVar2 = (int)puVar8 - param_2 & 3;
        if (uVar2 != 0) {
          puVar8 = (unsigned short *)((int)puVar8 + (4 - uVar2));
        }
        puVar7 = puVar8 + 2;
        if (puVar3 < puVar7) {
          return 0;
        }
        uVar2 = (int)puVar7 - param_2 & 3;
        *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)puVar8;
        if (uVar2 != 0) {
          puVar7 = (unsigned short *)((int)puVar7 + (4 - uVar2));
        }
        if (puVar3 < puVar7 + 2) {
          return 0;
        }
        *(unsigned short **)(param_1 + 0x1c) = puVar7;
        puVar7 = puVar7 + (unsigned int)*(unsigned short *)(param_1 + 0x14) * 2;
        uVar2 = (int)puVar7 - param_2 & 3;
        if (uVar2 != 0) {
          puVar7 = (unsigned short *)((int)puVar7 + (4 - uVar2));
        }
        if (puVar3 < puVar7 + 2) {
          return 0;
        }
        *(unsigned short **)(param_1 + 0x20) = puVar7;
        puVar8 = puVar7 + (unsigned int)*(unsigned short *)(param_1 + 0x14) * 2;
      }
      uVar2 = (int)puVar8 - param_2 & 3;
      if (uVar2 != 0) {
        puVar8 = (unsigned short *)((int)puVar8 + (4 - uVar2));
      }
      if (param_5 < 0xc) {
        uVar2 = (int)puVar8 - param_2 & 3;
        if (uVar2 != 0) {
          puVar8 = (unsigned short *)((int)puVar8 + (4 - uVar2));
        }
        puVar7 = puVar8 + 1;
        *(unsigned int *)(param_1 + 0x24) = (unsigned int)*puVar8;
      }
      else {
        puVar7 = puVar8 + 2;
        if (puVar3 < puVar7) {
          return 0;
        }
        *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)puVar8;
      }
      uVar2 = (int)puVar7 - param_2 & 1;
      if (uVar2 != 0) {
        puVar7 = (unsigned short *)((int)puVar7 + (2 - uVar2));
      }
      puVar8 = puVar7 + 1;
      if (puVar8 <= puVar3) {
        uVar2 = (int)puVar8 - param_2 & 1;
        *(unsigned short *)(param_1 + 0x28) = *puVar7;
        if (uVar2 != 0) {
          puVar8 = (unsigned short *)((int)puVar8 + (2 - uVar2));
        }
        uVar1 = *(unsigned short *)(param_1 + 0x14);
        puVar7 = puVar8 + uVar1;
        if (puVar7 <= puVar3) {
          *(unsigned short **)(param_1 + 0x2c) = puVar8;
          uVar2 = (int)puVar7 - param_2 & 1;
          if (uVar2 != 0) {
            puVar7 = (unsigned short *)((int)puVar7 + (2 - uVar2));
          }
          puVar8 = puVar7 + uVar1;
          if (puVar8 <= puVar3) {
            *(unsigned short **)(param_1 + 0x30) = puVar7;
            uVar2 = (int)puVar8 - param_2 & 1;
            if (uVar2 != 0) {
              puVar8 = (unsigned short *)((int)puVar8 + (2 - uVar2));
            }
            puVar7 = puVar8 + uVar1;
            if (puVar7 <= puVar3) {
              *(unsigned short **)(param_1 + 0x34) = puVar8;
              if (10 < param_5) {
                uVar2 = (int)puVar7 - param_2 & 1;
                if (uVar2 != 0) {
                  puVar7 = (unsigned short *)((int)puVar7 + (2 - uVar2));
                }
                puVar8 = puVar7 + 1;
                if (puVar3 < puVar8) {
                  return 0;
                }
                uVar1 = *puVar7;
                *(unsigned short *)(param_1 + 0x38) = uVar1;
                if (uVar1 != 8) {
                  return 0;
                }
                uVar2 = (int)puVar8 - param_2 & 1;
                if (uVar2 != 0) {
                  puVar8 = (unsigned short *)((int)puVar8 + (2 - uVar2));
                }
                puVar5 = puVar8 + 1;
                if (puVar3 < puVar5) {
                  return 0;
                }
                uVar1 = *puVar8;
                *(unsigned short *)(param_1 + 0x3a) = uVar1;
                if (uVar1 != 4) {
                  return 0;
                }
                uVar2 = (int)puVar5 - param_2 & 1;
                if (uVar2 != 0) {
                  puVar5 = (unsigned short *)((int)puVar5 + (2 - uVar2));
                }
                puVar7 = puVar5 + 1;
                if (puVar3 < puVar7) {
                  return 0;
                }
                uVar1 = *puVar5;
                *(unsigned short *)(param_1 + 0x3c) = uVar1;
                if (uVar1 != 2) {
                  return 0;
                }
                uVar2 = (int)puVar7 - param_2 & 3;
                if (uVar2 != 0) {
                  puVar7 = (unsigned short *)((int)puVar7 + (4 - uVar2));
                }
                puVar8 = *(unsigned short **)(param_1 + 0x2c);
                if (puVar3 < puVar7 + (unsigned int)*puVar8 * 2) {
                  return 0;
                }
                *(unsigned short **)(param_1 + 0x40) = puVar7;
                iVar6 = 0;
                uVar1 = *puVar8;
                if (uVar1 != 0) {
                  iVar4 = 0;
                  do {
                    if (*(int *)(iVar4 + (int)puVar7) < 1) {
                      return 0;
                    }
                    iVar6 = iVar6 + 1;
                    iVar4 = iVar4 + 4;
                  } while (iVar6 < (int)(unsigned int)**(unsigned short **)(param_1 + 0x2c));
                }
                puVar7 = puVar7 + (unsigned int)uVar1 * 2;
                uVar2 = (int)puVar7 - param_2 & 7;
                if (uVar2 != 0) {
                  puVar7 = (unsigned short *)((int)puVar7 + (8 - uVar2));
                }
                if (puVar3 < puVar7 + (unsigned int)uVar1 * 4) {
                  return 0;
                }
                *(unsigned short **)(param_1 + 0x44) = puVar7;
                puVar7 = puVar7 + (unsigned int)*puVar8 * 4;
              }
              uVar2 = (int)puVar7 - param_2 & 3;
              if (uVar2 != 0) {
                puVar7 = (unsigned short *)((int)puVar7 + (4 - uVar2));
              }
              if (puVar7 + (unsigned int)**(unsigned short **)(param_1 + 0x2c) * 2 <= puVar3) {
                *(unsigned short **)(param_1 + 0x48) = puVar7;
                puVar7 = puVar7 + (unsigned int)**(unsigned short **)(param_1 + 0x2c) * 2;
                uVar2 = (int)puVar7 - param_2 & 3;
                if (uVar2 != 0) {
                  puVar7 = (unsigned short *)((int)puVar7 + (4 - uVar2));
                }
                puVar8 = puVar7 + 2;
                if (puVar8 <= puVar3) {
                  uVar2 = (int)puVar8 - param_2 & 1;
                  *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)puVar7;
                  if (uVar2 != 0) {
                    puVar8 = (unsigned short *)((int)puVar8 + (2 - uVar2));
                  }
                  if ((unsigned short *)((*(unsigned int *)(param_1 + 0x4c) & 0xfffffffe) + (int)puVar8) <= puVar3)
                  {
                    *(unsigned short **)(param_1 + 0x50) = puVar8;
                    return *(unsigned int *)(param_1 + 0x4c) + (int)puVar8;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

