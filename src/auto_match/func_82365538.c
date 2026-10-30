extern void *fn_8265C9E0(int);
extern void *fn_82362340(void *, void *);

void *fn_82365538(void *a)
{
  void *p = fn_8265C9E0(0xa90);
  if (p != 0) {
    return fn_82362340(p, a);
  }
  return 0;
}
