void fn_826A1318(int *param_1, unsigned char param_2)
{
  char *r;
  unsigned *q;

  if (param_2 != 0) {
    param_1[0x23] = param_1[0x23] | 1;
  } else {
    param_1[0x23] = param_1[0x23] & ~1;
  }
  r = (*(char *(**)(int *))(*param_1 + 0x40))(param_1);
  q = (unsigned *)(r + 0xb00);
  *q = *q | 0x400;
}
