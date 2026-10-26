typedef struct Node Node;
struct Node { Node *next; Node *prev; };
typedef struct { Node *head; int size; } List;
typedef struct { Node *ptr; } It;
extern void fn_8265CA20(Node *);

It *fn_8286D418(It *out, List *l, It where)
{
  Node *n = where.ptr;
  where.ptr = where.ptr->next;
  if (n != l->head) {
    n->prev->next = n->next;
    n->next->prev = n->prev;
    fn_8265CA20(n);
    l->size--;
  }
  *out = where;
  return out;
}
