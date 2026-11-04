extern long _InterlockedDecrement(long *);

typedef struct Obj_82E2C898 Obj_82E2C898;
struct Obj_82E2C898 {
    void **vt;
    int pad[11];
    long refs;
};

unsigned fn_82E2C898(Obj_82E2C898 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82E2C898 *, int))o->vt[39])(o, 1);
    }
    return n;
}
