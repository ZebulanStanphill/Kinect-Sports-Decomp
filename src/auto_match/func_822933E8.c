typedef struct Obj Obj;
typedef struct ObjVt { void (*dtor)(Obj *self, int flags); } ObjVt;
struct Obj { ObjVt *vt; int pad[8]; };

void fn_822933E8(Obj *p, Obj *end)
{
    Obj *it;
    for (it = p; it != end; it++)
        it->vt->dtor(it, 0);
}
