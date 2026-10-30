extern void *fn_8265C9E0(int);
extern void *fn_822C2468(void *, void *);

void *fn_822C5B80(void *a)
{
  void *p = fn_8265C9E0(0x280);
  if (p != 0) {
    return fn_822C2468(p, a);
  }
  return 0;
}
