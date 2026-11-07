typedef struct Value_8229FF28 {
    int pObj;
    int type;
    double num;
} Value_8229FF28;

extern void fn_82273CD8(Value_8229FF28 *v, int type);
extern void fn_82273C88(Value_8229FF28 *v);
extern void fn_82672C20(int movie, const char *path, Value_8229FF28 *args, int count);
extern double lbl_821954B0[];

void fn_8229FF28(int *param_1, int param_2)
{
    Value_8229FF28 v[2];
    Value_8229FF28 *p;
    int i;

    for (i = 0; i < 2; i++) {
        v[i].pObj = 0;
        v[i].type = 0;
    }
    fn_82273CD8(&v[0], 3);
    v[0].num = lbl_821954B0[15];
    fn_82273CD8(&v[1], 3);
    v[1].num = (double)param_2;
    fn_82672C20(*param_1, "_root.mainCtrl.setScore", v, 2);
    p = &v[2];
    i = 1;
    do {
        p--;
        fn_82273C88(p);
        i--;
    } while (i >= 0);
}
