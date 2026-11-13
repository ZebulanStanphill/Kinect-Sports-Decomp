void fn_82FA9508(int param_1,int param_2)

{
  *(int *)(param_1 + 0x34) = param_2;
  *(int *)(param_1 + 0x48) = param_2;
  *(unsigned int *)(param_1 + 0x38) = 0;
  if (param_2 >= *(int *)(param_1 + 8)) {
    return;
  }
  *(int *)(param_1 + 8) = param_2;
  return;
}

