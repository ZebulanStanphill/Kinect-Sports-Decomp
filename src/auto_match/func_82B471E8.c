typedef struct Operand_82B471E8 {
    unsigned int hi : 4;
    unsigned int type : 3;
    unsigned int mid : 12;
    unsigned int swizzle : 8;
    unsigned int lo : 5;
    int f4;
    int f8;
    int fC;
} Operand_82B471E8;

extern Operand_82B471E8 *fn_82ACA920(void *ctx, Operand_82B471E8 *op, int a);
Operand_82B471E8 *fn_82B471E8(void *ctx, Operand_82B471E8 *op, int swz)
{
    unsigned int s;
    unsigned int t;

    if (op->type != 1 || swz != 0) {
        op = fn_82ACA920(ctx, op, op->fC);
        s = op->swizzle;
        t = swz | 0xe4;

        op->swizzle = ((((s >> ((t >> 5) & 6)) & 3) << 2 | ((s >> ((t >> 3) & 6)) & 3)) << 2
                       | ((s >> ((t >> 1) & 6)) & 3)) << 2 | ((s >> ((t & 3) << 1)) & 3);
        op->type = 1;
    }
    return op;
}
