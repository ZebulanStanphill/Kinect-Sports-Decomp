typedef struct Node Node;
typedef struct { int a; int b; } Val;
struct Node { Node *next; Val v; };
typedef struct { Node *head; Node *tail; Node *free; int pad[2]; int count; } List;
extern unsigned char fn_83019A10(List *);

Val *fn_82FF3CF0(List *l, Val *v)
{
  Node *n;

  if (fn_83019A10(l)) {
    if (l->head == 0) {
      l->tail = l->free;
    }
    n = l->free;
    l->free = n->next;
    n->next = l->head;
    l->head = n;
    l->count++;
    n->v.a = v->a;
    n->v.b = v->b;
    return &n->v;
  }
  return 0;
}
