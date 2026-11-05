typedef struct O_82FE71B8 { int p0; int p4; unsigned *f8; unsigned fc; } O_82FE71B8;
extern unsigned fn_82A1E6A0(int, int, int, int);
int fn_82FE71B8(O_82FE71B8 *o)
{
  unsigned *q = &o->fc;
  *q = fn_82A1E6A0(0, 0, 0, 0);
  if (*q == 0) return 2;
  o->f8 = q;
  return 1;
}