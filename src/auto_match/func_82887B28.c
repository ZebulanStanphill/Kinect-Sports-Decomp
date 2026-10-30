typedef struct Node_82887B28 {
  struct Node_82887B28 *left, *parent, *right;
  int key;
  char val;
  char pad[4];
  unsigned char isnil;
} Node_82887B28;
typedef struct { int pad; Node_82887B28 *head; } Tree_82887B28;
extern Node_82887B28 *fn_8289EE00(Tree_82887B28 *);
extern void fn_82887928(Node_82887B28 **, Tree_82887B28 *, Node_82887B28 *, Node_82887B28 *);

char *fn_82887B28(Tree_82887B28 *t, int *key)
{
  Node_82887B28 *where = t->head;
  Node_82887B28 *n = t->head->parent;
  Node_82887B28 *out;
  while (n->isnil == 0) {
    if (n->key < *key) {
      n = n->right;
    } else {
      where = n;
      n = n->left;
    }
  }
  if (where == t->head || *key < where->key) {
    int k = *key;
    Node_82887B28 *nn = fn_8289EE00(t);
    unsigned q = (unsigned)nn + 0xc;
    if (q != 0) {
      *(int *)q = k;
      *(char *)(q + 4) = 0;
    }
    fn_82887928(&out, t, where, nn);
    where = out;
  }
  return &where->val;
}
