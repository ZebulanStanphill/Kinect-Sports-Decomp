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

extern Node *fn_82A5A1F8(List *list);

void fn_82A5A8E0(List *list, int value)
{
    Node *n;

    n = fn_82A5A1F8(list);
    if (n != 0) {
        n->value = value;
        n->next = list->head;
        n->prev = 0;
        if (list->head != 0) {
            list->head->prev = n;
        } else {
            list->tail = n;
        }
        list->head = n;
        list->count++;
    }
}
