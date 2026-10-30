extern void *fn_8265C9E0(int);
extern void *fn_82244FA8(void *, void *);

void *fn_82246018(void *a)
{
  void *p = fn_8265C9E0(0xb70);
  if (p != 0) {
    return fn_82244FA8(p, a);
  }
  return 0;
}
