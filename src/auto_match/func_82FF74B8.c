typedef struct Node_82FF74B8 {
  struct Node_82FF74B8 *next;
  unsigned int key;
} Node_82FF74B8;

typedef struct {
  Node_82FF74B8 *head;
} List_82FF74B8;

typedef struct {
  Node_82FF74B8 *cur;
  Node_82FF74B8 *prev;
} It_82FF74B8;

typedef struct {
  int pad0[4];
  List_82FF74B8 list;
} Obj_82FF74B8;

extern void fn_82FB36E8(List_82FF74B8 *l, Node_82FF74B8 *n, Node_82FF74B8 *prev);

int fn_82FF74B8(Obj_82FF74B8 *o, unsigned int key)
{
  List_82FF74B8 *l = &o->list;
  It_82FF74B8 it;
  it.cur = l->head;
  it.prev = 0;
  while (it.cur != 0) {
    if (it.cur->key == key) {
      It_82FF74B8 next;
      next.cur = it.cur->next;
      next.prev = it.prev;
      fn_82FB36E8(l, it.cur, it.prev);
      it = next;
    } else {
      it.prev = it.cur;
      it.cur = it.cur->next;
    }
  }
  return 1;
}
