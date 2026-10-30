extern void fn_82386910(void *, void *, void *, void *);
extern void fn_82381BC0(void *);
extern struct Tree_823866C0 *lbl_83276564;

typedef struct Node_823866C0 {
  struct Node_823866C0 *left;
  struct Node_823866C0 *parent;
  struct Node_823866C0 *right;
  unsigned int key;
  char pad2[5];
  char isnil;
} Node_823866C0;
typedef struct Tree_823866C0 {
  int pad;
  Node_823866C0 *head;
} Tree_823866C0;
typedef struct It_823866C0 {
  Node_823866C0 *p;
} It_823866C0;

int fn_823866C0(unsigned int *keyp)
{
  Tree_823866C0 *tree = lbl_83276564;
  Node_823866C0 *lo = tree->head;
  Node_823866C0 *hi = tree->head;
  Node_823866C0 *n = lo->parent;
  It_823866C0 it;
  int count;
  while (!n->isnil) {
    if (n->key < *keyp) {
      n = n->right;
    } else {
      if (hi->isnil && *keyp < n->key) {
        hi = n;
      }
      lo = n;
      n = n->left;
    }
  }
  n = hi->isnil ? tree->head->parent : hi->left;
  while (!n->isnil) {
    if (*keyp < n->key) {
      hi = n;
      n = n->left;
    } else {
      n = n->right;
    }
  }
  count = 0;
  it.p = lo;
  while (it.p != hi) {
    count++;
    fn_82381BC0(&it);
  }
  fn_82386910(&it, tree, lo, hi);
  return count;
}
