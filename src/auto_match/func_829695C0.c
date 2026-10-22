typedef struct { int pad; unsigned int v; } Ent;
typedef struct { char pad[0x10]; Ent **regs; Ent **ops; } Ctx;
typedef struct { unsigned int op; int pad; int *args; } Ins;
extern int fn_82963860(Ins *ins);

int fn_829695C0(Ctx *ctx, Ins *ins)
{
    unsigned int op;
    unsigned int n;
    unsigned int start;
    unsigned int k;
    unsigned int i;

    if (fn_82963860(ins) == 0) {
        return 0;
    }
    op = ins->op & 0xfff00000;
    n = ins->op & 0xfffff;
    switch (op) {
    case 0x10d00000:
    case 0x10e00000:
        start = 0;
        break;
    case 0x60000000:
    case 0x60200000:
    case 0x60300000:
    case 0x60500000:
    case 0x60700000:
    case 0x60800000:
    case 0x60a00000:
    case 0x60c00000:
    case 0x60d00000:
    case 0x60f00000:
    case 0x61100000:
    case 0x61200000:
        start = n;
        break;
    default:
        return 0;
    }
    k = ctx->ops[ins->args[start]]->v;
    if ((ctx->regs[k]->v & 0x210) == 0) {
        return 0;
    }
    for (i = 1; i < n; i++) {
        if (ctx->ops[ins->args[start + i]]->v != k) {
            return 0;
        }
    }
    return 1;
}
