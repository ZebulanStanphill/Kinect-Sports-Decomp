void fn_8287FF40(unsigned int *param_1,unsigned int param_2)

{
  unsigned int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    do {
      if (*(unsigned __int64 *)(iVar1 + 0x10) <= *(unsigned __int64 *)(param_2 + 0x10)) {
        if (*(unsigned int *)(iVar1 + 0x30) != 0) {
          *(unsigned int *)(*(unsigned int *)(iVar1 + 0x30) + 0x34) = param_2;
        }
        *(unsigned int *)(param_2 + 0x30) = *(unsigned int *)(iVar1 + 0x30);
        *(unsigned int *)(iVar1 + 0x30) = param_2;
        goto LAB_8287ff84;
      }
      iVar1 = *(unsigned int *)(iVar1 + 0x34);
    } while (iVar1 != 0);
  }
  if (*param_1 != 0) {
    *(unsigned int *)(*param_1 + 0x34) = param_2;
  }
  *(unsigned int *)(param_2 + 0x30) = *param_1;
  *param_1 = param_2;
LAB_8287ff84:
  *(unsigned int *)(param_2 + 0x34) = iVar1;
  if (param_1[1] == iVar1) {
    param_1[1] = param_2;
  }
  param_1[2] = param_1[2] + 1;
  *(int **)(param_2 + 0x2c) = param_1;
  return;
}

