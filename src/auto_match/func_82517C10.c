typedef struct Fn Fn;
typedef struct { int (*f0)(Fn *, void *); } FnVt;
struct Fn { FnVt *vt; };
typedef struct { char pad[0x10]; Fn *target; } Src;
typedef struct { char pad[0x10]; int res; } Sub;
typedef struct {
  char pad0[0x1c];
  int a1c;
  int a20;
  unsigned char a24;
  char pad25[3];
  int a28;
  int a2c;
  int a30;
  int a34;
  Sub sub38;
} Obj;
extern void fn_8223B688();

Obj *fn_82517C10(Obj *o, int p2, int p3, int p4, int p5, int p6, int p7, int p8, Src *s)
{
  Sub *sub;
  fn_8223B688();
  o->a1c = p3;
  sub = &o->sub38;
  o->a20 = p4;
  o->a24 = 0;
  o->a28 = p5;
  o->a2c = p6;
  o->a30 = p7;
  o->a34 = p8;
  if (s->target == 0) {
    sub->res = 0;
  } else {
    if ((void *)s->target == (void *)s) {
      sub->res = s->target->vt->f0(s->target, sub);
    } else {
      sub->res = s->target->vt->f0(s->target, 0);
    }
  }
  return o;
}
