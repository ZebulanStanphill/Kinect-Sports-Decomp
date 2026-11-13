int fn_82688FE0(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x18) != 0) {
    return *(int *)(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    return *(int *)(*(int *)(param_1 + 0x14) + 0xc);
  }
  return 0;
}

