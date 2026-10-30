typedef struct Pair_82F577B8 { char first[0x18]; char second[0x18]; } Pair_82F577B8;
typedef struct Node_82F577B8 {
  struct Node_82F577B8 *left;
  struct Node_82F577B8 *parent;
  struct Node_82F577B8 *right;
  int pad[3];
  Pair_82F577B8 value;
  char color;
  char isnil;
} Node_82F577B8;
extern void fn_82359C18(void *);
extern void fn_824B4280(void *);

void fn_82F577B8(void *tree, Node_82F577B8 *root)
{
  Node_82F577B8 *p;
  Pair_82F577B8 *v;

  for (p = root; p->isnil == 0; root = p) {
    fn_82F577B8(tree, p->right);
    p = p->left;
    v = &root->value;
    fn_82359C18(v->second);
    fn_82359C18(v->first);
    fn_824B4280(root);
  }
}
