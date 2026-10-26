typedef struct Node Node;
struct Node { Node *left; Node *parent; Node *right; int key; void *ptr; void *rep; char color; char isnil; };
extern void fn_822315A0(void *);
extern void fn_8265CA20(Node *);

static void Dest(Node *n)
{
  if (n->rep != 0) {
    fn_822315A0(n->rep);
  }
}

void fn_828A5B90(void *tree, Node *root)
{
  Node *p;
  for (p = root; !p->isnil; root = p) {
    fn_828A5B90(tree, p->right);
    p = p->left;
    Dest(root);
    fn_8265CA20(root);
  }
}
