typedef struct { char b[0x10]; } Elem_8266F128;
extern void fn_82273C88(Elem_8266F128 *);
extern void fn_8265CAA0(void *);
extern void fn_8265CA20(void *);

void *fn_8266F128(Elem_8266F128 *p, unsigned flags)
{
  if ((flags & 2) != 0) {
    void *r = (char *)p - 8;
    int n = *(int *)r;
    int i;
    p = p + n;
    for (i = n - 1; i >= 0; i--) {
      p--;
      fn_82273C88(p);
    }
    if ((flags & 1) != 0) {
      fn_8265CAA0(r);
    }
    return r;
  }
  fn_82273C88(p);
  if ((flags & 1) != 0) {
    fn_8265CA20(p);
  }
  return p;
}
