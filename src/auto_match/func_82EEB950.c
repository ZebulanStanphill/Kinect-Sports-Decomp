extern long _InterlockedDecrement(long *);

typedef struct Obj_82EEB950 Obj_82EEB950;
struct Obj_82EEB950 {
    void **vt;
    int pad[12];
    long refs;
};

long fn_82EEB950(Obj_82EEB950 *o)
{
    long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82EEB950 *, int))o->vt[4])(o, 1);
    }
    return n;
}
