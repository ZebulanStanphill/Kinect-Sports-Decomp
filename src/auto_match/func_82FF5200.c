typedef struct Node_82FF5200 { struct Node_82FF5200 *next; int pad[1]; unsigned key; int pad2; int value; } Node_82FF5200;

int *fn_82FF5200(int *table, unsigned key)
{
  Node_82FF5200 *n = ((Node_82FF5200 **)table)[key % 31 + 1];

  while (n != 0) {
    if (n->key == key) return &n->value;
    n = n->next;
  }
  return 0;
}
