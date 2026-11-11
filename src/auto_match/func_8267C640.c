typedef struct { char b[0xc]; } Elem_8267C640;
extern void fn_8267C540(Elem_8267C640 *);
extern void fn_8265CA20(void *);
extern void fn_8265CA20(void *);

void *fn_8267C640(Elem_8267C640 *p, unsigned flags)
{
  if ((flags & 2) != 0) {
    void *r = (char *)p - 4;
    int n = *(int *)r;
    int i;
    p = p + n;
    for (i = n - 1; i >= 0; i--) {
      p--;
      fn_8267C540(p);
    }
    if ((flags & 1) != 0) {
      fn_8265CA20(r);
    }
    return r;
  }
  fn_8267C540(p);
  if ((flags & 1) != 0) {
    fn_8265CA20(p);
  }
  return p;
}
