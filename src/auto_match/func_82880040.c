typedef struct List_82880040 List_82880040;

typedef struct Node_82880040 {
    char pad[0x2c];
    List_82880040 *owner;
    struct Node_82880040 *next;
    struct Node_82880040 *prev;
} Node_82880040;

struct List_82880040 {
    Node_82880040 *head;
    Node_82880040 *tail;
    int count;
};

void fn_82880040(List_82880040 *a, List_82880040 *b)
{
    Node_82880040 *n;

    n = b->head;
    if (n == 0) {
        return;
    }
    if (a->head != 0) {
        a->tail->next = n;
        b->head->prev = a->tail;
        a->tail = b->tail;
    } else {
        a->head = n;
        a->tail = b->tail;
    }
    for (n = b->head; n != 0; n = n->next) {
        n->owner = a;
    }
    a->count += b->count;
    b->tail = 0;
    b->head = 0;
    b->count = 0;
}
