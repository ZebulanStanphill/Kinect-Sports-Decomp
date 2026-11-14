typedef struct Key_82A50350 {
    int unk0;
    int id;
} Key_82A50350;

typedef struct Item_82A50350 {
    int unk0;
    int *key;
} Item_82A50350;

typedef struct Node_82A50350 {
    Item_82A50350 *item;
    struct Node_82A50350 *next;
} Node_82A50350;

typedef struct Owner_82A50350 {
    int unk0[8];
    Node_82A50350 *items;
    int unk24;
    unsigned int count;
} Owner_82A50350;

static __forceinline Item_82A50350 *GetNext(Node_82A50350 **pos)
{
    Node_82A50350 *n = *pos;
    if (n != 0) {
        *pos = n->next;
        return n->item;
    }
    return 0;
}

static __forceinline Item_82A50350 *First(Owner_82A50350 *self)
{
    if (self->items != 0) {
        return self->items->item;
    }
    return 0;
}

Item_82A50350 *fn_82A50350(Owner_82A50350 *self, Key_82A50350 *key)
{
    Item_82A50350 *result = 0;

    if (key == 0) {
        if (self->count == 1) {
            result = First(self);
        }
    } else {
        Node_82A50350 *pos = self->items;
        while (pos != 0) {
            Item_82A50350 *item = GetNext(&pos);
            if (item->key == &key->id) {
                result = item;
                break;
            }
        }
    }
    return result;
}
