extern void fn_82F90680(void *);
extern void fn_8265CA20(void *);

void *fn_82F907F0(void *p, unsigned f)
{
  fn_82F90680(p);
  if (f & 1) fn_8265CA20(p);
  return p;
}
