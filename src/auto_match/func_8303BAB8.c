void fn_8303BAB8(int param_1,unsigned char param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0x2c) = param_3;
  if (param_2 == '\0') {
    return;
  }
  *(unsigned int *)(param_1 + 0x2c) = param_3 | 0x10;
  return;
}

