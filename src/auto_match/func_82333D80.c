extern void *fn_8265C9E0(int);
extern void *fn_82332468(void *, void *);

void *fn_82333D80(void *a)
{
  void *p = fn_8265C9E0(0xc0);
  if (p != 0) {
    return fn_82332468(p, a);
  }
  return 0;
}
