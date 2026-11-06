typedef struct {
    char pad0[0x10];
    unsigned int f10;
    char pad14[0x6c - 0x14];
    unsigned int f6c;
} Item_82903C78;
typedef struct {
    char pad0[0x14];
    Item_82903C78 **items;
} Pool_82903C78;
typedef struct {
    int f0;
    int f4;
    Pool_82903C78 *pool;
    char padC[0x18 - 0xc];
    int *index;
} Ctx_82903C78;

int fn_82903C78(unsigned int a, unsigned int b, Ctx_82903C78 *ctx)
{
    Item_82903C78 *ia = ctx->pool->items[ctx->index[a]];
    Item_82903C78 *ib = ctx->pool->items[ctx->index[b]];
    if (ia->f6c < ib->f6c) {
        return -1;
    }
    if (ia->f6c > ib->f6c) {
        return 1;
    }
    if (ia->f10 < ib->f10) {
        return -1;
    }
    if (ia->f10 > ib->f10) {
        return 1;
    }
    if (a < b) {
        return -1;
    }
    return a > b;
}
