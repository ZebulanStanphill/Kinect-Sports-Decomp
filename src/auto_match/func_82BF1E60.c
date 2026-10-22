extern void fn_82BE51E8(void *p, const char *name);
extern char lbl_820EB5B4[];
extern char lbl_820EB5B8[];
extern char lbl_82197048[];

struct sub {
  void *vt;
  int pad[4];
};

struct obj {
  void *vt;
  int a;
  int b;
  struct sub s;
  int f20, f24, f28, f2c, f30, f34, f38, f3c, f40;
};

struct obj *fn_82BF1E60(struct obj *o)
{
  o->a = 0;
  o->vt = lbl_82197048;
  o->b = 0;
  fn_82BE51E8(&o->s, "TransactionHTTP");
  o->f20 = 0;
  o->f24 = 0;
  o->f28 = 0;
  o->vt = lbl_820EB5B8;
  o->s.vt = lbl_820EB5B4;
  o->f2c = 0;
  o->f30 = 0;
  o->f34 = 0;
  o->f38 = 0;
  o->f3c = 0;
  o->f40 = 0;
  return o;
}
