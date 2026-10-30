extern void *fn_8265C9E0(int);
extern void *fn_82366BE0(void *, void *);

void *fn_8236D208(void *a)
{
  void *p = fn_8265C9E0(0x16b0);
  if (p != 0) {
    return fn_82366BE0(p, a);
  }
  return 0;
}
