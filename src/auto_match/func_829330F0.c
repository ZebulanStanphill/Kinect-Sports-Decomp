extern int fn_82930800();


unsigned __int64 fn_829330F0(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  if (((((param_2 != 0) && (*(int *)(param_2 + 4) == *(int *)(param_1 + 4))) &&
       (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
      ((*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18) &&
       (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))))) &&
     ((*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28) &&
      ((*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c) &&
       (iVar1 = fn_82930800(param_1 + 0x30,param_2 + 0x30), iVar1 != 0)))))) {
    if (*(unsigned int **)(param_1 + 0x10) == (unsigned int *)0x0) {
      uVar2 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x10)) >> 5;
    }
    else {
      uVar2 = (**(int (***)())**(unsigned int **)(param_1 + 0x10))();
    }
    if (uVar2 != 0) {
      if (*(unsigned int **)(param_1 + 0x20) == (unsigned int *)0x0) {
        uVar2 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x20)) >> 5;
      }
      else {
        uVar2 = (**(int (***)())**(unsigned int **)(param_1 + 0x20))();
      }
      if (uVar2 != 0) {
        if (*(unsigned int **)(param_1 + 0x24) == (unsigned int *)0x0) {
          uVar2 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x24)) >> 5;
        }
        else {
          uVar2 = (**(int (***)())**(unsigned int **)(param_1 + 0x24))();
        }
        if (uVar2 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

