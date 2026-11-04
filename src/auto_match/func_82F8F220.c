extern void fn_82F8F000(void *);
extern void fn_8265CA20(void *);

void *fn_82F8F220(void *p, unsigned f)
{
  fn_82F8F000(p);
  if (f & 1) fn_8265CA20(p);
  return p;
}
