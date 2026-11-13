typedef struct Node_82FF5268 { struct Node_82FF5268 *next; int pad[1]; unsigned key; int pad2; int value; } Node_82FF5268;

int *fn_82FF4670(int *table, unsigned key, unsigned bucket);

static __forceinline int *Find_82FF5268(int *table, unsigned key, unsigned bucket)
{
  Node_82FF5268 *n = ((Node_82FF5268 **)table)[bucket + 1];

  while (n != 0) {
    if (n->key == key) return &n->value;
    n = n->next;
  }
  return 0;
}

int *fn_82FF5268(int *table, unsigned key)
{
  unsigned bucket = key % 31;
  int *p = Find_82FF5268(table, key, bucket);
  if (p != 0) return p;
  return fn_82FF4670(table, key, bucket);
}
