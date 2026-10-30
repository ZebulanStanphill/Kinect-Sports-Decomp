extern void *fn_8265C9E0(int);
extern void *fn_822AF0A8(void *, void *);

void *fn_822AF1B8(void *a)
{
  void *p = fn_8265C9E0(0x50);
  if (p != 0) {
    return fn_822AF0A8(p, a);
  }
  return 0;
}
