extern void fn_82F938B0(void *);
extern void fn_8265CA20(void *);

void *fn_82F938C8(void *p, unsigned f)
{
  fn_82F938B0(p);
  if (f & 1) fn_8265CA20(p);
  return p;
}
