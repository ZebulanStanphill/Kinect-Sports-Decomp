typedef struct Node_8301AAF8 { struct Node_8301AAF8 *next; unsigned int key; char *value; } Node_8301AAF8;
typedef struct Table_8301AAF8 { int header[10]; Node_8301AAF8 *buckets[193]; } Table_8301AAF8;
static __forceinline char **find_8301AAF8(Table_8301AAF8 *table,unsigned int key) {
  Node_8301AAF8 *node=table->buckets[key%193];
  while (node != 0) {
    if (node->key == key) return &node->value;
    node=node->next;
  }
  return 0;
}
typedef struct Pair_8301AAF8 {unsigned a,b;} Pair_8301AAF8;
int fn_8301AAF8(Table_8301AAF8 *table,unsigned key,Pair_8301AAF8 *out) {
 char **slot=find_8301AAF8(table,key);
 char *p;
 if(!slot)return 2;
 p=*slot+8 ? *slot+12 : 0;
 *out=*(Pair_8301AAF8 *)p;
 return 1;
}
