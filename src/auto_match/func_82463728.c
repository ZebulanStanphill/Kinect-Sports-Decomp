extern void *fn_8265C9E0(int);
extern void *fn_82461F28(void *, void *);

void *fn_82463728(void *a)
{
  void *p = fn_8265C9E0(0x2f0);
  if (p != 0) {
    return fn_82461F28(p, a);
  }
  return 0;
}
