typedef struct Node {
    int value;
    struct Node *next;
    struct Node *prev;
} Node;

typedef struct List {
    char pad[0xcc];
    Node *head;
    Node *tail;
    int count;
} List;

extern Node *fn_82A5C768(List *list);

void fn_82A5C878(List *list, int value)
{
    Node *n;

    n = fn_82A5C768(list);
    if (n != 0) {
        n->value = value;
        n->next = 0;
        n->prev = list->tail;
        if (list->tail != 0) {
            list->tail->next = n;
        } else {
            list->head = n;
        }
        list->tail = n;
        list->count++;
    }
}
