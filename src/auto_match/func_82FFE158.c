typedef struct Node_82FFE158 { struct Node_82FFE158 *next; unsigned key; int value; } Node_82FFE158;

int *fn_82FFDF98(int *table, unsigned key, unsigned bucket);

static __forceinline int *Find_82FFE158(int *table, unsigned key, unsigned bucket)
{
  Node_82FFE158 *n = ((Node_82FFE158 **)table)[bucket + 1];

  while (n != 0) {
    if (n->key == key) return &n->value;
    n = n->next;
  }
  return 0;
}

int *fn_82FFE158(int *table, unsigned key)
{
  unsigned bucket = key % 31;
  int *p = Find_82FFE158(table, key, bucket);
  if (p != 0) return p;
  return fn_82FFDF98(table, key, bucket);
}
