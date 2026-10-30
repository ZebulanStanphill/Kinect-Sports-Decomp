extern void *fn_8265C9E0(int);
extern void *fn_82461240(void *, void *);

void *fn_82461EE0(void *a)
{
  void *p = fn_8265C9E0(0x1f0);
  if (p != 0) {
    return fn_82461240(p, a);
  }
  return 0;
}
