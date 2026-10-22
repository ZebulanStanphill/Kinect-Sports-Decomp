typedef struct {
    void *vtbl;
    int f4;
    unsigned int flags;
    int fc;
} Obj;
extern int fn_82E569B0(Obj *o, int *arg);

int fn_82E56AF0(Obj *o, int *arg)
{
    int local;

    if (arg == 0) {
        if (arg != &local && (o->flags & 1)) {
            int fc = o->fc;
            fn_82E569B0(o, arg);
            o->fc = fc;
            o->flags |= 1;
        } else {
            fn_82E569B0(o, 0);
        }
    }
    return 1;
}
