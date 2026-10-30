extern void *fn_8265C9E0(int);
extern void *fn_8235AB38(void *, void *);

void *fn_82360EA0(void *a)
{
  void *p = fn_8265C9E0(0x2d00);
  if (p != 0) {
    return fn_8235AB38(p, a);
  }
  return 0;
}
