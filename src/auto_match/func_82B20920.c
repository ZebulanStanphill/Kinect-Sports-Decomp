typedef struct Key_82B20920 {
  unsigned int a;
  int b;
  unsigned int c;
} Key_82B20920;

typedef struct Node_82B20920 {
  unsigned int prev;
  unsigned int next;
  unsigned int count;
  int pad;
  Key_82B20920 items[1];
} Node_82B20920;

static __forceinline Node_82B20920 *First_82B20920(Node_82B20920 *list)
{
  if (list->next & 1) {
    return 0;
  }
  return (Node_82B20920 *)list->next;
}

static __forceinline Node_82B20920 *Next_82B20920(Node_82B20920 *n)
{
  unsigned int p = ((Node_82B20920 *)((unsigned int)n & ~1u))->next;
  if (p & 1) {
    return 0;
  }
  return (Node_82B20920 *)p;
}

static __forceinline unsigned char Equal_82B20920(const Key_82B20920 *x, const Key_82B20920 *y)
{
  return x->a == y->a && x->b == y->b && (x->c & ~4u) == (y->c & ~4u);
}

int fn_82B20920(Node_82B20920 *list, Key_82B20920 key)
{
  Node_82B20920 *n;
  unsigned int i;

  for (n = First_82B20920(list); n != 0; n = Next_82B20920(n)) {
    for (i = 0; i < n->count; i++) {
      if (Equal_82B20920(&n->items[i], &key)) {
        return 1;
      }
    }
  }
  return 0;
}
