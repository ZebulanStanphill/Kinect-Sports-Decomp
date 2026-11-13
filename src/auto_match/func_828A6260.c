extern void fn_82197E58(void);
typedef struct Node_828A6260 {
  struct Node_828A6260 *left;
  struct Node_828A6260 *parent;
  struct Node_828A6260 *right;
  int pad[4];
  char color;
  char isnil;
} Node_828A6260;
typedef struct { int pad; Node_828A6260 *head; unsigned int size; } Tree_828A6260;
extern void fn_8265CA20(void *);
extern void fn_8289DEB8(Tree_828A6260 *, Node_828A6260 *);
extern void fn_8289E0B0(Tree_828A6260 *, Node_828A6260 *);
extern __declspec(noreturn) void fn_82F622A8(const char *);

Node_828A6260 **fn_828A6260(Node_828A6260 **out, Tree_828A6260 *tree, unsigned char addleft, Node_828A6260 *where, Node_828A6260 *node)
{
  Node_828A6260 *x;
  Node_828A6260 *p;
  Node_828A6260 *g;
  Node_828A6260 *u;
  if (tree->size >= 0xffffffe) {
    if (*((char *)node + 0x10) != 0) {
      *((char *)node + 0x10) = 0;
    }
    fn_8265CA20(node);
    fn_82F622A8("map/set<T> too long");
  }
  tree->size = tree->size + 1;
  node->parent = where;
  if (where == tree->head) {
    tree->head->parent = node;
    tree->head->left = node;
    tree->head->right = node;
  } else if (addleft) {
    where->left = node;
    if (where == tree->head->left) {
      tree->head->left = node;
    }
  } else {
    where->right = node;
    if (where == tree->head->right) {
      tree->head->right = node;
    }
  }
  x = node;
  while (x->parent->color == 0) {
    p = x->parent;
    if (p == p->parent->left) {
      u = p->parent->right;
      if (u->color == 0) {
        x->parent->color = 1;
        u->color = 1;
        x->parent->parent->color = 0;
        x = x->parent->parent;
      } else {
        if (x == p->right) {
          x = p;
          fn_8289E0B0(tree, x);
        }
        x->parent->color = 1;
        x->parent->parent->color = 0;
        fn_8289DEB8(tree, x->parent->parent);
      }
    } else {
      u = p->parent->left;
      if (u->color == 0) {
        x->parent->color = 1;
        u->color = 1;
        x->parent->parent->color = 0;
        x = x->parent->parent;
      } else {
        if (x == p->left) {
          x = p;
          fn_8289DEB8(tree, x);
        }
        x->parent->color = 1;
        x->parent->parent->color = 0;
        fn_8289E0B0(tree, x->parent->parent);
      }
    }
  }
  u = tree->head;
  *out = node;
  u->parent->color = 1;
  return out;
}
