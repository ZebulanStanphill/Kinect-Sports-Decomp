typedef struct Str_822C77B8 { char pad[0x1c]; } Str_822C77B8;
typedef struct Pair_822C77B8 { Str_822C77B8 first; Str_822C77B8 second; } Pair_822C77B8;
typedef struct Node_822C77B8 {
  struct Node_822C77B8 *left;
  struct Node_822C77B8 *parent;
  struct Node_822C77B8 *right;
  Pair_822C77B8 val;
  char color;
  char isnil;
} Node_822C77B8;
extern void fn_82230300(Str_822C77B8 *, int, int);
extern void fn_8265CA20(void *);

void fn_822C77B8(void *tree, Node_822C77B8 *root)
{
  Node_822C77B8 *p;
  Pair_822C77B8 *v;
  for (p = root; !p->isnil; root = p) {
    fn_822C77B8(tree, p->right);
    p = p->left;
    v = &root->val;
    fn_82230300(&v->second, 1, 0);
    fn_82230300(&v->first, 1, 0);
    fn_8265CA20(root);
  }
}
