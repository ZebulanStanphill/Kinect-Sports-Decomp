typedef struct Node_82FF82A8 {
  struct Node_82FF82A8 *next;
  int a, b;
} Node_82FF82A8;
typedef struct List_82FF82A8 {
  Node_82FF82A8 *head;
  Node_82FF82A8 *tail;
  Node_82FF82A8 *free_;
  int pad[2];
  int count;
} List_82FF82A8;
extern unsigned char fn_83019A10(void);

int *fn_82FF82A8(List_82FF82A8 *l, int *v)
{
  Node_82FF82A8 *n;
  if (fn_83019A10() != 0) {
    if (l->tail == 0) {
      l->head = l->free_;
    } else {
      l->tail->next = l->free_;
    }
    l->tail = l->free_;
    l->free_ = l->free_->next;
    l->tail->next = 0;
    n = l->tail;
    l->count = l->count + 1;
    n->a = v[0];
    n->b = v[1];
    return &n->a;
  }
  return 0;
}
