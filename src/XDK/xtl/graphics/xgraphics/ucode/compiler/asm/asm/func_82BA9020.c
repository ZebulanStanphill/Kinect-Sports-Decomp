typedef struct Ctx {
    char pad0[0xc];
    int fc;
    char pad10[0x38 - 0x10];
    int f38;
} Ctx;

extern void fn_82AB1538(int, int, int, int);
extern int lbl_820E2FB8[];

void fn_82BA9020(Ctx *param_1, int param_2)
{
    int v = param_1->fc;

    fn_82AB1538(v, 1, 0xd, param_2 / 6);
    fn_82AB1538(v, 0xe, 1, 1);
    fn_82AB1538(v, 0x2d, 4, lbl_820E2FB8[14]);
    param_1->fc += 6;
    param_1->f38 += 1;
}
