extern void *fn_8265C9E0(int);
extern void *fn_824637A0(void *, void *);

void *fn_82463BA8(void *a)
{
  void *p = fn_8265C9E0(0x1e0);
  if (p != 0) {
    return fn_824637A0(p, a);
  }
  return 0;
}
