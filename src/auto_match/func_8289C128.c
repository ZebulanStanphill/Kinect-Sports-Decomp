typedef struct Obj { struct ObjVt *vt; } Obj;
typedef struct ObjVt { void (*dtor)(Obj *o, int flags); void *f4; void *f8; unsigned int (*check)(Obj *o); } ObjVt;
typedef struct S { char pad[0x20]; Obj *o; } S;
extern Obj *fn_8289BFA8(S *s);

void fn_8289C128(S *s)
{
    Obj *r;
    if (s->o != 0 && s->o->vt->check(s->o) != 0) {
        r = fn_8289BFA8(s);
        if (r != 0)
            r->vt->dtor(r, 1);
    }
}
