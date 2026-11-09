extern long _InterlockedDecrement(long *);
extern void fn_82A4F4E0(void *);
extern void fn_82A3FEE0(void *);
extern char lbl_83219D50[];

struct Obj_82A4C8D0 {
    void **vt;
    int pad[6];
    long refs;
};

unsigned fn_82A4C8D0(struct Obj_82A4C8D0 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0) {
        fn_82A4F4E0(o ? ((void *(*)(struct Obj_82A4C8D0 *, int))o->vt[14])(o, 0) : 0);
        fn_82A3FEE0(lbl_83219D50);
    }
    return n;
}
