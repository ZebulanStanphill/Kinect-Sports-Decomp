unsigned __int64 fn_82931FF8(int param_1,int param_2)

{
  unsigned int uVar1;
  
  if ((((((param_2 != 0) && (*(int *)(param_2 + 4) == *(int *)(param_1 + 4))) &&
        (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) &&
       ((*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14) &&
        (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))))) &&
      ((*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c) &&
       ((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20) &&
        (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48))))))) &&
     (*(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c))) {
    if (*(unsigned int **)(param_1 + 0x24) == (unsigned int *)0x0) {
      uVar1 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x24)) >> 5;
    }
    else {
      uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x24))();
    }
    if (uVar1 != 0) {
      if (*(unsigned int **)(param_1 + 0x28) == (unsigned int *)0x0) {
        uVar1 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x28)) >> 5;
      }
      else {
        uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x28))();
      }
      if (uVar1 != 0) {
        if (*(unsigned int **)(param_1 + 0x2c) == (unsigned int *)0x0) {
          uVar1 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x2c)) >> 5;
        }
        else {
          uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x2c))();
        }
        if (uVar1 != 0) {
          if (*(unsigned int **)(param_1 + 0x30) == (unsigned int *)0x0) {
            uVar1 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x30)) >> 5;
          }
          else {
            uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x30))();
          }
          if (uVar1 != 0) {
            if (*(unsigned int **)(param_1 + 0x34) == (unsigned int *)0x0) {
              uVar1 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x34)) >> 5;
            }
            else {
              uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x34))();
            }
            if (uVar1 != 0) {
              if (*(unsigned int **)(param_1 + 0x38) == (unsigned int *)0x0) {
                uVar1 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x38)) >> 5;
              }
              else {
                uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x38))();
              }
              if (uVar1 != 0) {
                if (*(unsigned int **)(param_1 + 0x3c) == (unsigned int *)0x0) {
                  uVar1 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x3c)) >> 5;
                }
                else {
                  uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x3c))();
                }
                if (uVar1 != 0) {
                  if (*(unsigned int **)(param_1 + 0x44) == (unsigned int *)0x0) {
                    uVar1 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x44)) >> 5;
                  }
                  else {
                    uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x44))();
                  }
                  if (uVar1 != 0) {
                    if (*(unsigned int **)(param_1 + 0x40) == (unsigned int *)0x0) {
                      uVar1 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x40)) >> 5;
                    }
                    else {
                      uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x40))();
                    }
                    if (uVar1 != 0) {
                      return 1;
                    }
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

