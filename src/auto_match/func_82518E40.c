typedef struct Pair_82518E40 {
  char first[0x38];
  char second[0x18];
} Pair_82518E40;
typedef struct Node_82518E40 {
  struct Node_82518E40 *left;
  struct Node_82518E40 *parent;
  struct Node_82518E40 *right;
  int pad[3];
  Pair_82518E40 value;
  char color;
  char isnil;
} Node_82518E40;
extern void fn_82230300(void *s, int a, int b);
extern void fn_82359C18(void *v);
extern void fn_8265CA20(void *p);

void fn_82518E40(void *tree, Node_82518E40 *root)
{
  Node_82518E40 *p;
  Pair_82518E40 *v;

  for (p = root; p->isnil == 0; root = p) {
    fn_82518E40(tree, p->right);
    p = p->left;
    v = &root->value;
    fn_82359C18(v->second);
    fn_82230300(v->first, 1, 0);
    fn_8265CA20(root);
  }
}
