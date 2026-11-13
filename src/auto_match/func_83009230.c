typedef struct Obj_83009230 Obj_83009230;
typedef struct ObjVt_83009230 {
  void *slots[43];
  void (*f)(Obj_83009230 *, int, int, float, int, int);
} ObjVt_83009230;
struct Obj_83009230 { ObjVt_83009230 *vt; int pad[8]; void *f24; };

void fn_83009230(Obj_83009230 *o, int a, int b)
{
  if (o->f24 != 0)
    o->vt->f(o, 0, 0, 0.0f, a, b);
}
