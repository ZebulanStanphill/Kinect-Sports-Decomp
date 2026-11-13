void fn_82CC62F0(int param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5)

{
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  if (param_5 < 0) {
    param_5 = -param_5;
  }
  *(unsigned int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x1c) = param_3;
  *(unsigned int *)(param_1 + 0x20) = param_4;
  *(int *)(param_1 + 0x24) = param_5;
  return;
}

