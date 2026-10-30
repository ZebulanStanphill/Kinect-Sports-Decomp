extern void *fn_8265C9E0(int);
extern void *fn_824E1200(void *, void *);

void *fn_824E2178(void *a)
{
  void *p = fn_8265C9E0(0x100);
  if (p != 0) {
    return fn_824E1200(p, a);
  }
  return 0;
}
