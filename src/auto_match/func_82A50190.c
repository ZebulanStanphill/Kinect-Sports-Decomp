typedef struct Obj Obj;
typedef struct { void *slots[21]; int (*GetState)(Obj *); } ObjVtbl;
struct Obj { ObjVtbl *vt; };

int fn_82A50190(Obj *o)
{
    if (o->vt->GetState(o) == 0 || o->vt->GetState(o) == 1 || o->vt->GetState(o) == 2)
        return 1;
    return 0;
}
