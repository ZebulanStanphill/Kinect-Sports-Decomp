extern long _InterlockedDecrement(long *);

typedef struct Obj_82F3BB68 Obj_82F3BB68;
struct Obj_82F3BB68 {
    void **vt;
    int pad[1];
    long refs;
};

unsigned fn_82F3BB68(Obj_82F3BB68 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82F3BB68 *, int))o->vt[22])(o, 1);
    }
    return n;
}
