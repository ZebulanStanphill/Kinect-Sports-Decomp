void fn_82FA9450(int param_1,unsigned int *param_2,int param_3)

{
  *(unsigned int *)(param_1 + 0x24) = *param_2;
  *(unsigned int *)(param_1 + 0x28) = param_2[1];
  *(unsigned int *)(param_1 + 0x2c) = param_2[2];
  *(int *)(param_1 + 0x20) = param_3;
  if (param_3 >= *(int *)(param_1 + 8)) {
    return;
  }
  *(int *)(param_1 + 8) = param_3;
  return;
}

