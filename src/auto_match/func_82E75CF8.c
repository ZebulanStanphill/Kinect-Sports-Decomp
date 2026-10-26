extern int fn_82E753C0(void *p, int a);
extern void fn_82E75AC8(void *p);
extern int lbl_8215EFB8;

typedef struct {
  void *vt;
  int pad[0x19];
  int a, b, c, d, e;
} S;

S *fn_82E75CF8(S *p, int a, int r5, int r6, int r7, int r8, int *hr)
{
  fn_82E75AC8(p);
  p->a = 0;
  p->vt = &lbl_8215EFB8;
  p->b = 0;
  p->c = 0;
  p->d = 0;
  p->e = 0;
  if (hr == 0 || *hr >= 0) {
    int r = fn_82E753C0(p, a);
    if (hr != 0)
      *hr = r;
  }
  return p;
}
