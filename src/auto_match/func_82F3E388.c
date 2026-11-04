extern long _InterlockedDecrement(long *);

typedef struct Obj_82F3E388 Obj_82F3E388;
struct Obj_82F3E388 {
    void **vt;
    int pad[1];
    long refs;
};

unsigned fn_82F3E388(Obj_82F3E388 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82F3E388 *, int))o->vt[15])(o, 1);
    }
    return n;
}
