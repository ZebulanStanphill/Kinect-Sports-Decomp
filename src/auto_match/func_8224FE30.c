extern void *fn_8265C9E0(int);
extern void *fn_8224F4A8(void *, void *);

void *fn_8224FE30(void *a)
{
  void *p = fn_8265C9E0(0x54);
  if (p != 0) {
    return fn_8224F4A8(p, a);
  }
  return 0;
}
