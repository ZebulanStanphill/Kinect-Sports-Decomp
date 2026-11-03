typedef struct Node_8288F9F8 { struct Node_8288F9F8 *next, *prev; unsigned val; } Node_8288F9F8;
typedef struct List_8288F9F8 { Node_8288F9F8 *head; int size; } List_8288F9F8;
extern void fn_8265CA20(n);

void fn_8288F9F8(int param_1, unsigned param_2)
{
  List_8288F9F8 *l = (List_8288F9F8 *)(param_1 + 0x44);
  Node_8288F9F8 *h = l->head;
  Node_8288F9F8 *n;

  for (n = h->next; n != h; n = n->next) {
    if (n->val == param_2) break;
  }
  if (n != l->head) {
    n->prev->next = n->next;
    n->next->prev = n->prev;
    fn_8265CA20(n);
    l->size = l->size - 1;
  }
}
