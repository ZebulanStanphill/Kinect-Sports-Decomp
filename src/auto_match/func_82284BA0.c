typedef struct {
    int type;
    int pad4;
    union {
        void *ptr;
        double d;
    } u;
} Value_82284BA0;

typedef struct {
    int px;
    unsigned int rep;
} SP_82284BA0;

extern void fn_8227E4B0(int obj, int id, int flag, int z);
extern void fn_82273CD8(Value_82284BA0 *v, int type);
extern void fn_82273C88(Value_82284BA0 *v);
extern int *fn_82279C58(SP_82284BA0 *out, int self);
extern void fn_82672C20(int obj, const char *name, Value_82284BA0 *args, int n);
extern void fn_822315A0(unsigned int rep);
extern char lbl_820E975C[];

void fn_82284BA0(int self, short *a, short *b, int ca, int cb)
{
    Value_82284BA0 args[4];
    SP_82284BA0 tmp;
    int i;
    Value_82284BA0 *p;
    void *pa;
    void *pb;

    fn_8227E4B0(*(int *)(self + 0x9c), 100000, (ca != 3 && a != 0 && *a != 0) ? 1 : 0, 0);
    fn_8227E4B0(*(int *)(self + 0x9c), 100001, (cb != 3 && b != 0 && *b != 0) ? 1 : 0, 0);
    for (i = 0; i < 4; i++) {
        args[i].type = 0;
        args[i].pad4 = 0;
    }
    pa = a;
    if (a == 0)
        pa = lbl_820E975C;
    fn_82273CD8(&args[0], 5);
    args[0].u.ptr = pa;
    pb = lbl_820E975C;
    if (b != 0)
        pb = b;
    fn_82273CD8(&args[1], 5);
    args[1].u.ptr = pb;
    fn_82273CD8(&args[2], 3);
    args[2].u.d = (double)ca;
    fn_82273CD8(&args[3], 3);
    args[3].u.d = (double)cb;
    fn_82672C20(*fn_82279C58(&tmp, self), "_root.SetButtons", args, 4);
    if (tmp.rep != 0)
        fn_822315A0(tmp.rep);
    p = args + 4;
    i = 3;
    do {
        p--;
        fn_82273C88(p);
        i--;
    } while (i >= 0);
}
