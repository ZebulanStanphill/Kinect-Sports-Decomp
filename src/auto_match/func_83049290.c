typedef struct Obj Obj;
typedef struct ObjVtbl {
  void *fn[9];
  void (*fn24)(Obj *);
} ObjVtbl;
typedef struct Sub Sub;
struct Obj {
  ObjVtbl *vtbl;
  int f4[9];
  Sub *f28;
  int f2c[3];
  void *f38;
};

extern void fn_82FA52E0(int, void *);
extern void fn_8307DE78(Sub *);
extern void fn_8307E5A8(Sub *);
extern void fn_8307E6E0(Sub *);
extern int lbl_831BC770;

void fn_83049290(Obj *p, int mode)
{
  if (mode == 0) {
    p->vtbl->fn24(p);
  } else if (mode == 1) {
    fn_8307DE78(p->f28);
    fn_8307E6E0(p->f28);
    fn_8307E5A8(p->f28);
    p->f28 = 0;
    if (p->f38 != 0) {
      fn_82FA52E0(lbl_831BC770, p->f38);
      p->f38 = 0;
    }
  }
}
