/* Takes a node from the pool's free list (refilling it with fn_82D2B950), copies the payload
   from src and links the node at the head of the list (same shape as fn_82D166F8). */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
  float vector4_f32[4];
} __vector4;
typedef struct Node_82D2D400 {
  struct Node_82D2D400 *next;
  struct Node_82D2D400 *prev;
  int a, b, c, d, e, f;
  __vector4 vec;
  int g, h, i, j, k;
} Node_82D2D400;
typedef struct Pool_82D2D400 {
  char pad[0xa00];
  Node_82D2D400 *free;
  int used;
} Pool_82D2D400;
typedef struct List_82D2D400 {
  Pool_82D2D400 **pool;
  int ready;
  int f8;
  Node_82D2D400 *head;
  int count;
} List_82D2D400;
extern Pool_82D2D400 *fn_82D2B950(List_82D2D400 *);
Node_82D2D400 *fn_82D2D400(List_82D2D400 *l, Node_82D2D400 *src)
{
  Pool_82D2D400 *pool;
  Node_82D2D400 *n;
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
  n->f = src->f;
  n->vec = src->vec;
  n->g = src->g;
  n->h = src->h;
  n->i = src->i;
  n->j = src->j;
  n->k = src->k;
  n->prev = 0;
  n->next = l->head;
  if (l->head != 0) {
    l->head->prev = n;
  }
  l->head = n;
  l->count++;
  return n;
}
