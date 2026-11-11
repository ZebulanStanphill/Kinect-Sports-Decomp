extern long _InterlockedDecrement(long *);

typedef struct Obj_82E56848 Obj_82E56848;
struct Obj_82E56848 {
    void **vt;
    long refs;
};

unsigned fn_82E56848(Obj_82E56848 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82E56848 *, int))o->vt[8])(o, 1);
    }
    return n;
}
