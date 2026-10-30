extern void *fn_8265C9E0(int);
extern void *fn_8236E1D0(void *, void *);

void *fn_823767D0(void *a)
{
  void *p = fn_8265C9E0(0xc50);
  if (p != 0) {
    return fn_8236E1D0(p, a);
  }
  return 0;
}
