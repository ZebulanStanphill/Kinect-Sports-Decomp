typedef struct Node_8301AC00 { struct Node_8301AC00 *next; unsigned int key; char *value; } Node_8301AC00;
typedef struct Table_8301AC00 { int header[10]; Node_8301AC00 *buckets[193]; } Table_8301AC00;
static __forceinline char **find_8301AC00(Table_8301AC00 *table,unsigned int key) {
  Node_8301AC00 *node=table->buckets[key%193];
  while (node != 0) {
    if (node->key == key) return &node->value;
    node=node->next;
  }
  return 0;
}
int fn_8301AC00(Table_8301AC00 *table,unsigned int key,float value) {
  char **slot=find_8301AC00(table,key);
  if (slot == 0) return 2;
  *(float *)(*slot+0x50)=value;
  return 1;
}
