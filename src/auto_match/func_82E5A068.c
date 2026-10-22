typedef struct IUnk IUnk;
typedef struct {
    int (*QueryInterface)(IUnk *, void *, void **);
    unsigned int (*AddRef)(IUnk *);
    unsigned int (*Release)(IUnk *);
} IUnkVtbl;
struct IUnk { IUnkVtbl *vt; };

typedef struct {
    char pad0[0xc];
    void *ready;
    char pad10[0x88 - 0x10];
    unsigned int obj;
} Self;

int fn_82E5A068(Self *self, IUnk **out)
{
    IUnk *p;
    if (self->ready == 0) {
        return 0xc00d36b6;
    }
    if (out == 0) {
        return 0x80070057;
    }
    if (self->obj != 0) {
        ((IUnk *)self->obj)->vt->AddRef((IUnk *)self->obj);
        p = (IUnk *)self->obj;
    } else {
        p = 0;
    }
    *out = p;
    return 0;
}
