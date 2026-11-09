typedef struct {
  void *data;
  int f04;
  int f08;
} Elem_829229F8;

extern void fn_8265C990(void *p, unsigned int tag);

void *fn_829229F8(Elem_829229F8 *p, unsigned flags)
{
  if ((flags & 2) != 0) {
    void *r = (char *)p - 4;
    int n = *(int *)r;
    int i;
    p = p + n;
    for (i = n - 1; i >= 0; i--) {
      p--;
      fn_8265C990(p->data, 0x24810000);
    }
    if ((flags & 1) != 0) {
      fn_8265C990(r, 0x24810000);
    }
    return r;
  }
  fn_8265C990(p->data, 0x24810000);
  if ((flags & 1) != 0) {
    fn_8265C990(p, 0x24810000);
  }
  return p;
}
