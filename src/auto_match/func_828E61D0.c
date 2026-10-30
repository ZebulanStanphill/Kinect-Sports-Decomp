typedef struct Node_828E61D0 {
  struct Node_828E61D0 *left, *parent, *right;
  unsigned ka, kb;
  char pad[9];
  unsigned char isnil;
} Node_828E61D0;
typedef struct { unsigned a, b; } Key_828E61D0;
typedef struct { int pad; Node_828E61D0 *head; } Tree_828E61D0;

static unsigned char less(Node_828E61D0 *n, Key_828E61D0 *k)
{
  return n->ka < k->a || (!(k->a < n->ka) && n->kb < k->b);
}

Node_828E61D0 *fn_828E61D0(Tree_828E61D0 *t, Key_828E61D0 *key)
{
  Node_828E61D0 *where = t->head;
  Node_828E61D0 *node = where->parent;
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
