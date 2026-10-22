extern void fn_8267BE38(void *p);
extern void fn_8267C498(void *p);
extern void fn_8269A608(void *p);
extern void fn_826C1AD8(void *p);
extern void fn_826C3198(void *p);
extern unsigned int lbl_8200B760;
extern unsigned int lbl_8200B7F0;

typedef struct RC { int count; } RC;

typedef struct Obj {
  void *vtbl;
  int f4, f8, fc;
  void *vtbl2;
  int f14, f18, f1c, f20, f24, f28, f2c, f30;
  RC *rc;
  void *f38;
  void *f3c;
  int f40, f44, f48, f4c;
  int f50;
} Obj;

void fn_826C4248(Obj *p)
{
  RC *rc;

  fn_826C3198(&p->f50);
  fn_8267BE38(p->f3c);
  if (p->f38 != 0) {
    fn_8267C498(p->f38);
  }
  rc = p->rc;
  if (rc != 0) {
    if (--rc->count <= 0) {
      fn_8269A608(rc);
      fn_8267BE38(rc);
    }
  }
  p->vtbl = &lbl_8200B760;
  p->vtbl2 = &lbl_8200B7F0;
  fn_826C1AD8(p);
}
