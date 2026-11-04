extern long _InterlockedDecrement(long *);

typedef struct Obj_82E580E8 Obj_82E580E8;
struct Obj_82E580E8 {
    void **vt;
    int pad[1];
    long refs;
};

unsigned fn_82E580E8(Obj_82E580E8 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82E580E8 *, int))o->vt[9])(o, 1);
    }
    return n;
}
