typedef struct Obj Obj;
typedef struct { void (*f[8])(Obj *); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct { char pad[0x58]; Obj *obj; } Self;

void fn_82233DB8(Self *s)
{
    Obj *o = s->obj;
    if (o != 0) {
        o->vt->f[2](o);
    }
}
