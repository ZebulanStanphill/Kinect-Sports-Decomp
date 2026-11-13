void fn_82799BD0(int param_1)

{
  if ((*(unsigned char *)(param_1 + 0x13d) & 8) != 0) {
    return;
  }
  *(unsigned char *)(param_1 + 0x13d) = *(unsigned char *)(param_1 + 0x13d) | 8;
  *(unsigned char *)(param_1 + 0x13f) = *(unsigned char *)(param_1 + 0x13f) | 2;
  return;
}

