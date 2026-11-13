typedef struct Node_828C0148 {
  struct Node_828C0148 *left, *parent, *right;
  int pad;
  unsigned __int64 key;
  char value[8];
  unsigned char color;
  unsigned char isnil;
} Node_828C0148;
typedef struct { int pad; Node_828C0148 *head; } Tree_828C0148;

static unsigned char less(Node_828C0148 *n, const unsigned __int64 *k)
{
  return n->key < *k;
}

Node_828C0148 *fn_828C0148(Tree_828C0148 *t, const unsigned __int64 *key)
{
  Node_828C0148 *where = t->head;
  Node_828C0148 *node = where->parent;
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
