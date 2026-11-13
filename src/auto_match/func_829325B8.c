unsigned __int64 fn_829325B8(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  
  if ((((((param_2 != 0) && (*(int *)(param_2 + 4) == *(int *)(param_1 + 4))) &&
        (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) &&
       ((*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14) &&
        (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))))) &&
      ((*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c) &&
       ((*(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c) &&
        (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))))))) &&
     ((*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c) &&
      ((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20) &&
       (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24))))))) {
    if (*(unsigned int **)(param_1 + 0x30) == (unsigned int *)0x0) {
      uVar2 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x30)) >> 5;
    }
    else {
      uVar2 = (**(int (***)())**(unsigned int **)(param_1 + 0x30))();
    }
    if (uVar2 != 0) {
      if (*(unsigned int **)(param_1 + 0x34) == (unsigned int *)0x0) {
        uVar2 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x34)) >> 5;
      }
      else {
        uVar2 = (**(int (***)())**(unsigned int **)(param_1 + 0x34))();
      }
      if (uVar2 != 0) {
        if (*(unsigned int **)(param_1 + 0x38) == (unsigned int *)0x0) {
          uVar2 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x38)) >> 5;
        }
        else {
          uVar2 = (**(int (***)())**(unsigned int **)(param_1 + 0x38))();
        }
        if (uVar2 != 0) {
          if (*(unsigned int **)(param_1 + 0x3c) == (unsigned int *)0x0) {
            uVar2 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x3c)) >> 5;
          }
          else {
            uVar2 = (**(int (***)())**(unsigned int **)(param_1 + 0x3c))();
          }
          if (uVar2 != 0) {
            if (*(unsigned int **)(param_1 + 0x40) == (unsigned int *)0x0) {
              uVar2 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x40)) >> 5;
            }
            else {
              uVar2 = (**(int (***)())**(unsigned int **)(param_1 + 0x40))();
            }
            if (uVar2 != 0) {
              if (*(unsigned int **)(param_1 + 0x48) == (unsigned int *)0x0) {
                uVar2 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x48)) >> 5;
              }
              else {
                uVar2 = (**(int (***)())**(unsigned int **)(param_1 + 0x48))();
              }
              if (uVar2 != 0) {
                if (*(unsigned int **)(param_1 + 0x44) == (unsigned int *)0x0) {
                  uVar2 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x44)) >> 5;
                }
                else {
                  uVar2 = (**(int (***)())**(unsigned int **)(param_1 + 0x44))();
                }
                if (uVar2 != 0) {
                  if (*(int *)(param_1 + 0x4c) != 0) {
                    iVar1 = *(int *)(param_1 + 0x4c) * 4;
                    pbVar4 = *(unsigned char **)(param_2 + 0x50);
                    pbVar6 = *(unsigned char **)(param_1 + 0x50);
                    lVar3 = 0;
                    if (iVar1 != 0) {
                      pbVar5 = pbVar6 + iVar1;
                      do {
                        lVar3 = (unsigned __int64)*pbVar6 - (unsigned __int64)*pbVar4;
                        if (lVar3 != 0) break;
                        pbVar6 = pbVar6 + 1;
                        pbVar4 = pbVar4 + 1;
                      } while (pbVar6 != pbVar5);
                    }
                    if ((int)lVar3 != 0) {
                      return 0;
                    }
                  }
                  return 1;
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

