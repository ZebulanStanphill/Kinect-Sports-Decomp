typedef struct IUnk IUnk;
typedef struct {
    void *QueryInterface;
    unsigned long (*AddRef)(IUnk *self);
} IUnkVtbl;
struct IUnk { IUnkVtbl *vtbl; };

typedef struct {
    char pad[0x2c];
    IUnk *obj;
    __int64 time;
} Obj;

int fn_82E6EEC0(Obj *o, IUnk **out, __int64 *time)
{
    IUnk *p;

    if (out == 0) {
        return 0x80004003;
    }
    p = o->obj;
    *out = p;
    if (p != 0) {
        p->vtbl->AddRef(p);
    }
    if (time != 0) {
        *time = o->time;
    }
    return 0;
}
