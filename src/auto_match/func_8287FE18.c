typedef struct Node_8287FE18 Node_8287FE18;
struct Node_8287FE18 {
  char pad[0x2c];
  struct List_8287FE18 *list;
  Node_8287FE18 *next;
  Node_8287FE18 *prev;
};
typedef struct List_8287FE18 {
  Node_8287FE18 *head;
  Node_8287FE18 *tail;
  int count;
} List_8287FE18;

void fn_8287FE18(List_8287FE18 *l, Node_8287FE18 *n)
{
  Node_8287FE18 *t = l->tail;
  if (t != 0) {
    if (t->next != 0) {
      t->next->prev = n;
    }
    n->next = t->next;
    t->next = n;
  } else {
    if (l->head != 0) {
      l->head->prev = n;
    }
    n->next = l->head;
    l->head = n;
  }
  n->prev = t;
  if (l->tail == t) {
    l->tail = n;
  }
  l->count = l->count + 1;
  n->list = l;
}
