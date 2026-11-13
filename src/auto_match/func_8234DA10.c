void fn_8234DA10(int param_1,int param_2)

{
  int lVar1;
  
  if (*(int *)(param_2 + 8) == 0) {
    *(unsigned int *)(param_1 + 200) = *(unsigned int *)(param_1 + 200) + 1;
    return;
  }
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 200) - 1;
  *(int *)(param_1 + 200) = (int)lVar1;
  if (lVar1 != 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0xcc) = 1;
  return;
}

