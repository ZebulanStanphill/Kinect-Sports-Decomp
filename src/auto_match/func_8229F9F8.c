typedef struct Value_8229F9F8 {
    int pObj;
    int type;
    double num;
} Value_8229F9F8;

extern void fn_82273CD8(Value_8229F9F8 *v, int type);
extern void fn_82273C88(Value_8229F9F8 *v);
extern void fn_82672C20(int movie, const char *path, Value_8229F9F8 *args, int count);

void fn_8229F9F8(int *param_1, int param_2, int param_3)
{
    Value_8229F9F8 v[2];
    Value_8229F9F8 *p;
    int i;

    param_1[4] = 1;
    for (i = 0; i < 2; i++) {
        v[i].pObj = 0;
        v[i].type = 0;
    }
    fn_82273CD8(&v[0], 3);
    v[0].num = (double)param_2;
    fn_82273CD8(&v[1], 3);
    v[1].num = (double)param_3;
    fn_82672C20(*param_1, "_root.mainCtrl.showAndSetScores", v, 2);
    param_1[4] = 1;
    p = &v[2];
    i = 1;
    do {
        p--;
        fn_82273C88(p);
        i--;
    } while (i >= 0);
}
