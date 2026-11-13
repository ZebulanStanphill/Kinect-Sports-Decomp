typedef struct Item_82862648 {
    int v[4];
} Item_82862648;

typedef struct Block_82862648 {
    float weight;
    Item_82862648 *items;  /* 0x04 */
    unsigned short used;   /* 0x08 */
    char pad0a[2];
    Item_82862648 inlineItems[1];   /* 0x0c */
} Block_82862648;

typedef struct Layout_82862648 {
    char pad0[8];
    unsigned short slots;  /* 0x08 */
    unsigned short count;  /* 0x0a */
    char pad0c[4];
    char *base;            /* 0x10 */
} Layout_82862648;

typedef struct Desc_82862648 {
    char pad0[8];
    int offset;            /* 0x08 */
} Desc_82862648;

extern void fn_8281D460(Item_82862648 *item);

void fn_82862648(Layout_82862648 *self, unsigned char useInline, Desc_82862648 *desc)
{
    Block_82862648 *block = (Block_82862648 *)(self->base + desc->offset);
    Item_82862648 *items = useInline ? block->inlineItems : 0;
    int i;

    block->weight = 0.0f;
    if (useInline)
        block->items = items;
    for (i = 0; i < self->count + 2; i++)
        fn_8281D460(&block->items[i]);
    block->used = 0;
    for (i = 0; i < self->slots; i++) {
    }
}
