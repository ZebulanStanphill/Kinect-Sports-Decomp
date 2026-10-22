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

extern Node *fn_82A47B98(List *l);

void fn_82A42AB0(List *l, int v)
{
    Node *n = fn_82A47B98(l);
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
