typedef struct E_83062CA0 {
  int vt;
  int sub[5];
} E_83062CA0;

extern void fn_82670C10(void *);
extern void fn_8265CAA0(void *);
extern void fn_8265CA20(void *);

void *fn_83062CA0(E_83062CA0 *p, unsigned flags)
{
  if ((flags & 2) != 0) {
    void *r = (char *)p - 4;
    int n = *(int *)r;
    int i;
    p = p + n;
    for (i = n - 1; i >= 0; i--) {
      p--;
      fn_82670C10(p->sub);
    }
    if ((flags & 1) != 0) {
      fn_8265CAA0(r);
    }
    return r;
  }
  fn_82670C10(p->sub);
  if ((flags & 1) != 0) {
    fn_8265CA20(p);
  }
  return p;
}
