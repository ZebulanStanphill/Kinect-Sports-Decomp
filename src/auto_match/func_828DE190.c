typedef struct Node_828DE190 { struct Node_828DE190 *next, *prev; } Node_828DE190;
typedef struct List_828DE190 { Node_828DE190 *head; int size; } List_828DE190;
extern void fn_8265CA20(void *p);

void fn_828DE190(List_828DE190 *l)
{
  Node_828DE190 *n = l->head->next;
  if (n != l->head) {
    n->prev->next = n->next;
    n->next->prev = n->prev;
    fn_8265CA20(n);
    l->size = l->size - 1;
  }
}
