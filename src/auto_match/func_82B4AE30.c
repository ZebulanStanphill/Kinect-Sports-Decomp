typedef struct Value_82B4AE30 {
    int pad0;
    int kind; /* 0x04: 0xb */
    char pad8[0x8];
    unsigned int index; /* 0x10 */
    char pad14[0x18];
    unsigned int flags; /* 0x2c */
} Value_82B4AE30;

typedef struct Item_82B4AE30 {
    int pad0;
    int kind; /* 0x04: 6 */
    char pad8[0x8];
    int count; /* 0x10 */
    int pad14;
    Value_82B4AE30 *value; /* 0x18 */
} Item_82B4AE30;

typedef struct Node_82B4AE30 {
    int pad0;
    int kind;                   /* 0x04: 1 */
    Item_82B4AE30 *item;        /* 0x08 */
    struct Node_82B4AE30 *next; /* 0x0c */
} Node_82B4AE30;

typedef struct Info_82B4AE30 {
    char pad0[0x10];
    unsigned int keep; /* 0x10 */
    char pad14[0x18];
    Node_82B4AE30 *list; /* 0x2c */
} Info_82B4AE30;

typedef struct Entry_82B4AE30 {
    unsigned int pad0 : 15;
    unsigned int count : 14; /* slots, 8 bytes each */
    unsigned int pad0b : 3;
    unsigned int pad4 : 29;
    unsigned int shared : 1;
    unsigned int pad4b : 2;
    char pad8[0x20];
} Entry_82B4AE30;

typedef struct Pool_82B4AE30 {
    char pad0[0xc];
    Entry_82B4AE30 *entries; /* 0x0c */
    int pad10;
    unsigned int count; /* 0x14 */
} Pool_82B4AE30;

typedef struct Ctx_82B4AE30 {
    char pad0[0xc];
    Entry_82B4AE30 *entries; /* 0x0c */
} Ctx_82B4AE30;

typedef struct Slot_82B4AE30 {
    unsigned int pad0 : 31;
    unsigned int bound : 1;
    unsigned int owner : 15;
    unsigned int flag : 1;
    unsigned int index : 14;
    unsigned int kind : 2;
} Slot_82B4AE30;

typedef struct Holder_82B4AE30 {
    char pad0[0x50];
    Slot_82B4AE30 **slots; /* 0x50 */
} Holder_82B4AE30;

extern __declspec(noreturn) void fn_82AA66A8(void *ctx, int code, ...);
extern void *fn_82ABE9F0(Pool_82B4AE30 *pool, unsigned int size, int flags);
extern void *memcpy(void *dst, const void *src, unsigned int size);

static __forceinline Node_82B4AE30 *AsNode(void *ctx, Node_82B4AE30 *n)
{
    if (n != 0 && n->kind != 1)
        fn_82AA66A8(ctx, 0x12c1);
    return n;
}

static __forceinline Value_82B4AE30 *AsValue(void *ctx, Value_82B4AE30 *v)
{
    if (v == 0 || v->kind != 0xb)
        fn_82AA66A8(ctx, 0x12c1);
    return v;
}

static __forceinline Node_82B4AE30 *FindUse(Ctx_82B4AE30 *ctx, Info_82B4AE30 *info, unsigned int index)
{
    Node_82B4AE30 *node;
    Value_82B4AE30 *value;

    for (node = AsNode(ctx, info->list); node != 0; node = AsNode(ctx, node->next)) {
        if (node->item->kind == 6) {
            if (node->item->count != 1)
                fn_82AA66A8(ctx, 0x12c1);
            value = AsValue(ctx, node->item->value);
            if ((value->flags & 0x20) != 0 && index == value->index)
                break;
        }
    }
    return node;
}

void fn_82B4AE30(Ctx_82B4AE30 *ctx, Holder_82B4AE30 *oldHolder, Holder_82B4AE30 *holder, Info_82B4AE30 *info,
                 Pool_82B4AE30 *pool)
{
    Slot_82B4AE30 **slots = holder->slots;
    Slot_82B4AE30 **copies;
    unsigned int count;
    unsigned int i;
    unsigned int j;
    unsigned int size;
    Slot_82B4AE30 *copy;
    Slot_82B4AE30 *slot;

    if (slots == 0)
        return;
    count = pool->count;
    copies = (Slot_82B4AE30 **)fn_82ABE9F0(pool, count * 4, 0);
    for (i = 0; i < count; i++) {
        if (slots[i] == 0)
            continue;
        if (i == info->keep) {
            copies[i] = slots[i];
            slots[i] = 0;
        } else if (FindUse(ctx, info, i) != 0) {
            copies[i] = slots[i];
            slots[i] = 0;
        } else {
            size = pool->entries[i].count * 8;
            copy = (Slot_82B4AE30 *)fn_82ABE9F0(pool, size, 0);
            memcpy(copy, slots[i], size);
            copies[i] = copy;
            if ((unsigned char)pool->entries[i].shared != 0) {
                for (j = 0; j < ctx->entries[i].count; j++) {
                    slot = &slots[i][j];
                    slot->bound = 1;
                    slot->kind = 0;
                    slot->owner = i;
                    slot->index = j;
                }
            }
        }
    }
    oldHolder->slots = slots;
    holder->slots = copies;
}
