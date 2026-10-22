typedef unsigned int uint;
extern int fn_827E0658();
extern int fn_827E11C0();

uint fn_827D9410(int param_1, uint *param_2)
{
  uint *p;
  uint r;
  uint a[2];
  uint b[2];

  fn_827E0658(a, param_1, param_2);
  r = a[0];
  if (r == *(uint *)(param_1 + 4)) {
    a[0] = *param_2;
    a[1] = 0;
    p = (uint *)fn_827E11C0(b, param_1, a);
    r = *p;
  }
  return r + 0xc;
}
