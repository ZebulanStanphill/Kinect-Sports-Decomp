extern void *fn_8265C9E0(int);
extern void *fn_823225E0(void *, void *);

void *fn_82326AD0(void *a)
{
  void *p = fn_8265C9E0(0xe0);
  if (p != 0) {
    return fn_823225E0(p, a);
  }
  return 0;
}
