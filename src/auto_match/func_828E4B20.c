typedef struct Node {
  struct Node *left;
  struct Node *parent;
  struct Node *right;
  int key;
  unsigned char flag;
  char pad[11];
  char color;
  char isnil;
} Node;

extern void fn_8265CA20(Node *n);

void fn_828E4B20(void *tree, Node *root)
{
  Node *p;
  for (p = root; !p->isnil; root = p) {
    fn_828E4B20(tree, p->right);
    p = p->left;
    if (root->flag)
      root->flag = 0;
    fn_8265CA20(root);
  }
}
