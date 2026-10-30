typedef struct Obj Obj;
typedef struct ObjVt { void *s[11]; int (*f2c)(Obj *o); } ObjVt;
struct Obj { ObjVt *vt; int pad[28]; int x74; };

void fn_82BFFAC0(Obj *o)
{
    if (o->vt->f2c(o) >= 0) {
        o->x74 = 1;
    }
}
