typedef struct Node_824A7FF8 Node_824A7FF8;
struct Node_824A7FF8 { Node_824A7FF8 *next; Node_824A7FF8 *prev; };
typedef struct { Node_824A7FF8 *head; int size; } List_824A7FF8;
extern void fn_8265CA20(void *);

void fn_824A7FF8(List_824A7FF8 *l)
{
    Node_824A7FF8 *h = l->head;
    Node_824A7FF8 *p = h->next;
    Node_824A7FF8 *n;

    h->next = h;
    l->head->prev = l->head;
    l->size = 0;
    for (; p != l->head; p = n) {
        n = p->next;
        fn_8265CA20(p);
    }
    fn_8265CA20(l->head);
}
