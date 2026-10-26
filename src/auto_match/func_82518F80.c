typedef struct Node {
  struct Node *left;
  struct Node *parent;
  struct Node *right;
  int pad;
  int val0;
  struct Node *head;
  int pad2[2];
  char color;
  char isnil;
} Node;
typedef struct { Node *ptr; } Iter;
typedef struct { int v[4]; } Tmp;
extern void fn_825188C8(Tmp *, void *, Iter, Iter);
extern void fn_8265CA20(void *);

void fn_82518F80(void *self, Node *root)
{
  Node *p;
  Tmp t;
  Iter first, last;

  for (p = root; !p->isnil; root = p) {
    fn_82518F80(self, p->right);
    p = p->left;
    first.ptr = root->head->left;
    last.ptr = root->head;
    fn_825188C8(&t, &root->val0, first, last);
    fn_8265CA20(root->head);
    fn_8265CA20(root);
  }
}
