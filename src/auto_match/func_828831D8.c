typedef struct Node_828831D8 {
  struct Node_828831D8 *left, *parent, *right;
  int pad0;
  unsigned key;
  unsigned __int64 val;
  char color;
  unsigned char isnil;
} Node_828831D8;
typedef struct { int pad; Node_828831D8 *head; } Tree_828831D8;
extern Node_828831D8 *fn_828807A0(Tree_828831D8 *);
extern void fn_82880FB8(Node_828831D8 **, Tree_828831D8 *, Node_828831D8 *, Node_828831D8 *);

unsigned __int64 *fn_828831D8(Tree_828831D8 *t, unsigned *key)
{
  Node_828831D8 *where = t->head;
  Node_828831D8 *n = t->head->parent;
  Node_828831D8 *out;
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
    Node_828831D8 *nn = fn_828807A0(t);
    unsigned q = (unsigned)nn + 0x10;
    if (q != 0) {
      *(unsigned *)q = k;
      *(unsigned __int64 *)(q + 8) = 0;
    }
    fn_82880FB8(&out, t, where, nn);
    where = out;
  }
  return &where->val;
}
