typedef struct Node_82E58B58 {
  int val;
  struct Node_82E58B58 *next;
  struct Node_82E58B58 *prev;
} Node_82E58B58;

typedef struct List_82E58B58 {
  char pad[0xe0];
  Node_82E58B58 *head;
  Node_82E58B58 *tail;
  int count;
} List_82E58B58;

extern int fn_82E589E0(List_82E58B58 *, Node_82E58B58 **);

Node_82E58B58 *fn_82E58B58(List_82E58B58 *self, int v)
{
  Node_82E58B58 *n;
  Node_82E58B58 *p;
  if (fn_82E589E0(self, &n) < 0)
    return 0;
  p = n;
  p->val = v;
  p->next = 0;
  p->prev = self->tail;
  if (self->tail != 0)
    self->tail->next = p;
  else
    self->head = p;
  self->tail = p;
  self->count = self->count + 1;
  return p;
}
