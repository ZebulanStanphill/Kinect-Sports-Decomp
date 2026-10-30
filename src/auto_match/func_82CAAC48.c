typedef struct Node { struct Node *next; } Node;
typedef struct List { Node *head; int x4; Node *free; } List;
extern void fn_82C53970(Node *n);

void fn_82CAAC48(List *l)
{
    Node *n;
    Node *next;
    if (l != 0) {
        for (n = l->free; n != 0; n = next) {
            next = n->next;
            fn_82C53970(n);
        }
        n = l->head;
        l->free = 0;
        for (; n != 0; n = next) {
            next = n->next;
            fn_82C53970(n);
        }
        l->head = 0;
    }
}
