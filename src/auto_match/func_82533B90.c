typedef struct Obj Obj;
typedef struct ObjVt { unsigned char (*f0)(Obj *o); } ObjVt;
struct Obj { ObjVt *vt; };

int fn_82533B90(int p)
{
    Obj *o = *(Obj **)(p + 8);
    return o->vt->f0(o) == 0;
}
