extern long _InterlockedDecrement(long *);

typedef struct Obj_82BD9050 Obj_82BD9050;
struct Obj_82BD9050 {
    void **vt;
    int pad[6];
    long refs;
};

unsigned fn_82BD9050(Obj_82BD9050 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Obj_82BD9050 *, int))o->vt[14])(o, 1);
    }
    return n;
}
