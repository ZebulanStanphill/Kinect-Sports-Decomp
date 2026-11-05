typedef struct Node_822709D0 {
  struct Node_822709D0 *left, *parent, *right;
  int pad[1];
  unsigned key;
  char pad2[0x61 - 0x14];
  char isnil;
} Node_822709D0;
typedef struct Tree_822709D0 { int comp; Node_822709D0 *head; unsigned size; } Tree_822709D0;
extern int fn_82270B70(void);
extern void fn_82272CC8(void *, Tree_822709D0 *, Node_822709D0 *, Node_822709D0 *);
extern void fn_82273428(Node_822709D0 **);

void fn_822709D0(unsigned key)
{
  int obj = fn_82270B70();
  Tree_822709D0 *tree = (Tree_822709D0 *)(obj + 0xe4);
  Node_822709D0 *lo = tree->head;
  Node_822709D0 *hi = lo;
  Node_822709D0 *x = tree->head->parent;
  Node_822709D0 *it;
  while (!x->isnil) {
    if (x->key < key) {
      x = x->right;
    } else {
      if (hi->isnil && key < x->key)
        hi = x;
      lo = x;
      x = x->left;
    }
  }
  if (hi->isnil != 0)
    x = tree->head->parent;
  else
    x = hi->left;
  while (!x->isnil) {
    if (key < x->key) {
      hi = x;
      x = x->left;
    } else {
      x = x->right;
    }
  }
  it = lo;
  while (it != hi)
    fn_82273428(&it);
  fn_82272CC8(&it, tree, lo, hi);
}
