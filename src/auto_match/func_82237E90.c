typedef struct Node_82237E90 {
  struct Node_82237E90 *parent;
  struct Node_82237E90 *right;
  struct Node_82237E90 *left;
} Node_82237E90;

void fn_82237E90(Node_82237E90 *w, Node_82237E90 **root)
{
  Node_82237E90 *p = w->parent;
  Node_82237E90 *pn = w->left;
  Node_82237E90 *l = pn->right;
  unsigned char isRight = (p->right == w);

  w->left = l;
  if (l != 0) l->parent = w;
  pn->right = w;
  w->parent = pn;
  pn->parent = p;
  if (*root == w) {
    *root = pn;
  } else if (isRight) {
    p->right = pn;
  } else {
    p->left = pn;
  }
}

