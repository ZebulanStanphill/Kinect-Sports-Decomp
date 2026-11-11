extern long _InterlockedDecrement(long *);

typedef struct Obj_82EE24E0 Obj_82EE24E0;
struct Obj_82EE24E0 {
    void **vt;
    int pad[22];
    long refs;
};

long fn_82EE24E0(Obj_82EE24E0 *o)
{
    long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82EE24E0 *, int))o->vt[35])(o, 1);
    }
    return n;
}
