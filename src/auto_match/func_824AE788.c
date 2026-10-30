extern void *fn_8265C9E0(int);
extern void *fn_824ADF58(void *, void *);

void *fn_824AE788(void *a)
{
  void *p = fn_8265C9E0(0x40);
  if (p != 0) {
    return fn_824ADF58(p, a);
  }
  return 0;
}
