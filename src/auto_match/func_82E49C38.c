typedef struct IUnk IUnk;
struct IUnk { unsigned long (**vt)(IUnk *); };
typedef struct { char pad[0x2c]; IUnk *obj; } Obj;

int fn_82E49C38(Obj *p, IUnk **out)
{
    if (p->obj == 0) {
        return 0x80004003;
    }
    *out = p->obj;
    if (p->obj) {
        p->obj->vt[1](p->obj);
    }
    return 0;
}
