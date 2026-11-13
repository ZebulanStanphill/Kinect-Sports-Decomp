void fn_830142F0(int param_1)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    return;
  }
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  return;
}

