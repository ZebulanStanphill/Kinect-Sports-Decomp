extern void *fn_8265C9E0(int);
extern void *fn_822BD508(void *, void *);

void *fn_822C1B20(void *a)
{
  void *p = fn_8265C9E0(0x7f0);
  if (p != 0) {
    return fn_822BD508(p, a);
  }
  return 0;
}
