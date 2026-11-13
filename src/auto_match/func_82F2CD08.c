void fn_82F2CD08(int param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5)

{
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  if (param_5 < 0) {
    param_5 = -param_5;
  }
  *(unsigned int *)(param_1 + 0x58) = param_2;
  *(int *)(param_1 + 0x5c) = param_3;
  *(unsigned int *)(param_1 + 0x60) = param_4;
  *(int *)(param_1 + 100) = param_5;
  return;
}

