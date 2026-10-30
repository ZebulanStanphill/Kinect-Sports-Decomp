extern void *fn_8265C9E0(int);
extern void *fn_82339728(void *, void *);

void *fn_8233D2E8(void *a)
{
  void *p = fn_8265C9E0(0x100);
  if (p != 0) {
    return fn_82339728(p, a);
  }
  return 0;
}
