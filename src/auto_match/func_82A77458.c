typedef struct Obj { struct ObjVt *vt; } Obj;
typedef struct ObjVt { void (*f0)(Obj *); void (*f1)(Obj *); void (*f2)(Obj *); } ObjVt;

void fn_82A77458(char *p)
{
  Obj *o;
  if (*(void **)(p + 0xb8) != 0) {
    *(int *)(p + 0xc0) = 0;
  }
  o = *(Obj **)(p + 0x108);
  if (o != 0) {
    o->vt->f2(o);
  }
}
