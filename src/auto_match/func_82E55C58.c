extern long _InterlockedDecrement(long *);

typedef struct Obj_82E55C58 Obj_82E55C58;
struct Obj_82E55C58 {
    void **vt;
    long refs;
};

unsigned fn_82E55C58(Obj_82E55C58 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82E55C58 *, int))o->vt[11])(o, 1);
    }
    return n;
}
