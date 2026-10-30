typedef struct Obj Obj;
typedef struct { void *f0, *f4, *f8; int (*kind)(Obj *); } ObjVt;
struct Obj { ObjVt *vt; int pad[7]; Obj *next; };

int fn_8269A3C0(Obj *o)
{
    int r = 0;
    while (o != 0) {
        r = o->vt->kind(o);
        if (r > 2) break;
        o = o->next;
    }
    return r;
}
