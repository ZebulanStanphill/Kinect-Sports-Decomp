extern void *fn_8265C9E0(int);
extern void *fn_82246E28(void *, void *);

void *fn_82246100(void *a)
{
  void *p = fn_8265C9E0(0x88);
  if (p != 0) {
    return fn_82246E28(p, a);
  }
  return 0;
}
