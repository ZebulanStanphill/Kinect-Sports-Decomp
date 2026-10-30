typedef struct Str_82250848 { char pad[0x1c]; } Str_82250848;
typedef struct Pair_82250848 { Str_82250848 first; Str_82250848 second; } Pair_82250848;
typedef struct Node_82250848 {
  struct Node_82250848 *left;
  struct Node_82250848 *parent;
  struct Node_82250848 *right;
  Pair_82250848 val;
  char pad[4];
  char color;
  char isnil;
} Node_82250848;
extern void fn_82230300(Str_82250848 *, int, int);
extern void fn_8265CA20(void *);

void fn_82250848(void *tree, Node_82250848 *root)
{
  Node_82250848 *p;
  Pair_82250848 *v;
  for (p = root; !p->isnil; root = p) {
    fn_82250848(tree, p->right);
    p = p->left;
    v = &root->val;
    fn_82230300(&v->second, 1, 0);
    fn_82230300(&v->first, 1, 0);
    fn_8265CA20(root);
  }
}
