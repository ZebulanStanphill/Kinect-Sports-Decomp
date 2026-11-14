typedef struct Node_8301B058 {
  struct Node_8301B058 *next;
  unsigned int key;
} Node_8301B058;

typedef struct List_8301B058 {
  Node_8301B058 *head;
} List_8301B058;

typedef struct Mgr_8301B058 {
  int f0;
  List_8301B058 list;
} Mgr_8301B058;

typedef struct Obj_8301B058 {
  char pad0[0xc];
  unsigned int key;
} Obj_8301B058;

extern unsigned int *fn_83019B78(List_8301B058 *list, unsigned int key);

static __forceinline unsigned int *Find(List_8301B058 *list, unsigned int key)
{
  Node_8301B058 *n;
  for (n = list->head; n != 0; n = n->next) {
    if (n->key == key)
      return &n->key;
  }
  return 0;
}

void fn_8301B058(Mgr_8301B058 *self, Obj_8301B058 *o)
{
  List_8301B058 *list = &self->list;
  unsigned int key = o->key;
  if (Find(list, key) == 0)
    fn_83019B78(list, key);
}
