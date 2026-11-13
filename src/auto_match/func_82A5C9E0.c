typedef struct {
  int kind;
  int pad4;
  unsigned int state;
  void *owner;
  void *target;
  void *source;
} Item_82A5C9E0;
typedef struct Node_82A5C9E0 {
  Item_82A5C9E0 *item;
  struct Node_82A5C9E0 *next;
  struct Node_82A5C9E0 *prev;
} Node_82A5C9E0;
typedef struct {
  char pad0[0xcc];
  Node_82A5C9E0 *head;
} List_82A5C9E0;
typedef struct {
  char pad0[8];
  List_82A5C9E0 items;
} Self_82A5C9E0;

extern void fn_82A5C960(Self_82A5C9E0 *self);
extern Item_82A5C9E0 *fn_82A40B38(List_82A5C9E0 *list, Node_82A5C9E0 *node);
extern void fn_82A4F4E0(Item_82A5C9E0 *item);

static __forceinline Item_82A5C9E0 *getNext(Node_82A5C9E0 **pos)
{
  Node_82A5C9E0 *n = *pos;
  if (n != 0) {
    *pos = n->next;
    return n->item;
  }
  return 0;
}

void fn_82A5C9E0(Self_82A5C9E0 *self, void *obj)
{
  Node_82A5C9E0 *pos;
  Node_82A5C9E0 *cur;
  Item_82A5C9E0 *item;
  fn_82A5C960(self);
  pos = self->items.head;
  while (pos != 0) {
    cur = pos;
    item = getNext(&pos);
    if (item->owner == obj || (item->kind == 2 && (item->source == obj || item->target == obj))) {
      fn_82A40B38(&self->items, cur);
      if (item->state != 5)
        fn_82A4F4E0(item);
    }
  }
}
