typedef struct Node_82BC5A28 { char pad[0x80]; int id; } Node_82BC5A28;
typedef struct List_82BC5A28 { int pad0; unsigned int count; Node_82BC5A28 **items; } List_82BC5A28;
typedef struct Block_82BC5A28 { char pad[0x38]; List_82BC5A28 *list; } Block_82BC5A28;

static unsigned char GetItem(List_82BC5A28 *list, unsigned int index, Node_82BC5A28 **out)
{
    if (index + 1 > list->count) {
        return 0;
    }
    *out = list->items[index];
    return 1;
}

/* first node whose id differs from id */
Node_82BC5A28 *fn_82BC5A28(Block_82BC5A28 *self, int id)
{
    Node_82BC5A28 *node = 0;
    unsigned int i;
    for (i = 0; GetItem(self->list, i, &node); i++) {
        if (node->id != id)
            return node;
    }
    return 0;
}
