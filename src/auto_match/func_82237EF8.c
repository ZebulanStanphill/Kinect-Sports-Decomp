typedef struct Node_82237EF8 {
  struct Node_82237EF8 *parent;
  struct Node_82237EF8 *right;
  struct Node_82237EF8 *left;
} Node_82237EF8;

void fn_82237EF8(Node_82237EF8 *w, Node_82237EF8 **root)
{
  Node_82237EF8 *p = w->parent;
  Node_82237EF8 *pn = w->right;
  Node_82237EF8 *l = pn->left;
  unsigned char isRight = (p->right == w);

  w->right = l;
  if (l != 0) l->parent = w;
  pn->left = w;
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
