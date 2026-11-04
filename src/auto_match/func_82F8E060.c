extern void fn_82F8DF28(void *);
extern void fn_8265CA20(void *);

void *fn_82F8E060(void *p, unsigned f)
{
  fn_82F8DF28(p);
  if (f & 1) fn_8265CA20(p);
  return p;
}
