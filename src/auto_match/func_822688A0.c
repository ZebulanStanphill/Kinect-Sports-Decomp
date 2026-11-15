typedef struct Item_822688A0 {
    char padding[0x40];   /* 0x00 */
    unsigned int key;     /* 0x40 */
    char padding44[0x98]; /* 0x44 */
    unsigned int value;   /* 0xdc */
} Item_822688A0;

typedef struct Node_822688A0 {
    struct Node_822688A0 *next;     /* 0x00 */
    struct Node_822688A0 *previous; /* 0x04 */
    Item_822688A0 *item;            /* 0x08 */
} Node_822688A0;

typedef struct List_822688A0 {
    Node_822688A0 *head; /* 0x00 */
} List_822688A0;

typedef struct Message_822688A0 {
    unsigned int type;    /* 0x00 */
    unsigned int value;   /* 0x04 */
    void *data;           /* 0x08 */
    unsigned int context; /* 0x0c */
} Message_822688A0;

typedef void (*Callback_822688A0)(Message_822688A0 *);

typedef struct Object_822688A0 {
    char padding[0x4bc];   /* 0x00 */
    unsigned int first;    /* 0x4bc */
    char padding4c0[0xf8]; /* 0x4c0 */
    Callback_822688A0 callback;
    unsigned int context;
    List_822688A0 *list;
} Object_822688A0;

static __forceinline Item_822688A0 *Find(List_822688A0 *list, unsigned int key)
{
    Node_822688A0 *head = list->head;
    Node_822688A0 *node;
    for (node = head->next; node != head; node = node->next) {
        if (node->item->key == key) {
            return node->item;
        }
    }
    return 0;
}

void fn_822688A0(Object_822688A0 *self, unsigned int kind)
{
    Object_822688A0 *object = self;
    Callback_822688A0 callback;
    Message_822688A0 message;
    if (kind >= 3) {
        unsigned int selectedKey;
        if (kind != 3) {
            return;
        }
        callback = object->callback;
        if (callback == 0) {
            return;
        }
        message.context = object->context;
        message.type = 1;
        selectedKey = object->first + 3;
        message.value = Find(object->list, selectedKey)->value;
        message.data = 0;
        callback(&message);
    } else {
        callback = object->callback;
        if (callback == 0) {
            return;
        }
        message.context = object->context;
        message.type = 0;
        message.value = Find(object->list, kind)->value;
        message.data = (char *)object + (kind - object->first) * 0x38 + 0x638;
        callback(&message);
    }
}
