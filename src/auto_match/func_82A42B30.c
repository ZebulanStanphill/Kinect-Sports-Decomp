typedef struct Node {
    int value;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct {
    char pad[0xcc];
    Node *tail;
    Node *head;
    int count;
} List;

extern Node *fn_82A43E68(List *l);

void fn_82A42B30(List *l, int v)
{
    Node *n = fn_82A43E68(l);
    if (n != 0) {
        n->value = v;
        n->prev = l->tail;
        n->next = 0;
        if (l->tail != 0) {
            l->tail->next = n;
        } else {
            l->head = n;
        }
        l->tail = n;
        l->count++;
    }
}
