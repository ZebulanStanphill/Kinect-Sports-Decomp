unsigned __int64 fn_82931958(int param_1,int param_2)

{
  unsigned int uVar1;
  
  if (((param_2 != 0) && (*(int *)(param_2 + 4) == *(int *)(param_1 + 4))) &&
     (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) {
    if (*(unsigned int **)(param_1 + 0x14) == (unsigned int *)0x0) {
      uVar1 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x14)) >> 5;
    }
    else {
      uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x14))();
    }
    if (uVar1 != 0) {
      if (*(unsigned int **)(param_1 + 0x18) == (unsigned int *)0x0) {
        uVar1 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x18)) >> 5;
      }
      else {
        uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x18))();
      }
      if (uVar1 != 0) {
        if (*(unsigned int **)(param_1 + 0x1c) == (unsigned int *)0x0) {
          uVar1 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x1c)) >> 5;
        }
        else {
          uVar1 = (**(int (***)())**(unsigned int **)(param_1 + 0x1c))();
        }
        if (uVar1 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

