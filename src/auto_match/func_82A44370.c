typedef struct Node {
    int value;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct {
    char pad[0x18];
    Node *tail;
    Node *head;
    int count;
} List;

extern Node *fn_82A43D78(List *l);

void fn_82A44370(List *l, int v)
{
    Node *n = fn_82A43D78(l);
    if (n != 0) {
        n->value = v;
        n->prev = 0;
        n->next = l->head;
        if (l->head != 0) {
            l->head->prev = n;
        } else {
            l->tail = n;
        }
        l->head = n;
        l->count++;
    }
}
