typedef struct Sub_82B10048 {
    int f0;
    void *data;
} Sub_82B10048;

typedef struct Owner_82B10048 {
    char pad0[0x28];
    unsigned int *bits;
} Owner_82B10048;

typedef struct Item_82B10048 {
    Sub_82B10048 *sub;
    int f4;
    unsigned int flags;
    char padC[0x1c - 0xc];
    Owner_82B10048 *owner;
} Item_82B10048;

typedef struct Node_82B10048 {
    unsigned int pad0 : 4;
    unsigned int kind : 3;
    unsigned int pad7 : 18;
    unsigned int slot : 2;
    unsigned int index : 5;
    int f4;
    struct Node_82B10048 *next;
    int fc;
    Item_82B10048 *item;
} Node_82B10048;

typedef struct Info_82B10048 {
    char pad0[0x30];
    unsigned int id;
} Info_82B10048;

typedef struct Ctx_82B10048 {
    int f0;
    Node_82B10048 *first;
    char pad8[0x1c - 8];
    Info_82B10048 *info;
} Ctx_82B10048;

static __forceinline int NotNull(Node_82B10048 *n)
{
    if (n)
        return 1;
    return 0;
}

static __forceinline unsigned char HasData(Item_82B10048 *item)
{
    return item->sub != 0 && item->sub->data != 0;
}

Item_82B10048 *fn_82B10048(void *self, Owner_82B10048 *owner, Ctx_82B10048 *ctx, int slot, unsigned int index)
{
    Node_82B10048 *n;
    for (n = ctx->first; NotNull(n); n = n->next) {
        Item_82B10048 *item = n->item;
        unsigned int id;
        if (item == 0 || n->kind == 0 || (item->flags & 0x3f80) != 0x3800 || item->owner != owner)
            continue;
        id = ctx->info->id & 0x7ffff;
        if ((owner->bits[(id >> 5) + 1] & (1 << (id & 0x1f))) != 0 && HasData(item))
            continue;
        if ((int)n->slot == slot && n->index == index)
            return item;
    }
    return 0;
}
