typedef struct State_82BA8CB8 {
    int pad0[3];
    int ctx;        /* 0x0c */
    int pad10[10];
    int count;      /* 0x38 */
} State_82BA8CB8;

extern int fn_82AB1538(int ctx, int a, int b, unsigned int v);
extern unsigned int lbl_820E2FB8[];

void fn_82BA8CB8(State_82BA8CB8 *p, unsigned int value, int mode)
{
    int ctx = p->ctx;
    fn_82AB1538(ctx, 1, 3, mode == 3 ? value : 0);
    fn_82AB1538(ctx, 4, 0x26, 0);
    fn_82AB1538(ctx, 0x2a, 2, mode);
    fn_82AB1538(ctx, 0x2c, 1, 0);
    fn_82AB1538(ctx, 0x2d, 4, lbl_820E2FB8[17]);
    p->ctx += 6;
    p->count += 1;
}
