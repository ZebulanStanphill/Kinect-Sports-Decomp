extern void fn_8223C478(int, int, int);
extern void fn_828B5C88(int, int, int);
extern void fn_828BEFD0(int, int);
extern void fn_828E9DB8(int, int, int);

struct Obj;
typedef struct VT { void *f0; int (*f4)(struct Obj *); char pad[0x50 - 8]; void (*f50)(struct Obj *, int); } VT;
typedef struct Obj { VT *vt; } Obj;
typedef struct S { char pad[0x6c]; int f6c; char pad2[0x80 - 0x70]; char f80[8]; Obj *o; int f8c; } S;

void fn_828DD890(S *s, int param_2)
{
  int r;
  int v;
  s->o->vt->f4(s->o);
  r = s->o->vt->f4(s->o);
  fn_828BEFD0(r, param_2);
  fn_828B5C88((int)s->f80, s->f6c, param_2);
  v = s->f8c;
  fn_8223C478(param_2, 0x10, 0);
  fn_828E9DB8(param_2, v, 0x10);
  s->o->vt->f50(s->o, param_2);
}
