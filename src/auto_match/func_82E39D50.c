extern long _InterlockedDecrement(long *);

typedef struct Obj_82E39D50 Obj_82E39D50;
struct Obj_82E39D50 {
    void **vt;
    long refs;
};

unsigned fn_82E39D50(Obj_82E39D50 *o)
{
    long *rc = &o->refs;
    unsigned long n = _InterlockedDecrement(rc);
    if (n == 0) {
        *rc = 0x7fffffff;
        ((void (*)(Obj_82E39D50 *, int))o->vt[16])(o, 1);
    }
    return n;
}
