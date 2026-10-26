typedef struct Obj Obj;
typedef struct { int (*f0)(Obj *); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct { int pad[2]; unsigned int state; Obj *obj; } Arg;
extern void fn_82A4F4E0(Arg *a);

int fn_82A5CA80(void *self, Arg *a)
{
  int r = a->obj->vt->f0(a->obj);
  if (a->state != 5) {
    fn_82A4F4E0(a);
  }
  return r;
}
