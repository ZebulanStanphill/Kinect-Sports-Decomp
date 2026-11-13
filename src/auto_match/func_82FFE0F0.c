typedef struct Node_82FFE0F0 { struct Node_82FFE0F0 *next; unsigned key; int value; } Node_82FFE0F0;

int *fn_82FFE0F0(int *table, unsigned key)
{
  Node_82FFE0F0 *n = ((Node_82FFE0F0 **)table)[key % 31 + 1];

  while (n != 0) {
    if (n->key == key) return &n->value;
    n = n->next;
  }
  return 0;
}
