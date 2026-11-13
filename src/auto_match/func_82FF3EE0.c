extern void fn_830016B0(void *);
extern char lbl_8217BB98[];
extern char lbl_8217C940[];
typedef struct Sub { int f7c; unsigned short f80, f82, f84; } Sub;
typedef struct Obj { void *vt; char pad4[0x1c-4]; void *vt1c; char pad20[0x7c-0x20]; Sub sub; } Obj;
Obj *fn_82FF3EE0(Obj *o)
{
  Sub *s;
  fn_830016B0(o);
  o->vt = lbl_8217BB98;
  o->vt1c = lbl_8217C940;
  s = &o->sub;
  s->f80 = 0;
  s->f82 = 0;
  s->f84 = 1;
  s->f7c = 0;
  return o;
}
