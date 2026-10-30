extern void *fn_8265C9E0(int);
extern void *fn_82258E80(void *, void *);

void *fn_8225A078(void *a)
{
  void *p = fn_8265C9E0(0x630);
  if (p != 0) {
    return fn_82258E80(p, a);
  }
  return 0;
}
