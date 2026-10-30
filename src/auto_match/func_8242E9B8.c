extern void *fn_8265C9E0(int);
extern void *fn_8242AB58(void *, void *);

void *fn_8242E9B8(void *a)
{
  void *p = fn_8265C9E0(0x17c);
  if (p != 0) {
    return fn_8242AB58(p, a);
  }
  return 0;
}
