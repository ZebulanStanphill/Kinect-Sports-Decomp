extern unsigned int fn_82A36B70(int, int, int *, int, unsigned int);

int fn_82A2B6B0(int a, int b, int *c, int d, unsigned int e)
{
  unsigned int r;
  if (e == 0) {
    *c = 0;
    return 0;
  }
  r = fn_82A36B70(a, b, c, d, e);
  switch (r) {
  case 0:
    return 0;
  case 1:
    return 0x8007000e;
  case 6:
    return 0x81de2001;
  default:
    return 0x80004005;
  }
}
