extern unsigned int lbl_820E2FB8[];

extern void fn_82AB1538(int ctx, int a, int b, unsigned int c);

typedef struct {
    char pad0[0xc];
    int f0c;
    char pad10[0x28];
    int f38;
} Obj;

void fn_82BA8D70(Obj *param_1)
{
    int ctx;

    ctx = param_1->f0c;
    fn_82AB1538(ctx, 1, 0x20, 0);
    fn_82AB1538(ctx, 0x21, 0xb, 0);
    fn_82AB1538(ctx, 0x2c, 1, 0);
    fn_82AB1538(ctx, 0x2d, 4, lbl_820E2FB8[5]);
    param_1->f0c += 6;
    param_1->f38 += 1;
}
