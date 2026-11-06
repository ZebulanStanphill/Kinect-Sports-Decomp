typedef struct Node_82AE6B08 {
  unsigned int prev;
  unsigned int next;
  unsigned int count;
  int pad;
  unsigned int items[1];
} Node_82AE6B08;

static Node_82AE6B08 *First_82AE6B08(Node_82AE6B08 *list)
{
  if (list->next & 1) {
    return 0;
  }
  return (Node_82AE6B08 *)list->next;
}

static Node_82AE6B08 *Next_82AE6B08(Node_82AE6B08 *n)
{
  unsigned int p = ((Node_82AE6B08 *)((unsigned int)n & ~1u))->next;
  if (p & 1) {
    return 0;
  }
  return (Node_82AE6B08 *)p;
}

int fn_82AE6B08(Node_82AE6B08 *list, unsigned int key)
{
  int base;
  Node_82AE6B08 *n;
  unsigned int i;

  base = 0;
  for (n = First_82AE6B08(list); n != 0; n = Next_82AE6B08(n)) {
    for (i = 0; i < n->count; i++) {
      if (n->items[i] == key) {
        return i + base;
      }
    }
    base += n->count;
  }
  return -1;
}
