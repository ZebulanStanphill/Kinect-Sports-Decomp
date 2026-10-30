typedef struct Node { struct Node *next; unsigned int key; } Node;
typedef struct { Node *head; Node *tail; Node *free; int pad[2]; int count; } List;

void fn_83031520(List *l, unsigned int key)
{
    Node *head = l->head;
    Node *prev = 0;
    Node *n = head;
    if (n == 0)
        return;
    do {
        if (n->key == key) {
            if (n == head)
                l->head = n->next;
            else
                prev->next = n->next;
            if (n == l->tail)
                l->tail = prev;
            n->next = l->free;
            l->free = n;
            l->count--;
            return;
        }
        prev = n;
        n = n->next;
    } while (n != 0);
}
