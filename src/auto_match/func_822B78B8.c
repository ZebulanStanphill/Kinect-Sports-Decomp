extern void *fn_8265C9E0(int);
extern void *fn_822B54F8(void *, void *);

void *fn_822B78B8(void *a)
{
  void *p = fn_8265C9E0(0x1a0);
  if (p != 0) {
    return fn_822B54F8(p, a);
  }
  return 0;
}
