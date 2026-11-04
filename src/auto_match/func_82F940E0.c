extern void fn_82F94130(void *);
extern void fn_8265CA20(void *);

void *fn_82F940E0(void *p, unsigned f)
{
  fn_82F94130(p);
  if (f & 1) fn_8265CA20(p);
  return p;
}
