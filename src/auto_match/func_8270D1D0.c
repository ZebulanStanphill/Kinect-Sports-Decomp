typedef struct { char b[0x28]; } Elem_8270D1D0;
extern void fn_8270CE68(Elem_8270D1D0 *);
extern void fn_8265CA20(void *);
extern void fn_8267BE38(void *);

void *fn_8270D1D0(Elem_8270D1D0 *p, unsigned flags)
{
  if ((flags & 2) != 0) {
    void *r = (char *)p - 8;
    int n = *(int *)r;
    int i;
    p = p + n;
    for (i = n - 1; i >= 0; i--) {
      p--;
      fn_8270CE68(p);
    }
    if ((flags & 1) != 0) {
      fn_8265CA20(r);
    }
    return r;
  }
  fn_8270CE68(p);
  if ((flags & 1) != 0) {
    fn_8267BE38(p);
  }
  return p;
}
