struct SP_822EB430 { int p; unsigned rc; };
extern struct SP_822EB430 *fn_82365BD8(void *, void *);
extern void fn_822315A0(unsigned);
extern void fn_82230300(void *, int, int);
extern char lbl_821ADF3C[], lbl_821AE394[];
extern float lbl_821CC160;
struct O_822EB430 { void *vt; int f4; int f8, fc, f10, f14; char sp[8]; int f20; float f24; char str[0x1c]; int f44; };
struct O_822EB430 *fn_822EB430(struct O_822EB430 *o, int a, int b, int c, int d, struct SP_822EB430 *sp, int e)
{
  struct SP_822EB430 *t;
  float fl;
  char buf[16];
  t = fn_82365BD8(buf, sp);
  o->f8 = a;
  o->fc = b;
  o->f10 = c;
  o->f4 = 2;
  o->vt = lbl_821ADF3C;
  o->f14 = d;
  fn_82365BD8(o->sp, t);
  o->f20 = e;
  if (t->rc != 0) fn_822315A0(t->rc);
  fl = lbl_821CC160;
  o->vt = lbl_821AE394;
  o->f24 = fl;
  fn_82230300(o->str, 0, 0);
  o->f44 = 0;
  if (sp->rc != 0) fn_822315A0(sp->rc);
  return o;
}
