extern long _InterlockedDecrement(long *);

typedef struct Obj_82E511D8 Obj_82E511D8;
struct Obj_82E511D8 {
    void **vt;
    int pad[20];
    long refs;
};

unsigned fn_82E511D8(Obj_82E511D8 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82E511D8 *, int))o->vt[43])(o, 1);
    }
    return n;
}
