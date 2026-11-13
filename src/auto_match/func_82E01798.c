void fn_82E01798(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0xc) = param_2;
  if (*(unsigned int *)(param_1 + 0x10) == 0) {
    return;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x2c) = param_2;
  return;
}

