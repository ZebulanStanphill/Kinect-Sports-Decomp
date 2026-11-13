void fn_829AF0E8(int param_1)

{
  if (*(unsigned char *)(param_1 + 0x617) >= 8) {
    return;
  }
  *(unsigned char *)(param_1 + 0x618) = 8;
  *(unsigned int *)(param_1 + 0x560) = *(unsigned int *)(param_1 + 0x560) | 4;
  return;
}

