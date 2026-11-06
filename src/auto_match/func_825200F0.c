extern void fn_827D9670(int, unsigned *, __int64 *, unsigned *);

int fn_825200F0(int param_1, unsigned *param_2)
{
  unsigned a;
  unsigned k;
  __int64 z;
  unsigned v = *param_2;
  unsigned t;
  if (v != 0) t = v >> 24; else t = 0x7a;
  a = t; k = v; z = 0;
  fn_827D9670(param_1, &k, &z, &a);
  return param_1;
}
