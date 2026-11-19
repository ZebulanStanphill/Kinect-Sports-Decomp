typedef struct Event_8257CC40 {
    int type;     /* 0x0 */
    int size;     /* 0x4 */
    void *object; /* 0x8 */
} Event_8257CC40;

typedef struct Link_8257CC40 {
    int pad0;
    struct Link_8257CC40 *next; /* 0x4 */
} Link_8257CC40;

typedef struct Item_8257CC40 Item_8257CC40;

typedef struct ItemVtbl_8257CC40 {
    void (*destroy)(Item_8257CC40 *self, int flags); /* 0x0 */
    void *pad4;
    void (*stop)(Item_8257CC40 *self); /* 0x8 */
} ItemVtbl_8257CC40;

struct Item_8257CC40 {
    ItemVtbl_8257CC40 *vt; /* 0x0 */
    int pad4;
    int state; /* 0x8 */
};

typedef struct Node_8257CC40 {
    struct Node_8257CC40 *next; /* 0x0 */
    struct Node_8257CC40 *prev; /* 0x4 */
    Item_8257CC40 *value;       /* 0x8 */
} Node_8257CC40;

typedef struct List_8257CC40 {
    Node_8257CC40 *head; /* 0x0 */
    int size;            /* 0x4 */
} List_8257CC40;

typedef struct Self_8257CC40 {
    char pad0[0x24];
    Link_8257CC40 *children; /* 0x24 */
    List_8257CC40 items;     /* 0x28 */
} Self_8257CC40;

extern void *XMemSet(void *dst, int value, unsigned int size);
extern void fn_8257C8F0(void *target, Event_8257CC40 *event);
extern void fn_8257CB40(Self_8257CC40 *self, Event_8257CC40 *event, unsigned char notify);
extern void fn_825298E8(void *child);
extern void fn_8265CA20(void *p);

static __forceinline void List_erase(List_8257CC40 *list, Node_8257CC40 *node, Node_8257CC40 *next)
{
    if (node != list->head) {
        node->prev->next = next;
        node->next->prev = node->prev;
        fn_8265CA20(node);
        list->size = list->size - 1;
    }
}

void fn_8257CC40(Self_8257CC40 *self, void *target)
{
    Event_8257CC40 event;
    Link_8257CC40 *link;
    void *child;
    List_8257CC40 *list;
    Node_8257CC40 *node;
    Node_8257CC40 *next;
    Item_8257CC40 *item;

    XMemSet(&event.object, 0, sizeof(event.object));
    event.type = 0x46;
    event.size = 0xc;
    link = self->children;
    while (link != 0) {
        child = (char *)link - 0x50;
        link = link->next;
        event.object = child;
        fn_8257C8F0(target, &event);
        fn_8257CB40(self, &event, 0);
        fn_825298E8(child);
    }
    list = &self->items;
    node = list->head->next;
    while (node != list->head) {
        item = node->value;
        if (item->state == 3) {
            item->state = 4;
            item->vt->stop(item);
        }
        if (item->state == 4) {
            next = node->next;
            List_erase(list, node, next);
            node = next;
            item->vt->destroy(item, 1);
        } else {
            node = node->next;
        }
    }
}
