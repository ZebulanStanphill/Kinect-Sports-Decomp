typedef struct Node_827F1B20 { int pad[2]; struct Node_827F1B20 *next; } Node_827F1B20;
typedef struct Item_827F1B20 { int pad[12]; struct Item_827F1B20 *next; } Item_827F1B20;
typedef struct {
  Item_827F1B20 *head; int pad; int pad2; int pad3; Node_827F1B20 *a; Node_827F1B20 *b; int pool[4];
} Obj_827F1B20;
extern void fn_827F0458(void *pool, Item_827F1B20 *it);

void fn_827F1B20(Obj_827F1B20 *o)
{
  Node_827F1B20 *n;
  Item_827F1B20 *it, *cur;
  for (n = o->a; n != o->b; n = n->next) {
  }
  it = o->head;
  if (it != 0) {
    do {
      cur = it;
      it = it->next;
      fn_827F0458(o->pool, cur);
    } while (it != 0);
  }
}
