extern int fn_827E0658();
extern int fn_827E11C0();

unsigned int fn_827D9410(int param_1, unsigned int *param_2)
{
  unsigned int *p;
  unsigned int r;
  unsigned int a[2];
  unsigned int b[2];

  fn_827E0658(a, param_1, param_2);
  r = a[0];
  if (r == *(unsigned int *)(param_1 + 4)) {
    a[0] = *param_2;
    a[1] = 0;
    p = (unsigned int *)fn_827E11C0(b, param_1, a);
    r = *p;
  }
  return r + 0xc;
}
