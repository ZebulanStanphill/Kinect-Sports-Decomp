typedef struct Item_822673B0 {
    char padding[0x40];   /* 0x00 */
    unsigned int key;     /* 0x40 */
    char padding44[0x98]; /* 0x44 */
    unsigned int value;   /* 0xdc */
} Item_822673B0;

typedef struct Node_822673B0 {
    struct Node_822673B0 *next;     /* 0x00 */
    struct Node_822673B0 *previous; /* 0x04 */
    Item_822673B0 *item;            /* 0x08 */
} Node_822673B0;

typedef struct List_822673B0 {
    Node_822673B0 *head; /* 0x00 */
} List_822673B0;

typedef struct Message_822673B0 {
    unsigned int value;   /* 0x0 */
    unsigned int index;   /* 0x4 */
    unsigned int context; /* 0x8 */
    void *data;           /* 0xc */
} Message_822673B0;

typedef void (*Callback_822673B0)(Message_822673B0 *);

typedef struct Object_822673B0 {
    char padding[0x47c];
    unsigned int first; /* 0x47c */
    char padding480[0x130];
    Callback_822673B0 callback; /* 0x5b0 */
    unsigned int context;       /* 0x5b4 */
    char padding5b8[8];
    List_822673B0 *list; /* 0x5c0 */
    char padding5c4[0x14];
    unsigned int base; /* 0x5d8 */
    char *data;        /* 0x5dc */
} Object_822673B0;

static __forceinline Item_822673B0 *Find(List_822673B0 *list, unsigned int key)
{
    Node_822673B0 *head = list->head;
    Node_822673B0 *node;
    for (node = head->next; node != head; node = node->next) {
        if (node->item->key == key) {
            return node->item;
        }
    }
    return 0;
}

void fn_822673B0(Object_822673B0 *self, unsigned int index)
{
    unsigned int selected = self->base + index;
    Callback_822673B0 callback = self->callback;
    if (callback != 0) {
        Message_822673B0 message;
        message.context = self->context;
        message.value = Find(self->list, index)->value;
        message.index = selected - self->first;
        message.data = self->data != 0 ? self->data + selected * 0x24 : 0;
        callback(&message);
    }
}
