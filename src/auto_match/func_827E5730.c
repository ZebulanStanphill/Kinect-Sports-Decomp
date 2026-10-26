typedef struct Obj Obj;
typedef struct { void *f[4]; void (*release)(Obj *o, int flag); } ObjVtbl;
struct Obj { ObjVtbl *vtbl; };
typedef struct { char pad[0x20]; int c; char pad2[0x10]; int d; Obj *obj; } Self;
extern void fn_827DAC00(int a, int b);

int fn_827E5730(Self *s)
{
  fn_827DAC00(s->c, s->d);
  if (s->obj != 0) {
    s->obj->vtbl->release(s->obj, 0);
  }
  return 0x10e1;
}
