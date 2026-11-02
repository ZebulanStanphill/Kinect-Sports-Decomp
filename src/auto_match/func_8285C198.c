typedef struct { char b[0x30]; } E;
extern void fn_83061F30(E *);
extern void fn_8265CAA0(void *);
extern void fn_8265CA20(void *);

void *fn_8285C198(E *p, unsigned flags)
{
  if ((flags & 2) != 0) {
    void *r = (char *)p - 4;
    int n = *(int *)r;
    int i;
    p = p + n;
    for (i = n - 1; i >= 0; i--) {
      p--;
      fn_83061F30(p);
    }
    if ((flags & 1) != 0) {
      fn_8265CAA0(r);
    }
    return r;
  }
  fn_83061F30(p);
  if ((flags & 1) != 0) {
    fn_8265CA20(p);
  }
  return p;
}
