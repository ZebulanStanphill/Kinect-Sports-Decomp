typedef struct Node_828B22F0 { struct Node_828B22F0 *next; struct Node_828B22F0 *prev; } Node_828B22F0;
typedef struct List_828B22F0 { Node_828B22F0 *head; unsigned int size; } List_828B22F0;
extern void fn_8265CA20(void *);

void fn_828B22F0(List_828B22F0 *l)
{
  Node_828B22F0 *n = l->head;
  Node_828B22F0 *p = n->next;
  n->next = n;
  l->head->prev = l->head;
  l->size = 0;
  while (p != l->head) {
    Node_828B22F0 *q = p->next;
    fn_8265CA20(p);
    p = q;
  }
}
