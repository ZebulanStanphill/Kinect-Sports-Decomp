typedef struct Node_82FEF228 { struct Node_82FEF228 *next; } Node_82FEF228;
typedef struct List_82FEF228 { Node_82FEF228 *head; Node_82FEF228 *tail; int count; } List_82FEF228;

static Node_82FEF228 *List_find(List_82FEF228 *l, Node_82FEF228 *x, Node_82FEF228 **prev)
{
  Node_82FEF228 *n;
  *prev = 0;
  for (n = l->head; n != 0; n = n->next) {
    if (n == x) return n;
    *prev = n;
  }
  return 0;
}

static int List_remove(List_82FEF228 *l, Node_82FEF228 *x)
{
  Node_82FEF228 *prev;
  Node_82FEF228 *n = List_find(l, x, &prev);
  if (n != 0) {
    if (n == l->head) l->head = n->next; else prev->next = n->next;
    if (n == l->tail) l->tail = prev;
    l->count--;
    return 1;
  }
  return 2;
}

int fn_82FEF228(List_82FEF228 *l, Node_82FEF228 *x)
{
  return List_remove(l, x);
}
