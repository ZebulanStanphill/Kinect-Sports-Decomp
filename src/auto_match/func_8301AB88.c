typedef struct Node_8301AB88 { struct Node_8301AB88 *next; unsigned int key; void *value; } Node_8301AB88;
typedef struct Table_8301AB88 { int header[10]; Node_8301AB88 *buckets[193]; } Table_8301AB88;
extern int fn_83034970(void *, void *, unsigned int);

static __forceinline void **find_8301AB88(Table_8301AB88 *table, unsigned int key)
{
  Node_8301AB88 *node = table->buckets[key % 193];
  while (node != 0) {
    if (node->key == key) return &node->value;
    node = node->next;
  }
  return 0;
}

int fn_8301AB88(Table_8301AB88 *table, unsigned int key, void *data, unsigned int size)
{
  void **slot = find_8301AB88(table, key);
  if (slot == 0) return 2;
  return fn_83034970(*slot, data, size);
}
