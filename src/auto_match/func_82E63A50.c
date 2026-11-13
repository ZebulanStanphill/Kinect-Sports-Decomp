extern long _InterlockedDecrement(long *);

typedef struct Obj_82E63A50 Obj_82E63A50;
struct Obj_82E63A50 {
    void **vt;
    int pad;
    long refs;
};

long fn_82E63A50(Obj_82E63A50 *o)
{
    long n = _InterlockedDecrement(&o->refs);
    if (n == 0) {
        ((void (*)(Obj_82E63A50 *))o->vt[1])(o);
        ((void (*)(Obj_82E63A50 *, int))o->vt[11])(o, 1);
    }
    return n;
}
