typedef struct Node Node;
struct Node { Node *left; Node *parent; Node *right; int key; void *ptr; int pad; void *rep; char pad2[8]; char color; char isnil; };
extern void fn_822315A0(void *);
extern void fn_8265CA20(Node *);

static void Dest(Node *n)
{
  if (n->rep != 0) {
    fn_822315A0(n->rep);
  }
}

void fn_828E4530(void *tree, Node *root)
{
  Node *p;
  for (p = root; !p->isnil; root = p) {
    fn_828E4530(tree, p->right);
    p = p->left;
    Dest(root);
    fn_8265CA20(root);
  }
}
