typedef struct Node_8246BAF8 Node_8246BAF8;
struct Node_8246BAF8 { Node_8246BAF8 *next; Node_8246BAF8 *prev; };
typedef struct { int pad; Node_8246BAF8 *head; int size; } List_8246BAF8;
extern void fn_8265CA20(void *);

void fn_8246BAF8(List_8246BAF8 *l)
{
    Node_8246BAF8 *h = l->head;
    Node_8246BAF8 *p = h->next;
    Node_8246BAF8 *n;

    h->next = h;
    l->head->prev = l->head;
    l->size = 0;
    for (; p != l->head; p = n) {
        n = p->next;
        fn_8265CA20(p);
    }
    fn_8265CA20(l->head);
}
