extern void fn_82F8F108(void *);
extern void fn_8265CA20(void *);

void *fn_82F8F268(void *p, unsigned f)
{
  fn_82F8F108(p);
  if (f & 1) fn_8265CA20(p);
  return p;
}
