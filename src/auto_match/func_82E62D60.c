extern long _InterlockedDecrement(long *);

typedef struct Obj_82E62D60 Obj_82E62D60;
struct Obj_82E62D60 {
    void **vt;
    int pad[18];
    long refs;
};

long fn_82E62D60(Obj_82E62D60 *o)
{
    long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82E62D60 *, int))o->vt[38])(o, 1);
    }
    return n;
}
