void fn_83033020(int param_1,unsigned int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x80)) {
    return;
  }
  *(unsigned int *)(param_1 + 0x80) = 0;
  return;
}

