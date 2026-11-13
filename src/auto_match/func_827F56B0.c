void fn_827F56B0(int param_1)
{
  unsigned short n;
  unsigned short i;
  unsigned short *p;

  n = *(unsigned short *)(param_1 + 0x44);
  i = 0;
  p = *(unsigned short **)(param_1 + 0x40);
  for (; i < n; i++) {
    if (*p == 0xffff) {
      return;
    }
    if (*p == 0) {
      *(unsigned char *)(param_1 + 0xdc) |= 0x10;
      return;
    }
    p++;
  }
}
