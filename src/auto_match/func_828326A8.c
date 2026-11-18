typedef struct Item_828326A8 {
    int f0;
    unsigned int index; /* 0x4 */
    int arg;            /* 0x8 */
    int fC;
    int f10;
} Item_828326A8;

typedef struct Vec_828326A8 {
    Item_828326A8 *begin; /* 0x0 */
    Item_828326A8 *end;   /* 0x4 */
} Vec_828326A8;

typedef struct Node_828326A8 {
    char pad0[0x48];
    Vec_828326A8 *items; /* 0x48 */
    int f4C;
    int f50;
    unsigned char enabled; /* 0x54 */
} Node_828326A8;

typedef struct Entry_828326A8 {
    int v[8];
} Entry_828326A8;

typedef struct Self_828326A8 {
    char pad0[0x2fc];
    Node_828326A8 head; /* 0x2fc */
    char pad354[0x388 - 0x2fc - sizeof(Node_828326A8)];
    Entry_828326A8 **table; /* 0x388 */
    char pad38c[0x3ea - 0x38c];
    unsigned char busy; /* 0x3ea */
} Self_828326A8;

extern void fn_828223C8(Node_828326A8 *node, Node_828326A8 **next);
extern void fn_82826498(Self_828326A8 *self, Entry_828326A8 *entry, int arg, void (*callback)(void),
                        Item_828326A8 *item);
extern void fn_828324C0(void);

void fn_828326A8(Self_828326A8 *self)
{
    Node_828326A8 *node;
    unsigned int count;
    unsigned int i;

    self->busy = 1;
    fn_828223C8(&self->head, &node);
    while (node != 0) {
        Node_828326A8 *current = node;

        count = current->items->end - current->items->begin;
        for (i = 0; i < count; i++) {
            Item_828326A8 *item;

            if (!current->enabled) {
                break;
            }
            item = &current->items->begin[i];
            fn_82826498(self, &(*self->table)[item->index], item->arg, fn_828324C0, item);
        }
        fn_828223C8(node, &node);
    }
}
