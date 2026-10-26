typedef struct Node {
  struct Node *left;
  struct Node *parent;
  struct Node *right;
  int pad[1];
  int val0;
  struct Node *head;
  int pad2[2];
  char color;
  char isnil;
} Node;
typedef struct { Node *ptr; } Iter;
typedef struct { int v[4]; } Tmp;
extern void fn_8224ED20(Tmp *, void *, Iter, Iter);
extern void fn_8265CA20(void *);

void fn_82896900(void *self, Node *root)
{
  Node *p;
  Tmp t;
  Iter first, last;

  for (p = root; !p->isnil; root = p) {
    fn_82896900(self, p->right);
    p = p->left;
    first.ptr = root->head->left;
    last.ptr = root->head;
    fn_8224ED20(&t, &root->val0, first, last);
    fn_8265CA20(root->head);
    fn_8265CA20(root);
  }
}
