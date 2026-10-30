typedef void (*fn_t)(void *);
typedef struct { fn_t *vt; } Lock;
typedef struct { char pad[0x2c]; Lock lock; char pad2[0x98 - 0x30]; int value; } Obj;

extern int fn_82A40CF0(Obj *p);
extern void fn_82A40238(int *hr);

int fn_82A41368(Obj *p, int *out)
{
    Lock *l = &p->lock;
    int hr;
    l->vt[2](l);
    hr = fn_82A40CF0(p);
    if (hr >= 0) {
        *out = p->value;
    }
    l->vt[5](l);
    fn_82A40238(&hr);
    return hr;
}
