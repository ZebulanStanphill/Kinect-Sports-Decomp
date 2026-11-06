void __dcbt(int offset, const void *base);
typedef struct Obj_825C5248 { char pad[0x1a4]; char a; char b; char c; } Obj_825C5248;
typedef struct Item_825C5248 { int f0; Obj_825C5248 *obj; } Item_825C5248;
typedef struct Node_825C5248 { Item_825C5248 *item; struct Node_825C5248 *next; } Node_825C5248;
typedef struct List_825C5248 { int f0; int f4; Node_825C5248 *head; } List_825C5248;
extern void fn_82575DF0(int a, Obj_825C5248 *o);
extern void fn_826182E0(Item_825C5248 *item, Obj_825C5248 *o, float f);

void fn_825C5248(List_825C5248 *l, float f)
{
  Node_825C5248 *n = l->head;
  while (n != 0) {
    Node_825C5248 *next = n->next;
    Obj_825C5248 *o;
    __dcbt(0, next);
    o = n->item->obj;
    if (o->a == 0 && o->b == 0 && o->c != 0) {
      fn_82575DF0(l->f4, o);
      n = next;
    } else {
      fn_826182E0(n->item, o, f);
      n = n->next;
    }
  }
}
