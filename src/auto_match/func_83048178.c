void fn_83048178(int param_1,int param_2)

{
  if (param_2 != 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x38);
  *(unsigned short *)(param_1 + 0x1c) = *(unsigned short *)(*(int *)(param_1 + 8) + 0xd4);
  return;
}

