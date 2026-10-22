typedef struct Obj {
  void *vtbl;
  int f4[3];
  void *f10;
  void *f14;
  void *f18;
} Obj;

extern void fn_8265CA20(void *);
extern void fn_82FA5190(int, void *);
extern void fn_83008310(Obj *);
extern void fn_83021680(Obj *);
extern char lbl_8217C594[];
extern int lbl_831BC768;

Obj *fn_83021CC0(Obj *p, unsigned int flags)
{
  p->vtbl = lbl_8217C594;
  fn_83021680(p);
  if (p->f10 != 0) {
    p->f14 = p->f10;
    fn_82FA5190(lbl_831BC768, p->f10);
    p->f10 = 0;
    p->f14 = 0;
    p->f18 = 0;
  }
  fn_83008310(p);
  if (flags & 1) {
    fn_8265CA20(p);
  }
  return p;
}
