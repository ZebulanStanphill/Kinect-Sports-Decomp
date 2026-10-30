extern void *fn_8265C9E0(int);
extern void *fn_82232B50(void *, void *);

void *fn_82238D20(void *a)
{
  void *p = fn_8265C9E0(0x9cc);
  if (p != 0) {
    return fn_82232B50(p, a);
  }
  return 0;
}
