typedef struct Node_828B3080 {
  struct Node_828B3080 *left, *parent, *right;
  int pad;
  unsigned __int64 key;
  unsigned char color;
  unsigned char isnil;
} Node_828B3080;
typedef struct { int pad; Node_828B3080 *head; } Tree_828B3080;

static unsigned char less(Node_828B3080 *n, const unsigned __int64 *k)
{
  return n->key < *k;
}

Node_828B3080 *fn_828B3080(Tree_828B3080 *t, const unsigned __int64 *key)
{
  Node_828B3080 *where = t->head;
  Node_828B3080 *node = where->parent;
  while (node->isnil == 0) {
    if (less(node, key)) {
      node = node->right;
    } else {
      where = node;
      node = node->left;
    }
  }
  return where;
}
