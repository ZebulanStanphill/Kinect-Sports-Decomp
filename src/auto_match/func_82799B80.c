void fn_82799B80(int param_1)

{
  if ((*(unsigned char *)(param_1 + 0x13d) & 1) != 0) {
    return;
  }
  *(unsigned char *)(param_1 + 0x13f) = *(unsigned char *)(param_1 + 0x13f) | 2;
  *(unsigned char *)(param_1 + 0x13d) = *(unsigned char *)(param_1 + 0x13d) & 0xfe | 1;
  return;
}

