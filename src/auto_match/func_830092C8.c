typedef struct Obj_830092C8 Obj_830092C8;
typedef struct ObjVt_830092C8 {
  void *slots[45];
  void (*f)(Obj_830092C8 *, int, int, float, int, int);
} ObjVt_830092C8;
struct Obj_830092C8 { ObjVt_830092C8 *vt; int pad[8]; void *f24; };

void fn_830092C8(Obj_830092C8 *o, int a, int b)
{
  if (o->f24 != 0)
    o->vt->f(o, 0, 0, 0.0f, a, b);
}
