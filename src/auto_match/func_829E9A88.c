extern int fn_829E8C48(int *self, int a, int b, int c, int d, int e, int f);
extern unsigned int lbl_820798D0;

int *fn_829E9A88(int *p, int a, int b, int c, int d)
{
  p[1] = 0;
  p[2] = 0;
  *(unsigned int **)p = &lbl_820798D0;
  p[3] = 1;
  p[4] = 0;
  p[5] = 0;
  p[6] = 1;
  p[7] = 1;
  p[8] = 1;
  p[9] = 0;
  p[10] = 0;
  p[11] = 0;
  p[12] = 4;
  fn_829E8C48(p, a, b, c, 4, 2, d);
  return p;
}
