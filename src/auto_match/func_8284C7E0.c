unsigned int fn_8284C7E0(int param_1)

{
  if (*(unsigned int *)(param_1 + 0x1c) == 3) {
    return *(unsigned int *)(param_1 + 0x38);
  }
  return 1;
}

