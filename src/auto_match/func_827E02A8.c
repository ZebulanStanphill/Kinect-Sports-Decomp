typedef struct Node_827E02A8 { struct Node_827E02A8 *next; struct Node_827E02A8 *prev; } Node_827E02A8;
typedef struct Alloc_827E02A8 { void **vtbl; } Alloc_827E02A8;
typedef struct Sub_827E02A8 { Alloc_827E02A8 *alloc; int x; } Sub_827E02A8;
typedef struct List_827E02A8 { Node_827E02A8 *head; int size; Sub_827E02A8 sub; } List_827E02A8;
typedef void (*Free_827E02A8)(Alloc_827E02A8 *, Node_827E02A8 *, int *);

void fn_827E02A8(List_827E02A8 *param_1)
{
  Node_827E02A8 *head = param_1->head;
  Node_827E02A8 *n = head->next;
  Node_827E02A8 *nx;
  Sub_827E02A8 *sub;
  head->next = head;
  param_1->head->prev = param_1->head;
  param_1->size = 0;
  if (n != param_1->head) {
    sub = &param_1->sub;
    do {
      nx = n->next;
      (*(Free_827E02A8 *)((char *)sub->alloc->vtbl + 0x18))(sub->alloc, n, &sub->x);
      n = nx;
    } while (nx != param_1->head);
  }
}
