extern void *fn_8265C9E0(int);
extern void *fn_822CD238(void *, void *);

void *fn_822D0020(void *a)
{
  void *p = fn_8265C9E0(0x380);
  if (p != 0) {
    return fn_822CD238(p, a);
  }
  return 0;
}
