typedef struct { void **vt; } VT_82681B80;
typedef struct { int f0; int f4; int rc; } Rc_82681B80;
extern int fn_82681728();
extern int fn_826944C8();

int fn_82681B80(VT_82681B80 *self, unsigned **param_2, int param_3, int param_4)
{
  Rc_82681B80 *h;
  int r;
  Rc_82681B80 *p;
  fn_82681728(&h, (int)*param_2 + 0x254);
  r = ((int (*)(void *, void *, void *, int))self->vt[0x2c / 4])(self, param_2, &h, param_4);
  p = h;
  if (--p->rc == 0) {
    fn_826944C8(p);
  }
  return r;
}
