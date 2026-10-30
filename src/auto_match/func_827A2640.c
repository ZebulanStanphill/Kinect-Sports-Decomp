extern void fn_8267C488(void *);
extern void fn_8267C498(void *);
extern void fn_8267C4F0(void *);
extern char lbl_82015C00[];
typedef struct Obj_827A2640 { void *vt; int f4; void *f8; void *fc; void *f10; void *f14; } Obj;
void fn_827A2640(Obj *o)
{
  void *a, *b, *c, *d;
  { Obj **sub = &o; (*sub)->vt = lbl_82015C00; }
  a = o->f14; if (a != 0) fn_8267C498(a);
  b = o->f10; if (b != 0) fn_8267C4F0(b);
  c = o->fc; if (c != 0) fn_8267C4F0(c);
  d = o->f8; if (d != 0) fn_8267C498(d);
  fn_8267C488(o);
}
