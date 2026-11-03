typedef struct Node Node;
struct Node { int val; Node *prev; Node *next; };
typedef struct { char pad[0xe0]; Node *head; Node *tail; int count; } List;
extern int fn_82E589E0(List *, Node **);

Node *fn_82E58AC8(List *l, int v)
{
  Node *slot;
  Node *n;
  if (fn_82E589E0(l, &slot) < 0) {
    return 0;
  }
  n = slot;
  n->val = v;
  n->prev = l->head;
  n->next = 0;
  if (l->head != 0) {
    l->head->next = n;
  } else {
    l->tail = n;
  }
  l->head = n;
  l->count++;
  return n;
}
