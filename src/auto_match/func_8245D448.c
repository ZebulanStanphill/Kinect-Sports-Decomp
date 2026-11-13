unsigned int fn_8245D448(int param_1,unsigned int param_2)

{
  if (param_2 >= *(unsigned int *)(param_1 + 0x10)) {
    return 0;
  }
  return *(unsigned int *)(param_2 * 0x20 + *(int *)(param_1 + 4) + 0x18);
}

