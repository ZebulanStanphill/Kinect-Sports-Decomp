extern void *fn_8265C9E0(int);
extern void *fn_822C6310(void *, void *);

void *fn_822C6530(void *a)
{
  void *p = fn_8265C9E0(0x4c);
  if (p != 0) {
    return fn_822C6310(p, a);
  }
  return 0;
}
