extern void *fn_8265C9E0(int);
extern void *fn_82449098(void *, void *);

void *fn_82449BD0(void *a)
{
  void *p = fn_8265C9E0(0x4c);
  if (p != 0) {
    return fn_82449098(p, a);
  }
  return 0;
}
