typedef struct { char b[0x30]; } E;
extern void fn_826808D8(E *);
extern void fn_8265CAA0(void *);
extern void fn_8267BE38(void *);

void *fn_82230B30(E *p, unsigned flags)
{
  if ((flags & 2) != 0) {
    void *r = (char *)p - 4;
    int n = *(int *)r;
    int i;
    p = p + n;
    for (i = n - 1; i >= 0; i--) {
      p--;
      fn_826808D8(p);
    }
    if ((flags & 1) != 0) {
      fn_8265CAA0(r);
    }
    return r;
  }
  fn_826808D8(p);
  if ((flags & 1) != 0) {
    fn_8267BE38(p);
  }
  return p;
}
