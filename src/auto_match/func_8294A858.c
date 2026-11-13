typedef struct { int pad[2]; unsigned int key; } Item_8294A858;
typedef struct { int pad[4]; Item_8294A858 **items; } Ctx_8294A858;

int fn_8294A858(unsigned int a, unsigned int b, Ctx_8294A858 *ctx)
{
    unsigned int x = ctx->items[a]->key, y = ctx->items[b]->key;
    if (x < y) return 1;
    if (x > y) return -1;
    if (a > b) return 1;
    return a < b ? -1 : 0;
}
