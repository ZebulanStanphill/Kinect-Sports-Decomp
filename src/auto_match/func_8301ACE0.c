typedef struct Node_8301ACE0 { struct Node_8301ACE0 *next; unsigned int key; void *value; } Node_8301ACE0;
typedef struct Table_8301ACE0 { int header[10]; Node_8301ACE0 *buckets[193]; } Table_8301ACE0;
extern int fn_83034A08(void *, int);

static __forceinline void **find_8301ACE0(Table_8301ACE0 *table, unsigned int key)
{
  Node_8301ACE0 *node = table->buckets[key % 193];
  while (node != 0) {
    if (node->key == key) return &node->value;
    node = node->next;
  }
  return 0;
}

int fn_8301ACE0(Table_8301ACE0 *table, unsigned int key, int arg)
{
  void **slot = find_8301ACE0(table, key);
  if (slot == 0) return 2;
  return fn_83034A08(*slot, arg);
}
