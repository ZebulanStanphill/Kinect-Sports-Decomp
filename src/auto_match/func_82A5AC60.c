typedef struct Item_82A5AC60 Item_82A5AC60;

typedef struct ItemVt_82A5AC60 {
    void *slot0;
    void *slot4;
    int (*IsDone)(Item_82A5AC60 *self); /* 0x8 */
} ItemVt_82A5AC60;

struct Item_82A5AC60 {
    ItemVt_82A5AC60 *vt;
};

typedef struct Node_82A5AC60 {
    Item_82A5AC60 *item;        /* 0x0 */
    struct Node_82A5AC60 *next; /* 0x4 */
    struct Node_82A5AC60 *prev; /* 0x8 */
} Node_82A5AC60;

typedef struct List_82A5AC60 {
    Node_82A5AC60 *free; /* 0x0 */
    char pad4[0xc8];
    Node_82A5AC60 *head; /* 0xcc */
    Node_82A5AC60 *tail; /* 0xd0 */
    int count;           /* 0xd4 */
} List_82A5AC60;

typedef struct Self_82A5AC60 {
    char pad0[0x84];
    List_82A5AC60 pending; /* 0x84 */
    char pad15C[0x4];
    List_82A5AC60 active; /* 0x160 */
    char pad238[0x4];
    int state; /* 0x23c */
} Self_82A5AC60;

extern Item_82A5AC60 *fn_82A40B38(List_82A5AC60 *list, Node_82A5AC60 *node);
extern int fn_82A5A960(List_82A5AC60 *list, Item_82A5AC60 *item);

static __forceinline Item_82A5AC60 *getNext(Node_82A5AC60 **pos)
{
    Node_82A5AC60 *n = *pos;
    if (n != 0) {
        *pos = n->next;
        return n->item;
    }
    return 0;
}

static __forceinline void removeAll(List_82A5AC60 *list)
{
    Node_82A5AC60 *node;
    Node_82A5AC60 *next;

    while (list->head != 0) {
        node = list->head;
        next = node->next;
        node->next = list->free;
        list->free = node;
        list->head = next;
    }
    list->count = 0;
    list->tail = 0;
}

int fn_82A5AC60(Self_82A5AC60 *self)
{
    int hr = 0;
    Node_82A5AC60 *pos;
    Node_82A5AC60 *cur;
    Item_82A5AC60 *item;

    if (self->state == 2) {
        removeAll(&self->active);
        pos = self->pending.head;
        while (pos != 0 && hr >= 0) {
            item = getNext(&pos);
            if (item->vt->IsDone(item)) {
                hr = fn_82A5A960(&self->active, item) ? 0 : 0x8007000e;
            }
        }
    } else if (self->state == 1) {
        pos = self->active.head;
        while (pos != 0) {
            cur = pos;
            item = getNext(&pos);
            if (item->vt->IsDone(item) == 0) {
                fn_82A40B38(&self->active, cur);
            }
        }
    }
    if (hr >= 0) {
        self->state = 0;
    }
    return hr;
}
