typedef struct Obj Obj;
typedef struct ObjVt { void *f0; void (*f4)(Obj *o); } ObjVt;
struct Obj { ObjVt *vt; char pad[0x38]; };

Obj *fn_82C0BDA8(char *p)
{
    Obj *o = *(Obj **)(p + 0x30) + *(int *)(p + 0x3c);
    o->vt->f4(o);
    return o;
}
