typedef struct Ctx {
    char pad0[0x3cb0];
    int state;
} Ctx;

extern int fn_82C56B38(Ctx *, int);
extern int fn_82C5B4A0(Ctx *, int, int, int, int, int);
extern int fn_82C678D8(Ctx *, int);

int fn_82C45168(Ctx *param_1, int param_2, int param_3)
{
    int r;

    if (param_1 == 0)
        return -3;
    if (param_1->state == 6 || param_1->state == 7)
        r = fn_82C5B4A0(param_1, param_3, 0, 0, 0, 0);
    else if (param_1->state == 5)
        r = fn_82C56B38(param_1, param_3);
    else
        r = fn_82C678D8(param_1, param_3);
    return r;
}
