void fn_82D958D8(int param_1,unsigned int param_2)

{
  *(unsigned char *)(param_1 + 0x1c) = param_2;
  if (*(unsigned int *)(param_1 + 0x30) == 0) {
    return;
  }
  *(unsigned char *)(*(int *)(param_1 + 0x30) + 0x13) = param_2;
  return;
}

