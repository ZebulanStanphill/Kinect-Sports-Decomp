typedef struct Obj Obj;
typedef struct ObjVt { void *s0, *s4, *s8, *sc, *s10; void (*f14)(Obj *o); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct Self { int a, b; Obj *o; } Self;
extern void fn_82CFAE20(Self *p);

void fn_82CFAF68(Self *p)
{
    fn_82CFAE20(p);
    if (p->o != 0) {
        p->o->vt->f14(p->o);
    }
}
