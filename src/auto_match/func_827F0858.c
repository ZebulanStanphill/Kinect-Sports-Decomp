unsigned int fn_827F0858(int param_1)

{
  if (*(int *)(param_1 + 0xf0) != 0xffff) {
    return *(unsigned int *)((*(int *)(param_1 + 0xf0) + 0x28) * 4 + param_1);
  }
  return 0;
}

