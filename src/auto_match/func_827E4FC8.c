typedef struct Obj Obj;
typedef struct { void *f[4]; void (*release)(Obj *o, int flag); } ObjVtbl;
struct Obj { ObjVtbl *vtbl; };
typedef struct { int a; int b; char pad[0x18]; int c; char pad2[0x10]; Obj *obj; } Self;
extern void fn_827DA410(int a, int b);

int fn_827E4FC8(Self *s)
{
  fn_827DA410(s->c, s->b);
  if (s->obj != 0) {
    s->obj->vtbl->release(s->obj, 0);
  }
  return 0x10e1;
}
