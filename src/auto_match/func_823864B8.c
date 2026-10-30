extern void fn_82386848(void *, void *, void *, void *);
extern void fn_824A30C8(void *);
extern struct Tree_823864B8 *lbl_83276560;

typedef struct Node_823864B8 {
  struct Node_823864B8 *left;
  struct Node_823864B8 *parent;
  struct Node_823864B8 *right;
  int pad;
  unsigned int key;
  char pad2[0x1d];
  char isnil;
} Node_823864B8;
typedef struct Tree_823864B8 {
  int pad;
  Node_823864B8 *head;
} Tree_823864B8;
typedef struct It_823864B8 {
  Node_823864B8 *p;
} It_823864B8;

int fn_823864B8(unsigned int *keyp)
{
  Tree_823864B8 *tree = lbl_83276560;
  Node_823864B8 *lo = tree->head;
  Node_823864B8 *hi = tree->head;
  Node_823864B8 *n = lo->parent;
  It_823864B8 it;
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
    fn_824A30C8(&it);
  }
  fn_82386848(&it, tree, lo, hi);
  return count;
}
