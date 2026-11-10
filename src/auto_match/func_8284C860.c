int fn_8284C860(int param_1)
{
  if (*(unsigned int *)(param_1 + 0x1c) == 4) {
    return *(int *)(param_1 + 0x38);
  }
  if (*(unsigned int *)(param_1 + 0x1c) == 5) {
    return *(int *)(param_1 + 0x38);
  }
  return 1;
}
