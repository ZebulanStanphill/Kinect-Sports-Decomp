unsigned int fn_82FEF8A0(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x38) == 0) {
    return 1;
  }
  return *(unsigned int *)(*(int *)(param_1 + 0x38) + 8);
}

