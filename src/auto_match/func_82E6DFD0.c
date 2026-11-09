extern long _InterlockedDecrement(long *);

typedef struct Obj_82E6DFD0 Obj_82E6DFD0;
struct Obj_82E6DFD0 {
    void **vt;
    long refs;
};

unsigned fn_82E6DFD0(Obj_82E6DFD0 *o)
{
    long *rc = &o->refs;
    unsigned long n = _InterlockedDecrement(rc);
    if (n == 0) {
        *rc = 0x7fffffff;
        ((void (*)(Obj_82E6DFD0 *, int))o->vt[18])(o, 1);
    }
    return n;
}
