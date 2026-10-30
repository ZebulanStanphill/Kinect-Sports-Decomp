typedef struct Node_82883118 {
  struct Node_82883118 *left, *parent, *right;
  unsigned key;
  int val;
  char pad[1];
  unsigned char isnil;
} Node_82883118;
typedef struct { int pad; Node_82883118 *head; } Tree_82883118;
extern Node_82883118 *fn_8289EE00(Tree_82883118 *);
extern void fn_82880E08(Node_82883118 **, Tree_82883118 *, Node_82883118 *, Node_82883118 *);

int *fn_82883118(Tree_82883118 *t, unsigned *key)
{
  Node_82883118 *where = t->head;
  Node_82883118 *n = t->head->parent;
  Node_82883118 *out;
  while (n->isnil == 0) {
    if (n->key < *key) {
      n = n->right;
    } else {
      where = n;
      n = n->left;
    }
  }
  if (where == t->head || *key < where->key) {
    unsigned k = *key;
    Node_82883118 *nn = fn_8289EE00(t);
    unsigned q = (unsigned)nn + 0xc;
    if (q != 0) {
      *(unsigned *)q = k;
      *(int *)(q + 4) = 0;
    }
    fn_82880E08(&out, t, where, nn);
    where = out;
  }
  return &where->val;
}
