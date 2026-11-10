typedef struct Node_82890F90 { struct Node_82890F90 *next; struct Node_82890F90 *prev; unsigned int value; } Node_82890F90;
typedef struct { Node_82890F90 *head; int size; } List_82890F90;
typedef struct { char pad0[0x50]; List_82890F90 list; } Obj_82890F90;
extern void fn_828B27A8(List_82890F90 *list, Node_82890F90 *where, unsigned int *value);
static __forceinline void push_back(List_82890F90 *list, unsigned int *value)
{
  fn_828B27A8(list, list->head, value);
}
void fn_82890F90(Obj_82890F90 *self, unsigned int value)
{
  Node_82890F90 *n = self->list.head->next;
  while (n != self->list.head && n->value != value) {
    n = n->next;
  }
  if (n == self->list.head) {
    push_back(&self->list, &value);
  }
}
