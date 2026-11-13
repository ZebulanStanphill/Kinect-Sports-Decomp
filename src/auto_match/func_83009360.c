typedef struct Obj_83009360 Obj_83009360;
typedef struct ObjVt_83009360 {
  void *slots[47];
  void (*f)(Obj_83009360 *, int, int, float, int, int);
} ObjVt_83009360;
struct Obj_83009360 { ObjVt_83009360 *vt; int pad[8]; void *f24; };

void fn_83009360(Obj_83009360 *o, int a, int b)
{
  if (o->f24 != 0)
    o->vt->f(o, 0, 0, 0.0f, a, b);
}
