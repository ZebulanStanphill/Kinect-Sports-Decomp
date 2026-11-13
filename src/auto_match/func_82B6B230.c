unsigned __int64 fn_82B6B230(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x10);
  do {
    if ((*(unsigned int **)(param_1 + 0xc) <= param_2) &&
       (param_2 <=
        (unsigned int *)(*(int *)(param_1 + 0x14) * *piVar2 + (int)*(unsigned int **)(param_1 + 0xc))))
    break;
    param_1 = *(int *)(param_1 + 0x1c);
  } while (param_1 != 0);
  if (param_1 != 0) {
    puVar1 = *(unsigned int **)(param_1 + 0xc);
    *param_2 = *puVar1;
    *puVar1 = param_2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    return 0;
  }
  return 1;
}

