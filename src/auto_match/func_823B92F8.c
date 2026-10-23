typedef struct Node Node;
struct Node {
  Node *left;
  Node *parent;
  Node *right;
  int pad[3];
  void *val;
  int pad2[5];
  char pad3[5];
  char isnil;
};
extern void fn_823B9060(void **);
extern void fn_8265CA20(void *);

void fn_823B92F8(void *self, Node *root)
{
  Node *p;
  for (p = root; !p->isnil; root = p) {
    fn_823B92F8(self, p->right);
    p = p->left;
    fn_823B9060(&root->val);
    fn_8265CA20(root->val);
    root->val = 0;
    fn_8265CA20(root);
  }
}
