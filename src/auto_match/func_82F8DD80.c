extern void fn_82F8DDC8(void *);
extern void fn_82F8F098(void *);

void *fn_82F8DD80(void *p, unsigned f)
{
  fn_82F8DDC8(p);
  if (f & 1) fn_82F8F098(p);
  return p;
}
