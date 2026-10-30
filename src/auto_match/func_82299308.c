typedef struct Node { struct Node *left; struct Node *parent; struct Node *right; int pad; char val[0x1d]; char isnil; } Node;
extern void fn_82297DB0(void *p, int a, int b);
extern void fn_8265CA20(void *p);

void fn_82299308(void *self, Node *root)
{
  Node *p;
  for (p = root; !p->isnil; root = p) {
    fn_82299308(self, p->right);
    p = p->left;
    fn_82297DB0(&root->val, 1, 0);
    fn_8265CA20(root);
  }
}
