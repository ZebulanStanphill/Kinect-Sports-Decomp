typedef struct { char b[0x10]; } Elem_826840E0;
extern void fn_82683E70(Elem_826840E0 *);
extern void fn_8265CA20(void *);
extern void fn_8265CA20(void *);

void *fn_826840E0(Elem_826840E0 *p, unsigned flags)
{
  if ((flags & 2) != 0) {
    void *r = (char *)p - 4;
    int n = *(int *)r;
    int i;
    p = p + n;
    for (i = n - 1; i >= 0; i--) {
      p--;
      fn_82683E70(p);
    }
    if ((flags & 1) != 0) {
      fn_8265CA20(r);
    }
    return r;
  }
  fn_82683E70(p);
  if ((flags & 1) != 0) {
    fn_8265CA20(p);
  }
  return p;
}
