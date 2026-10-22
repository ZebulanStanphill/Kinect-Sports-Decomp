typedef struct LockVtbl LockVtbl;
typedef struct Lock { LockVtbl *vt; } Lock;
struct LockVtbl {
    void *s0;
    void *s4;
    void (*Enter)(Lock *l);
    void *sc;
    void *s10;
    void (*Leave)(Lock *l);
};

typedef struct IfaceVtbl IfaceVtbl;
typedef struct Iface { IfaceVtbl *vt; } Iface;
struct IfaceVtbl {
    void *s[8];
    int (*Do)(Iface *i, int a);
};

typedef struct Inner {
    char pad0[0x2c];
    Lock lock;
} Inner;

typedef struct Obj {
    char pad0[0x34];
    Inner *inner;
    char pad38[0x90 - 0x38];
    Iface *iface;
} Obj;

int fn_82A436E0(Obj *o)
{
    int r;

    o->inner->lock.vt->Enter(&o->inner->lock);
    r = o->iface->vt->Do(o->iface, 0);
    o->inner->lock.vt->Leave(&o->inner->lock);
    return r;
}
