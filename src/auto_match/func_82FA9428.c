void fn_82FA9428(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
  *(unsigned int *)(param_1 + 0x24) = param_2;
  *(unsigned int *)(param_1 + 0x28) = param_3;
  *(unsigned int *)(param_1 + 0x2c) = param_4;
  *(int *)(param_1 + 0x20) = param_5;
  if (param_5 >= *(int *)(param_1 + 8)) {
    return;
  }
  *(int *)(param_1 + 8) = param_5;
  return;
}

