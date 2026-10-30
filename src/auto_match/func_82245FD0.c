extern void *fn_8265C9E0(int);
extern void *fn_8224CA90(void *, void *);

void *fn_82245FD0(void *a)
{
  void *p = fn_8265C9E0(0x870);
  if (p != 0) {
    return fn_8224CA90(p, a);
  }
  return 0;
}
