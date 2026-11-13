void png_set_sRGB(unsigned int param_1,unsigned int param_2,unsigned char param_3)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  *(unsigned char *)(param_2 + 0x2c) = param_3;
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_2 + 8) | 0x800;
  return;
}

