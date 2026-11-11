extern long _InterlockedDecrement(long *);

typedef struct Obj_82E54A28 Obj_82E54A28;
struct Obj_82E54A28 {
    void **vt;
    long refs;
};

unsigned fn_82E54A28(Obj_82E54A28 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82E54A28 *, int))o->vt[12])(o, 1);
    }
    return n;
}
