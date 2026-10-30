extern void *fn_8265C9E0(int);
extern void *fn_824042B0(void *, void *);

void *fn_822563E8(void *a)
{
  void *p = fn_8265C9E0(0x388);
  if (p != 0) {
    return fn_824042B0(p, a);
  }
  return 0;
}
