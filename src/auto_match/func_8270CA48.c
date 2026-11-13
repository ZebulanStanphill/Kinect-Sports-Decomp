__int64 fn_8270CA48(int param_1,__int64 param_2)

{
  __int64 lVar1;
  __int64 lVar2;
  
  lVar2 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18) - (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
    if ((int)param_2 <= (int)lVar2) {
      lVar2 = param_2;
    }
    param_2 = param_2 - lVar2;
    *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(param_1 + 0x14) + (int)lVar2;
  }
  if ((int)param_2 != 0) {
    lVar1 = (**(int (***)())(**(int **)(param_1 + 8) + 0x2c))();
    if ((int)lVar1 == -1) {
      if ((int)lVar2 < 1) {
        lVar2 = -1;
      }
    }
    else {
      *(unsigned int *)(param_1 + 0x18) = 0;
      lVar2 = lVar2 + lVar1;
      *(unsigned int *)(param_1 + 0x14) = 0;
      *(__int64 *)(param_1 + 0x20) = (__int64)(int)lVar1 + *(__int64 *)(param_1 + 0x20);
    }
  }
  return lVar2;
}

