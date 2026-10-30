extern void *fn_8265C9E0(int);
extern void *fn_82232728(void *, void *);

void *fn_82252E20(void *a)
{
  void *p = fn_8265C9E0(0x924);
  if (p != 0) {
    return fn_82232728(p, a);
  }
  return 0;
}
