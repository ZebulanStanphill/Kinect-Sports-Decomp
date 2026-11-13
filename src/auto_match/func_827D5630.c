void fn_827D5630(int param_1)

{
  int lVar1;
  
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c8) - 1;
  *(int *)(param_1 + 0x2c8) = (int)lVar1;
  if (lVar1 != 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0x2cc) = 0;
  return;
}

