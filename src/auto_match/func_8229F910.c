typedef struct Value_8229F910 {
    void *obj;
    int type;
    union {
        double d;
        int i;
    } v;
} Value_8229F910;

extern void fn_82273CD8(Value_8229F910 *v, int type);
extern void fn_82273C88(Value_8229F910 *v);
extern void fn_82672C20(int movie, const char *path, Value_8229F910 *args, int count);
extern double lbl_821954B0[];

void fn_8229F910(int *param_1, int param_2, double param_3, double param_4)
{
    Value_8229F910 args[4];
    Value_8229F910 *e;
    int i;

    for (i = 0; i < 4; i++) {
        args[i].obj = 0;
        args[i].type = 0;
    }
    fn_82273CD8(&args[0], 3);
    args[0].v.d = lbl_821954B0[15];
    fn_82273CD8(&args[1], 5);
    args[1].v.i = param_2;
    fn_82273CD8(&args[2], 3);
    args[2].v.d = param_3;
    fn_82273CD8(&args[3], 3);
    args[3].v.d = param_4;
    fn_82672C20(*param_1, "_root.mainCtrl.gainedBonus", args, 4);
    e = &args[4];
    i = 3;
    do {
        e--;
        fn_82273C88(e);
        i--;
    } while (i >= 0);
}
