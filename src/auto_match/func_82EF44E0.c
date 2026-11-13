extern long _InterlockedDecrement(long *);

typedef struct Obj_82EF44E0 Obj_82EF44E0;
struct Obj_82EF44E0 {
    void **vt;
    long refs;
};

long fn_82EF44E0(Obj_82EF44E0 *o)
{
    long n = _InterlockedDecrement(&o->refs);
    if (n == 0) {
        ((void (*)(Obj_82EF44E0 *))o->vt[1])(o);
        ((void (*)(Obj_82EF44E0 *, int))o->vt[10])(o, 1);
    }
    return n;
}
