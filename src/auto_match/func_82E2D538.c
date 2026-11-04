extern long _InterlockedDecrement(long *);

typedef struct Obj_82E2D538 Obj_82E2D538;
struct Obj_82E2D538 {
    void **vt;
    int pad[19];
    long refs;
};

unsigned fn_82E2D538(Obj_82E2D538 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82E2D538 *, int))o->vt[49])(o, 1);
    }
    return n;
}
