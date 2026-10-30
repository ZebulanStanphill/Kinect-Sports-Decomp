extern void *fn_8265C9E0(int);
extern void *fn_825AA6B0(void *, void *);

void *fn_825923E8(void *a)
{
  void *p = fn_8265C9E0(0x130);
  if (p != 0) {
    return fn_825AA6B0(p, a);
  }
  return 0;
}
