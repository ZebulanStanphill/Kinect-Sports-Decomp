extern long _InterlockedDecrement(long *);

typedef struct Obj_82E49090 Obj_82E49090;
struct Obj_82E49090 {
    void **vt;
    int pad[4];
    long refs;
};

unsigned fn_82E49090(Obj_82E49090 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82E49090 *, int))o->vt[18])(o, 1);
    }
    return n;
}
