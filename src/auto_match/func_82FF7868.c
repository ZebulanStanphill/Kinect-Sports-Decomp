typedef struct Node_82FF7868 {
  struct Node_82FF7868 *next;
  unsigned int key;
} Node_82FF7868;

typedef struct {
  Node_82FF7868 *head;
} List_82FF7868;

typedef struct {
  Node_82FF7868 *cur;
  Node_82FF7868 *prev;
} It_82FF7868;

typedef struct {
  int pad0[12];
  List_82FF7868 list;
} Obj_82FF7868;

extern void fn_82FF7FB8(List_82FF7868 *l, Node_82FF7868 *n, Node_82FF7868 *prev);

int fn_82FF7868(Obj_82FF7868 *o, unsigned int key)
{
  List_82FF7868 *l = &o->list;
  It_82FF7868 it;
  it.cur = l->head;
  it.prev = 0;
  while (it.cur != 0) {
    if (it.cur->key == key) {
      It_82FF7868 next;
      next.cur = it.cur->next;
      next.prev = it.prev;
      fn_82FF7FB8(l, it.cur, it.prev);
      it = next;
    } else {
      it.prev = it.cur;
      it.cur = it.cur->next;
    }
  }
  return 1;
}
