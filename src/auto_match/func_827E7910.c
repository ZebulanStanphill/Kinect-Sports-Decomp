extern int fn_827D9DA0(int a, int b);

int fn_827E7910(int *p1, int *p2)
{
  int n = 0x80;
  int h = p1[2];
  if (p2[8] != 0) {
    n = 0x100;
  }
  fn_827D9DA0(h, n);
  return p2[8];
}
