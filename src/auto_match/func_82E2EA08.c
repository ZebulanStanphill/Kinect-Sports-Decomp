typedef struct Node {
    unsigned short key;
    int value;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct List {
    Node *head;
    Node *tail;
    Node *cursor;
    int count;
    Node *free;
} List;

int fn_82E2EA08(List *l, int index, unsigned short *key, int *value)
{
    Node *n = l->head;
    int i;

    for (i = 0; i < index && n; i++)
        n = n->next;
    if (!n)
        return 0;
    if (l->cursor == n)
        l->cursor = 0;
    *key = n->key;
    *value = n->value;
    if (n == l->tail)
        l->tail = n->prev;
    if (n == l->head)
        l->head = n->next;
    if (n->next)
        n->next->prev = n->prev;
    if (n->prev)
        n->prev->next = n->next;
    n->next = l->free;
    l->free = n;
    l->count--;
    return 1;
}
