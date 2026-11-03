typedef struct Node_82448FB0 {
  struct Node_82448FB0 *left, *parent, *right;
  int val;
  char color;
  char isnil;
} Node_82448FB0;
typedef struct Tree_82448FB0 { int pad; Node_82448FB0 *head; unsigned size; } Tree_82448FB0;
typedef struct Cont_82448FB0 {
  void *b, *e, *c;
  char pad[0x24];
  Tree_82448FB0 tree;
} Cont_82448FB0;
extern void fn_822733C8(Tree_82448FB0 *, Node_82448FB0 *);
extern void fn_8265CA20(void *);

void fn_82448FB0(Cont_82448FB0 **pp)
{
  Cont_82448FB0 *o = *pp;
  Tree_82448FB0 *t;
  Node_82448FB0 *x, *y;
  if (o != 0) {
    t = &o->tree;
    x = t->head->parent;
    while (!x->isnil) {
      fn_822733C8(t, x->right);
      y = x->left;
      fn_8265CA20(x);
      x = y;
    }
    t->head->parent = t->head;
    t->head->left = t->head;
    t->head->right = t->head;
    t->size = 0;
    fn_8265CA20(t->head);
    if (o->b != 0) fn_8265CA20(o->b);
    o->b = 0;
    o->e = 0;
    o->c = 0;
    fn_8265CA20(o);
  }
}
