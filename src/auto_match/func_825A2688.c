extern void fn_82522838(void);
extern int fn_82522CF8(void *, void *);
extern int fn_8259A230(void);
extern int *fn_8259C458(int);
extern void fn_8259C5D8(int *, int, int);
extern void fn_8259C738(int *);
extern int fn_82A1BB18(void);
extern int fn_82549798(void *, int, int, int);
extern void XMemSet(int, int, void *);
extern int lbl_8326B7D0[];
extern int *lbl_832767CC;

typedef struct Obj_825A2688 {
  int f0, f4, f8, fc, f10, f14;
  void *f18, *f1c, *f20;
  char pad24[0xc];
  int f30, f34;
} Obj_825A2688;

void fn_825A2688(Obj_825A2688 *o)
{
  int *piVar1;
  int *e;
  int r;
  void *src;
  unsigned old;
  unsigned v;

  if (o->f18 != 0) {
    o->fc = fn_82549798(o->f18, o->f30, 4, 0);
    o->f0 = o->fc;
  }
  if (o->f1c != 0) {
    o->f10 = fn_82549798(o->f1c, o->f34, 0x404, 0);
    o->f4 = o->f10;
  }
  src = o->f20;
  if (src != 0) {
    if (lbl_832767CC == 0) {
      fn_82522838();
      if (lbl_832767CC == 0)
        fn_82522838();
    }
    piVar1 = lbl_832767CC;
    if (*piVar1 == 0)
      fn_82522838();
    fn_8259C5D8(piVar1 + 2, 1, fn_82A1BB18() + 1);
    fn_82A1BB18();
    e = fn_8259C458(lbl_8326B7D0[fn_8259A230()]);
    old = e[10];
    e[10] = 0x10;
    r = fn_82522CF8(e, src);
    v = old;
    if (old > 0x10)
      v = 0x10;
    e[10] = v;
    fn_82A1BB18();
    fn_8259C738(piVar1 + 2);
    o->f14 = r;
    o->f8 = r;
    XMemSet(r, 0, o->f20);
  }
}
