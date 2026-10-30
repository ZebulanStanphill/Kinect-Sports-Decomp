extern void *fn_8265C9E0(int);
extern void *fn_822FC818(void *, void *);

void *fn_822FF1C0(void *a)
{
  void *p = fn_8265C9E0(0xd0);
  if (p != 0) {
    return fn_822FC818(p, a);
  }
  return 0;
}
