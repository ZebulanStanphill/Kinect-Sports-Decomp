extern long _InterlockedDecrement(long *);

typedef struct Obj_82E47260 Obj_82E47260;
struct Obj_82E47260 {
    void **vt;
    long refs;
};

long fn_82E47260(Obj_82E47260 *o)
{
    long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82E47260 *, int))o->vt[8])(o, 1);
    }
    return n;
}
