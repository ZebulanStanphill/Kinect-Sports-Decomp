typedef struct Node { struct Node *left; struct Node *parent; struct Node *right; } Node;
extern void fn_82230300(void *p, int a, int b);
extern void fn_8265CA20(void *p);

void fn_82550380(void *self, Node *root)
{
  Node *p;
  for (p = root; !((unsigned char *)p)[0x2d]; root = p) {
    fn_82550380(self, p->right);
    p = p->left;
    fn_82230300((char *)root + 0xc, 1, 0);
    fn_8265CA20(root);
  }
}
