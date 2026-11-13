typedef struct Node_82EE9EA8 Node_82EE9EA8;
struct Node_82EE9EA8 {
  int pad0[2];
  Node_82EE9EA8 *left;
  Node_82EE9EA8 *right;
  __int64 key;
  unsigned rank;
};
Node_82EE9EA8 *fn_82EE9EA8(void *param_1, Node_82EE9EA8 *n, Node_82EE9EA8 *b)
{
  Node_82EE9EA8 *r = n->right;
  Node_82EE9EA8 *m;
  Node_82EE9EA8 *l;
  unsigned rk;
  if (r == 0) m = b;
  else if (b == 0) m = r;
  else if (r->key < b->key) m = fn_82EE9EA8(param_1, r, b);
  else m = fn_82EE9EA8(param_1, b, r);
  l = n->left;
  n->right = m;
  if (l == 0 || l->rank < m->rank) {
    n->left = m;
    n->right = l;
  }
  if (n->right == 0) {
    rk = 1;
  } else {
    unsigned a = n->right->rank;
    unsigned c = n->left->rank;
    if (c < a) a = c;
    rk = a + 1;
  }
  n->rank = rk;
  return n;
}
