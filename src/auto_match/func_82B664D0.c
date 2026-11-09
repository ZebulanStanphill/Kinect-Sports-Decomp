typedef struct {
  void *data;
  int f04;
  int f08;
} Elem_82B664D0;

extern void fn_8265CA20(void *);

void *fn_82B664D0(Elem_82B664D0 *p, unsigned flags)
{
  if ((flags & 2) != 0) {
    void *r = (char *)p - 4;
    int n = *(int *)r;
    int i;
    p = p + n;
    for (i = n - 1; i >= 0; i--) {
      p--;
      fn_8265CA20(p->data);
    }
    if ((flags & 1) != 0) {
      fn_8265CA20(r);
    }
    return r;
  }
  fn_8265CA20(p->data);
  if ((flags & 1) != 0) {
    fn_8265CA20(p);
  }
  return p;
}
