extern void *fn_8265C940(int size, int flags);
extern void fn_8265C990(void *p, int flags);

typedef struct {
    int a;
    int b;
    char pad[0x78];
} Block;

typedef struct {
    char pad[0x5ea8];
    Block *blocks;
    int pad2;
    void *other;
} Ctx;

int fn_82647198(Ctx *ctx)
{
    int i;

    ctx->blocks = fn_8265C940(0x2000, 0xb5800000);
    if (ctx->blocks == 0)
        return 0;
    ctx->other = fn_8265C940(0x4ec, 0x64800000);
    if (ctx->other == 0) {
        fn_8265C990(ctx->blocks, 0xb1800000);
        ctx->blocks = 0;
        return 0;
    }
    for (i = 0; i < 63; i++) {
        ctx->blocks[i].a = 0x80000000;
        ctx->blocks[i].b = 0xbadd00d;
    }
    ctx->blocks[63].a = 0x80000000;
    return 1;
}
