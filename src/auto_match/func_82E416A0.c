extern long _InterlockedDecrement(long *);

typedef struct Obj_82E416A0 Obj_82E416A0;
struct Obj_82E416A0 {
    void **vt;
    int pad4;
    long refs;
};

unsigned fn_82E416A0(Obj_82E416A0 *o)
{
    long *rc = &o->refs;
    unsigned long n = _InterlockedDecrement(rc);
    if (n == 0) {
        *rc = 0x7fffffff;
        ((void (*)(Obj_82E416A0 *, int))o->vt[12])(o, 1);
    }
    return n;
}
