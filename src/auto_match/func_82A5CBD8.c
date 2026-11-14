typedef struct {
  int kind;
  void *owner;
} Item_82A5CBD8;
typedef struct Node_82A5CBD8 {
  Item_82A5CBD8 *item;
  struct Node_82A5CBD8 *next;
  struct Node_82A5CBD8 *prev;
} Node_82A5CBD8;
typedef struct {
  char pad0[0xcc];
  Node_82A5CBD8 *head;
} List_82A5CBD8;
typedef struct {
  char pad0[8];
  List_82A5CBD8 items;
} Self_82A5CBD8;

extern int fn_82A5C960(Self_82A5CBD8 *self);
extern Item_82A5CBD8 *fn_82A40B38(List_82A5CBD8 *list, Node_82A5CBD8 *node);
extern int fn_82A5CA80(Self_82A5CBD8 *self, Item_82A5CBD8 *item);

static __forceinline Item_82A5CBD8 *getNext(Node_82A5CBD8 **pos)
{
  Node_82A5CBD8 *n = *pos;
  if (n != 0) {
    *pos = n->next;
    return n->item;
  }
  return 0;
}

int fn_82A5CBD8(Self_82A5CBD8 *self, void *owner)
{
  Node_82A5CBD8 *pos;
  Node_82A5CBD8 *cur;
  Item_82A5CBD8 *item;
  int hr;
  int result = fn_82A5C960(self);
  pos = self->items.head;
  while (pos != 0) {
    cur = pos;
    item = getNext(&pos);
    if (item->owner == owner || owner == 0) {
      fn_82A40B38(&self->items, cur);
      hr = fn_82A5CA80(self, item);
      if (hr < 0)
        result = hr;
    }
  }
  return result;
}
