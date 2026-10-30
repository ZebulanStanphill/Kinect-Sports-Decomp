extern void *fn_8265C9E0(int);
extern void *fn_82255478(void *, void *);

void *fn_82256550(void *a)
{
  void *p = fn_8265C9E0(0x544);
  if (p != 0) {
    return fn_82255478(p, a);
  }
  return 0;
}
