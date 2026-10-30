extern void *fn_8265C9E0(int);
extern void *fn_824A69C8(void *, void *);

void *fn_824A78F0(void *a)
{
  void *p = fn_8265C9E0(0x40);
  if (p != 0) {
    return fn_824A69C8(p, a);
  }
  return 0;
}
