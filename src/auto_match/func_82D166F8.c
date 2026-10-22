typedef struct Node {
  struct Node *next;
  struct Node *prev;
  int a, b, c, d, e, f;
  struct { int v[8]; } arr;
  struct { int g, h; } gh;
} Node;

typedef struct Pool {
  char pad[0x900];
  Node *free;
  int used;
} Pool;

typedef struct List {
  Pool **pool;
  int ready;
  int f8;
  Node *head;
  int count;
} List;

extern Pool *fn_82D13478(List *);

Node *fn_82D166F8(List *l, Node *src)
{
  Pool *pool;
  Node *n;

  if (l->ready == 0 || (pool = *l->pool, pool->free == 0)) {
    pool = fn_82D13478(l);
  }
  n = pool->free;
  pool->free = n->next;
  pool->used++;
  n->a = src->a;
  n->b = src->b;
  n->c = src->c;
  n->d = src->d;
  n->e = src->e;
  n->f = src->f;
  n->arr = src->arr;
  n->gh = src->gh;
  n->prev = 0;
  n->next = l->head;
  if (l->head != 0) {
    l->head->prev = n;
  }
  l->head = n;
  l->count++;
  return n;
}
