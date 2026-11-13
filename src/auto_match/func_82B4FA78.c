typedef struct Node_82B4FA78 {
    unsigned int link;    /* 0x00, low bit is a tag */
    unsigned int flags;   /* 0x04, bit 0: end */
} Node_82B4FA78;

typedef struct Item_82B4FA78 {
    int unk0;
    int unk4;
    int value;            /* 0x08 */
} Item_82B4FA78;

typedef struct Result_82B4FA78 {
    Item_82B4FA78 *item;
    int value;
} Result_82B4FA78;

typedef struct Iter_82B4FA78 {
    Node_82B4FA78 *node;
} Iter_82B4FA78;

extern void fn_82B24700(Iter_82B4FA78 *it, void *src);

void fn_82B4FA78(void *src, Result_82B4FA78 *out)
{
    Iter_82B4FA78 it;
    Item_82B4FA78 *item;
    int value;

    fn_82B24700(&it, src);
    item = (it.node->flags & 1) ? 0 : (Item_82B4FA78 *)((it.node->link & ~1u) - 4);
    value = item ? item->value : 0;
    out->item = item;
    out->value = value;
}
