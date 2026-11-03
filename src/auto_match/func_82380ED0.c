typedef struct Node_82380ED0 {
  struct Node_82380ED0 *left, *parent, *right;
  char pad[0x8];
  char color, isnil;
} Node_82380ED0;
typedef struct Tree_82380ED0 {
  int pad;
  Node_82380ED0 *head;
  int size;
} Tree_82380ED0;
typedef struct Obj_82380ED0 {
  void *vt;
  int p4;
  Tree_82380ED0 a;
  int p14;
  Tree_82380ED0 b;
} Obj_82380ED0;
extern char lbl_821B3A10[];
extern int fn_8243DD58(Tree_82380ED0 *, Node_82380ED0 *);
extern int fn_8265CA20(void *);

static __forceinline void TreeDtor(Tree_82380ED0 *t)
{
  Node_82380ED0 *p = t->head->parent;
  Node_82380ED0 *q;
  while (!p->isnil) {
    fn_8243DD58(t, p->right);
    q = p->left;
    fn_8265CA20(p);
    p = q;
  }
  t->head->parent = t->head;
  t->head->left = t->head;
  t->head->right = t->head;
  t->size = 0;
  fn_8265CA20(t->head);
}

void fn_82380ED0(Obj_82380ED0 *o)
{
  o->vt = lbl_821B3A10;
  TreeDtor(&o->b);
  TreeDtor(&o->a);
}
