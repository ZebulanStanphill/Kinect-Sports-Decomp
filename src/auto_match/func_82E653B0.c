extern long _InterlockedDecrement(long *);

typedef struct Obj_82E653B0 Obj_82E653B0;
struct Obj_82E653B0 {
    void **vt;
    int pad[1];
    long refs;
};

long fn_82E653B0(Obj_82E653B0 *o)
{
    long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82E653B0 *, int))o->vt[8])(o, 1);
    }
    return n;
}
