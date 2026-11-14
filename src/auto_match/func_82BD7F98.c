typedef struct Item_82BD7F98 {
    int state;
    int result;
} Item_82BD7F98;

typedef struct Node_82BD7F98 {
    Item_82BD7F98 *item;
    struct Node_82BD7F98 *next;
} Node_82BD7F98;

typedef struct List_82BD7F98 {
    Node_82BD7F98 *head;
    Node_82BD7F98 *tail;
} List_82BD7F98;

typedef struct Queue_82BD7F98 {
    List_82BD7F98 free;
    List_82BD7F98 pending;
} Queue_82BD7F98;

extern void *XMemSet(void *dest, int c, unsigned int count);

static __forceinline void Append(List_82BD7F98 *list, Node_82BD7F98 *node)
{
    if (list->tail != 0) {
        list->tail->next = node;
    } else {
        list->head = node;
    }
    list->tail = node;
}

static __forceinline Node_82BD7F98 *PopHead(List_82BD7F98 *list)
{
    Node_82BD7F98 *node = list->head;

    if (node != 0) {
        if (node == list->tail) {
            list->tail = 0;
        }
        list->head = node->next;
        node->next = 0;
    }
    return node;
}

int fn_82BD7F98(Queue_82BD7F98 *q, Item_82BD7F98 *item)
{
    int hr = 0;
    Node_82BD7F98 *node = PopHead(&q->free);

    if (node == 0) {
        hr = 0x8007007A;
    } else {
        XMemSet(node, 0, sizeof(*node));
        item->result = 0;
        item->state = 0x103;
        node->item = item;
        node->next = 0;
        Append(&q->pending, node);
    }
    return hr;
}
