typedef struct Value_8229F758 {
    void *obj;
    int type;
    union {
        double d;
        int i;
    } v;
} Value_8229F758;

extern void fn_82273CD8(Value_8229F758 *v, int type);
extern void fn_82273C88(Value_8229F758 *v);
extern void fn_82672C20(int movie, const char *path, Value_8229F758 *args, int count);

void fn_8229F758(int *param_1, double param_2, double param_3, double param_4, int param_5)
{
    Value_8229F758 args[4];
    Value_8229F758 *e;
    int i;

    for (i = 0; i < 4; i++) {
        args[i].obj = 0;
        args[i].type = 0;
    }
    fn_82273CD8(&args[0], 3);
    args[0].v.d = param_5 + 1;
    fn_82273CD8(&args[1], 3);
    args[1].v.d = param_2;
    fn_82273CD8(&args[2], 3);
    args[2].v.d = param_3;
    fn_82273CD8(&args[3], 3);
    args[3].v.d = param_4;
    fn_82672C20(*param_1, "_root.mainCtrl.setTimer", args, 4);
    e = &args[4];
    i = 3;
    do {
        e--;
        fn_82273C88(e);
        i--;
    } while (i >= 0);
}
