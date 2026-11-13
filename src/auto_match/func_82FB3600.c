typedef struct Node_82FB3600 {
  struct Node_82FB3600 *next;
  int pad4;
  unsigned int key;
} Node_82FB3600;

typedef struct {
  Node_82FB3600 *head;
} List_82FB3600;

typedef struct {
  Node_82FB3600 *cur;
  Node_82FB3600 *prev;
} It_82FB3600;

typedef struct {
  int pad0;
  List_82FB3600 list;
} Obj_82FB3600;

extern void fn_82FB36E8(List_82FB3600 *l, Node_82FB3600 *n, Node_82FB3600 *prev);

void fn_82FB3600(Obj_82FB3600 *o, unsigned int key)
{
  List_82FB3600 *l = &o->list;
  It_82FB3600 it;
  it.cur = l->head;
  it.prev = 0;
  while (it.cur != 0) {
    if (it.cur->key == key) {
      It_82FB3600 next;
      next.cur = it.cur->next;
      next.prev = it.prev;
      fn_82FB36E8(l, it.cur, it.prev);
      it = next;
    } else {
      it.prev = it.cur;
      it.cur = it.cur->next;
    }
  }
}
