extern void *fn_82FA5060(int, int);
extern void fn_83008328(void *, int);
extern void fn_8300E460(void *);
extern void fn_83015E68(void *, void *);
extern char lbl_8217C564[];
extern int lbl_831BC768;
extern char *lbl_832642E0;

typedef struct Obj {
  void *vtbl;
  int f4[3];
  int f10;
  int f14;
} Obj;

Obj *fn_8301E958(int a)
{
  Obj *p;

  p = (Obj *)fn_82FA5060(lbl_831BC768, 0x20);
  if (p != 0) {
    fn_83008328(p, a);
    p->f10 = 0;
    p->vtbl = lbl_8217C564;
    fn_8300E460(&p->f14);
  } else {
    p = 0;
  }
  if (p != 0) {
    fn_83015E68(lbl_832642E0 + 0x1628, p);
  }
  return p;
}
