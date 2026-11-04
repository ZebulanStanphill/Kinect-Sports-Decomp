extern void fn_82F8ED98(void *);
extern void fn_82F8F098(void *);

void *fn_82F8ED50(void *p, unsigned f)
{
  fn_82F8ED98(p);
  if (f & 1) fn_82F8F098(p);
  return p;
}
