extern int fn_827D8560();


void fn_827D8688(int param_1)

{
  int lVar1;
  
  if (*(int *)(param_1 + 0x2c8) == 0) {
    *(unsigned int *)(param_1 + 0x2cc) = 1;
  }
  *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 1;
  fn_827D8560(param_1);
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c8) - 1;
  *(int *)(param_1 + 0x2c8) = (int)lVar1;
  if (lVar1 == 0) {
    *(unsigned int *)(param_1 + 0x2cc) = 0;
  }
  return;
}

