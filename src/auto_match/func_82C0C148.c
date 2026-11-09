typedef struct Elem_82C0C148 { int data[15]; } Elem_82C0C148;

extern void fn_82C04E90(Elem_82C0C148 *e);
extern void fn_82C04BD8(void *p);

void *fn_82C0C148(Elem_82C0C148 *p, unsigned flags)
{
  if ((flags & 2) != 0) {
    void *r = (char *)p - 4;
    int n = *(int *)r;
    int i;
    p = p + n;
    for (i = n - 1; i >= 0; i--) {
      p--;
      fn_82C04E90(p);
    }
    if ((flags & 1) != 0) {
      fn_82C04BD8(r);
    }
    return r;
  }
  fn_82C04E90(p);
  if ((flags & 1) != 0) {
    fn_82C04BD8(p);
  }
  return p;
}
