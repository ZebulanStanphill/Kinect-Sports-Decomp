typedef struct E_830682D0 {
  int vt;
  int sub[20];
} E_830682D0;

extern void fn_8305F258(void *);
extern void fn_8265CAA0(void *);
extern void fn_8265CA20(void *);

void *fn_830682D0(E_830682D0 *p, unsigned flags)
{
  if ((flags & 2) != 0) {
    void *r = (char *)p - 4;
    int n = *(int *)r;
    int i;
    p = p + n;
    for (i = n - 1; i >= 0; i--) {
      p--;
      fn_8305F258(p->sub);
    }
    if ((flags & 1) != 0) {
      fn_8265CAA0(r);
    }
    return r;
  }
  fn_8305F258(p->sub);
  if ((flags & 1) != 0) {
    fn_8265CA20(p);
  }
  return p;
}
