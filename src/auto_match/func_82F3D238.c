extern long _InterlockedDecrement(long *);

typedef struct Obj_82F3D238 Obj_82F3D238;
struct Obj_82F3D238 {
    void **vt;
    int pad[1];
    long refs;
};

unsigned fn_82F3D238(Obj_82F3D238 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82F3D238 *, int))o->vt[12])(o, 1);
    }
    return n;
}
