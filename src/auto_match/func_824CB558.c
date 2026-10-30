typedef struct Str_824CB558 { char pad[0x1c]; } Str_824CB558;
typedef struct Pair_824CB558 { Str_824CB558 first; Str_824CB558 second; } Pair_824CB558;
typedef struct Node_824CB558 {
  struct Node_824CB558 *left;
  struct Node_824CB558 *parent;
  struct Node_824CB558 *right;
  Pair_824CB558 val;
  char pad[12];
  char color;
  char isnil;
} Node_824CB558;
extern void fn_82230300(Str_824CB558 *, int, int);
extern void fn_8265CA20(void *);

void fn_824CB558(void *tree, Node_824CB558 *root)
{
  Node_824CB558 *p;
  Pair_824CB558 *v;
  for (p = root; !p->isnil; root = p) {
    fn_824CB558(tree, p->right);
    p = p->left;
    v = &root->val;
    fn_82230300(&v->second, 1, 0);
    fn_82230300(&v->first, 1, 0);
    fn_8265CA20(root);
  }
}
