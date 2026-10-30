extern void *fn_8265C9E0(int);
extern void *fn_822E4000(void *, void *);

void *fn_822E7D80(void *a)
{
  void *p = fn_8265C9E0(0x2e0);
  if (p != 0) {
    return fn_822E4000(p, a);
  }
  return 0;
}
