void fn_82CC6160(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  if (param_4 < 0) {
    param_4 = -param_4;
  }
  if (param_5 < 0) {
    param_5 = -param_5;
  }
  *(int *)(param_1 + 0x50) = param_2;
  *(int *)(param_1 + 0x54) = param_3;
  *(int *)(param_1 + 0x58) = param_4;
  *(int *)(param_1 + 0x5c) = param_5;
  return;
}

