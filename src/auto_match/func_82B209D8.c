typedef struct Key_82B209D8 {
  unsigned int a;
  int b;
  unsigned int c;
} Key_82B209D8;

typedef struct Node_82B209D8 {
  unsigned int prev;
  unsigned int next;
  unsigned int count;
  int pad;
  Key_82B209D8 items[1];
} Node_82B209D8;

static __forceinline Node_82B209D8 *First_82B209D8(Node_82B209D8 *list)
{
  if (list->next & 1) {
    return 0;
  }
  return (Node_82B209D8 *)list->next;
}

static __forceinline Node_82B209D8 *Next_82B209D8(Node_82B209D8 *n)
{
  unsigned int p = ((Node_82B209D8 *)((unsigned int)n & ~1u))->next;
  if (p & 1) {
    return 0;
  }
  return (Node_82B209D8 *)p;
}

static __forceinline unsigned char Equal_82B209D8(const Key_82B209D8 *x, const Key_82B209D8 *y)
{
  return x->a == y->a && x->b == y->b && (x->c & ~4u) == (y->c & ~4u);
}

int fn_82B209D8(Node_82B209D8 *list, Key_82B209D8 key)
{
  int base;
  Node_82B209D8 *n;
  unsigned int i;

  base = 0;
  for (n = First_82B209D8(list); n != 0; n = Next_82B209D8(n)) {
    for (i = 0; i < n->count; i++) {
      if (Equal_82B209D8(&n->items[i], &key)) {
        return i + base;
      }
    }
    base += n->count;
  }
  return -1;
}
