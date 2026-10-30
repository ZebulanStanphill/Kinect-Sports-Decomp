extern void *fn_8265C9E0(int);
extern void *fn_82336A70(void *, void *);

void *fn_82339268(void *a)
{
  void *p = fn_8265C9E0(0x1b0);
  if (p != 0) {
    return fn_82336A70(p, a);
  }
  return 0;
}
