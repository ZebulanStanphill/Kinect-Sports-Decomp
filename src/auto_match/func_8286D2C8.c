typedef struct Node_8286D2C8 { struct Node_8286D2C8 *next; struct Node_8286D2C8 *prev; } Node_8286D2C8;
typedef struct { Node_8286D2C8 *head; int size; } List_8286D2C8;
extern void fn_8265CA20(void *);

void fn_8286D2C8(List_8286D2C8 *l)
{
  Node_8286D2C8 *h = l->head;
  Node_8286D2C8 *p = h->next;
  Node_8286D2C8 *n;
  h->next = h;
  l->head->prev = l->head;
  l->size = 0;
  while (p != l->head) {
    n = p->next;
    fn_8265CA20(p);
    p = n;
  }
}
