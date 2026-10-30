typedef struct Obj Obj;
typedef struct { void *s0; unsigned int (*AddRef)(Obj *); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct { char pad[0xc]; Obj *obj; } P;

int fn_82E58158(P *p, Obj **out)
{
    if (p->obj == 0)
        return 0xc00d36b6;
    if (out == 0)
        return 0x80070057;
    *out = p->obj;
    if (*out)
        (*out)->vt->AddRef(*out);
    return 0;
}
