typedef struct Obj Obj;
typedef struct { void (*f[8])(Obj *); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct { char pad[0x8]; Obj *obj; } Self;

void fn_824C0310(Self *s)
{
    Obj *o = s->obj;
    if (o != 0) {
        o->vt->f[1](o);
    }
}
