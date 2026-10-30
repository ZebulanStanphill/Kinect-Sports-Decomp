extern void *fn_8265C9E0(int);
extern void *fn_822BA2E8(void *, void *);

void *fn_822BD230(void *a)
{
  void *p = fn_8265C9E0(0x420);
  if (p != 0) {
    return fn_822BA2E8(p, a);
  }
  return 0;
}
