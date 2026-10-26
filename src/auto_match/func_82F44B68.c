extern int fn_82F44A80(int *, int, int);

int *fn_82F44B68(int *p, int *out, int a, int b)
{
  p[0] = 0;
  p[2] = 0;
  p[1] = 0;
  p[4] = -1;
  p[3] = -1;
  p[5] = 0;
  *out = fn_82F44A80(p, a, b);
  return p;
}
