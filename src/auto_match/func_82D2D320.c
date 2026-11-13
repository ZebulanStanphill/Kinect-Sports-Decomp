typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
  float vector4_f32[4];
} __vector4;
typedef struct Node_82D2D320 {
  struct Node_82D2D320 *next;
  struct Node_82D2D320 *prev;
  int pad8[2];
  __vector4 a;
  __vector4 b;
  __vector4 c;
  int d, e;
} Node_82D2D320;
typedef struct Pool_82D2D320 {
  char pad[0xa00];
  Node_82D2D320 *free;
  int used;
} Pool_82D2D320;
typedef struct List_82D2D320 {
  Pool_82D2D320 **pool;
  int ready;
  int f8;
  Node_82D2D320 *head;
  int count;
} List_82D2D320;
extern Pool_82D2D320 *fn_82D2B950(List_82D2D320 *);
Node_82D2D320 *fn_82D2D320(List_82D2D320 *l, Node_82D2D320 *src)
{
  Pool_82D2D320 *pool;
  Node_82D2D320 *n;
  if (l->ready == 0 || (pool = *l->pool, pool->free == 0)) {
    pool = fn_82D2B950(l);
  }
  n = pool->free;
  pool->free = n->next;
  pool->used++;
  n->a = src->a;
  n->b = src->b;
  n->c = src->c;
  n->d = src->d;
  n->e = src->e;
  n->prev = 0;
  n->next = l->head;
  if (l->head != 0) {
    l->head->prev = n;
  }
  l->head = n;
  l->count++;
  return n;
}
