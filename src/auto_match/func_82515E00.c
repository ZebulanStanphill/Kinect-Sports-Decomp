typedef struct Node { struct Node *left; struct Node *parent; struct Node *right; } Node;
extern void fn_82230300(void *p, int a, int b);
extern void fn_8265CA20(void *p);

void fn_82515E00(void *self, Node *root)
{
  Node *p;
  for (p = root; !((unsigned char *)p)[0x49]; root = p) {
    fn_82515E00(self, p->right);
    p = p->left;
    fn_82230300((char *)root + 0x14, 1, 0);
    fn_8265CA20(root);
  }
}
