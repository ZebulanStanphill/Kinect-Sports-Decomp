extern long _InterlockedDecrement(long *);

typedef struct Obj_82F35A18 Obj_82F35A18;
struct Obj_82F35A18 {
    void **vt;
    int pad[1];
    long refs;
};

unsigned fn_82F35A18(Obj_82F35A18 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82F35A18 *, int))o->vt[27])(o, 1);
    }
    return n;
}
