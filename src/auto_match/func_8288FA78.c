typedef struct Node_8288FA78 { struct Node_8288FA78 *next, *prev; unsigned val; } Node_8288FA78;
typedef struct List_8288FA78 { Node_8288FA78 *head; int size; } List_8288FA78;
extern void fn_8265CA20(n);

void fn_8288FA78(int param_1, unsigned param_2)
{
  List_8288FA78 *l = (List_8288FA78 *)(param_1 + 0x50);
  Node_8288FA78 *h = l->head;
  Node_8288FA78 *n;

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
