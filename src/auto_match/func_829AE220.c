void png_set_PLTE(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned short param_4)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  *(unsigned int *)(param_2 + 0x10) = param_3;
  *(unsigned short *)(param_2 + 0x14) = param_4;
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_2 + 8) | 8;
  return;
}

