typedef struct Item_82A482A0 {
    char pad[0x20];
    unsigned int id;
} Item_82A482A0;

typedef struct Node_82A482A0 {
    Item_82A482A0 *item;
    struct Node_82A482A0 *next;
} Node_82A482A0;

typedef struct List_82A482A0 {
    char pad[0x18];
    Node_82A482A0 *head;
    char pad1c[4];
    unsigned int count;
} List_82A482A0;

typedef struct Owner_82A482A0 {
    char pad0[0x8c];
    char table[0x1f4 - 0x8c];
    List_82A482A0 items;
} Owner_82A482A0;

extern void fn_82A47B28(List_82A482A0 *list, Node_82A482A0 *node);
extern void fn_82A43A30(void *table, unsigned int id, int flags);
extern void fn_82A4F4E0(Item_82A482A0 *item);

static __forceinline Item_82A482A0 *GetNext(Node_82A482A0 **pos)
{
    Node_82A482A0 *node = *pos;
    if (node != 0) {
        *pos = node->next;
        return node->item;
    }
    return 0;
}

void fn_82A482A0(Owner_82A482A0 *self, int *keepFirst)
{
    int keep = *keepFirst;
    Node_82A482A0 *pos;

    *keepFirst = 0;
    if (self->items.count != 0) {
        pos = self->items.head;
        if (keep != 0) {
            if (pos == 0) {
                return;
            }
            pos = pos->next;
        } else {
            *keepFirst = 1;
        }
        while (pos != 0) {
            Node_82A482A0 *node = pos;
            Item_82A482A0 *item = GetNext(&pos);
            fn_82A47B28(&self->items, node);
            fn_82A43A30(self->table, item->id, 0);
            fn_82A4F4E0(item);
        }
    } else {
        *keepFirst = 1;
    }
}
