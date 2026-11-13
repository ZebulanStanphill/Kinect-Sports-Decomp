typedef struct Node_825B47E8 Node_825B47E8;
struct Node_825B47E8 { Node_825B47E8 *prev; Node_825B47E8 *next; };
typedef struct { int count; Node_825B47E8 *head; } List_825B47E8;

static __forceinline Node_825B47E8 *Init_825B47E8(Node_825B47E8 *p)
{
  p->prev = 0;
  p->next = 0;
  return p;
}

void fn_825B47E8(List_825B47E8 *l, Node_825B47E8 *p)
{
  Node_825B47E8 *n;
  Node_825B47E8 *h;
  Node_825B47E8 *cur;
  Node_825B47E8 *nx;
  n = p ? Init_825B47E8(p) : 0;
  h = l->head;
  if (h == 0 || n <= h) {
    n->next = h;
    if (l->head != 0) {
      l->head->prev = n;
    }
    l->head = n;
  } else {
    cur = h;
    while (cur->next != 0 && cur->next < n) {
      cur = cur->next;
    }
    nx = cur->next;
    n->prev = cur;
    n->next = nx;
    cur->next = n;
    if (n->next != 0) {
      n->next->prev = n;
    }
  }
  l->count = l->count + 1;
}
