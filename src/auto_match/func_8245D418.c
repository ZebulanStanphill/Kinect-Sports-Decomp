void fn_8245D418(int param_1,unsigned int param_2,unsigned int param_3)

{
  if (param_2 >= *(unsigned int *)(param_1 + 0x10)) {
    return;
  }
  *(unsigned int *)(*(int *)(param_1 + 4) + param_2 * 0x20 + 0x18) = 1;
  *(unsigned int *)(*(int *)(param_1 + 4) + param_2 * 0x20 + 0x1c) = param_3;
  return;
}

