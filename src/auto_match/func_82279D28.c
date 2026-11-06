typedef struct Item_82279D28 {
  char pad[0x10];
  unsigned int id;
} Item_82279D28;

typedef struct Node_82279D28 {
  struct Node_82279D28 *next;
  struct Node_82279D28 *prev;
  Item_82279D28 *item;
} Node_82279D28;

typedef struct Obj_82279D28 {
  char pad0[0x10];
  Node_82279D28 *list;
  char pad1[0x9c - 0x14];
  void *target;
} Obj_82279D28;

extern void fn_82279398(Item_82279D28 *, unsigned int);
extern void fn_8227E4B0(void *, unsigned int, int, int);

static __forceinline Item_82279D28 *find(Node_82279D28 *list, unsigned int id)
{
  Node_82279D28 *n;
  Item_82279D28 *it;

  for (n = list->next; n != list; n = n->next) {
    it = n->item;
    if (it->id == id) {
      return it;
    }
  }
  return 0;
}

void fn_82279D28(Obj_82279D28 *param_1, unsigned int param_2, unsigned int param_3)
{
  Item_82279D28 *found;

  if (param_1->target != 0) {
    fn_8227E4B0(param_1->target, param_2, param_3 == 0, 0);
    found = find(param_1->list, param_2);
    if (found != 0) {
      fn_82279398(found, param_3);
    }
  }
}
