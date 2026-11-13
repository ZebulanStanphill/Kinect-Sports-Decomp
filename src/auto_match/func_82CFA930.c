int fn_82CFA930(int param_1)

{
  int lVar1;
  
  lVar1 = (*(int (**)())(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8));
  if (lVar1 >= 0) {
    return (*(unsigned int *)(param_1 + 0x10) - *(unsigned int *)(param_1 + 0x14)) + lVar1;
  }
  return -1;
}

