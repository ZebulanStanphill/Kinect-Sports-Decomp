typedef struct Item_82B27340 {
    unsigned int value; /* 0x0 */
    int index;          /* 0x4 */
    unsigned int flags; /* 0x8 */
} Item_82B27340;

typedef struct List_82B27340 {
    int pad0[2];
    unsigned int count; /* 0x8 */
} List_82B27340;

typedef struct Node_82B27340 {
    int pad0;
    unsigned int list; /* 0x4 */
} Node_82B27340;

typedef struct Iterator_82B27340 {
    Node_82B27340 *node; /* 0x0 */
    List_82B27340 *list; /* 0x4 */
    unsigned int index;  /* 0x8 */
} Iterator_82B27340;

extern Item_82B27340 *fn_82B1A538(Iterator_82B27340 *it);
extern void *fn_82AD1918(void *ctx, unsigned int value, int index, unsigned int flags);
extern void *fn_82B1A7E8(void *ctx, int op, void *block, void *left, void *right);
extern void fn_82B25248(void *ctx, void *value, void *arg);
extern void *fn_82AD18C0(void *ctx, void *value, int index);
extern void *fn_82B8A3A0(void *ctx, int flag, float x, float y, float z, float w);
extern void fn_82AD1270(void *value, int n);

static __forceinline void Begin_82B27340(Iterator_82B27340 *it, Node_82B27340 *node)
{
    it->node = node;
    it->index = 0;
    it->list = (List_82B27340 *)((node->list & 1) ? 0 : node->list);
}

static __forceinline unsigned char AtEnd_82B27340(Iterator_82B27340 *it)
{
    return it->list == 0 || it->index == it->list->count;
}

static __forceinline unsigned char Same_82B27340(Item_82B27340 *a, Item_82B27340 *b)
{
    return a->value == b->value && a->index == b->index && ((a->flags ^ b->flags) & ~4) == 0;
}

unsigned char fn_82B27340(void *ctx, void *block, Node_82B27340 *node, Item_82B27340 *skip, void **out,
                          void *arg)
{
    Iterator_82B27340 it;
    void *result = 0;
    Item_82B27340 *first = 0;
    unsigned int negate = 0;

    Begin_82B27340(&it, node);
    while (!AtEnd_82B27340(&it)) {
        Item_82B27340 *item = fn_82B1A538(&it);

        if (skip != 0 && Same_82B27340(item, skip)) {
            skip = 0;
            negate = item->flags & 4;
        } else if (first == 0 && result == 0) {
            first = item;
        } else {
            if (first != 0) {
                void *right = fn_82AD1918(ctx, item->value, item->index, item->flags);

                result = fn_82B1A7E8(ctx, 0, block,
                                     fn_82AD1918(ctx, first->value, first->index, first->flags), right);
                first = 0;
            } else {
                result = fn_82B1A7E8(ctx, 0, block, result,
                                     fn_82AD1918(ctx, item->value, item->index, item->flags));
            }
            fn_82B25248(ctx, result, arg);
            result = fn_82AD18C0(ctx, result, 0);
        }
    }
    if (first == 0) {
        if (result == 0) {
            void *one = fn_82B8A3A0(ctx, 1, 1.0f, 0.0f, 0.0f, 0.0f);

            result = fn_82AD18C0(ctx, one, 0);
        }
    } else {
        result = fn_82AD1918(ctx, first->value, first->index, first->flags);
    }
    if (negate != 0) {
        fn_82AD1270(result, 4);
    }
    *out = result;
    return skip == 0;
}
