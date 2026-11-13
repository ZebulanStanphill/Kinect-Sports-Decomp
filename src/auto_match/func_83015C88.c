typedef struct Node_83015C88 { struct Node_83015C88 *next; unsigned key; int value; } Node_83015C88;

int *fn_830150D0(int *table, unsigned key, unsigned bucket);

static __forceinline int *Find_83015C88(int *table, unsigned key, unsigned bucket)
{
  Node_83015C88 *n = ((Node_83015C88 **)table)[bucket + 1];

  while (n != 0) {
    if (n->key == key) return &n->value;
    n = n->next;
  }
  return 0;
}

int *fn_83015C88(int *table, unsigned key)
{
  unsigned bucket = key % 31;
  int *p = Find_83015C88(table, key, bucket);
  if (p != 0) return p;
  return fn_830150D0(table, key, bucket);
}
