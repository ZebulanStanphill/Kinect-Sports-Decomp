extern void *fn_8265C9E0(int);
extern void *fn_824D3A00(void *, void *);

void *fn_824D4A70(void *a)
{
  void *p = fn_8265C9E0(0x190);
  if (p != 0) {
    return fn_824D3A00(p, a);
  }
  return 0;
}
