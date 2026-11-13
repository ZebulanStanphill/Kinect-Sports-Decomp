void fn_82FA9480(int param_1,int param_2)

{
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  if (param_2 >= *(int *)(param_1 + 8)) {
    return;
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}

