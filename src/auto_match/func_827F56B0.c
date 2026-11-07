typedef unsigned char U8;
typedef unsigned short U16;

void fn_827F56B0(int param_1)
{
  U16 n;
  U16 i;
  U16 *p;

  n = *(U16 *)(param_1 + 0x44);
  i = 0;
  p = *(U16 **)(param_1 + 0x40);
  for (; i < n; i++) {
    if (*p == 0xffff) {
      return;
    }
    if (*p == 0) {
      *(U8 *)(param_1 + 0xdc) |= 0x10;
      return;
    }
    p++;
  }
}
