extern void *fn_8265C9E0(int);
extern void *fn_823944B0(void *, void *);

void *fn_8239DCF8(void *a)
{
  void *p = fn_8265C9E0(0xc00);
  if (p != 0) {
    return fn_823944B0(p, a);
  }
  return 0;
}
