typedef struct Pair_824CB6A0 {
  char first[0x20];
  char second[0x88];
} Pair_824CB6A0;
typedef struct Node_824CB6A0 {
  struct Node_824CB6A0 *left;
  struct Node_824CB6A0 *parent;
  struct Node_824CB6A0 *right;
  int pad;
  Pair_824CB6A0 value;
  char color;
  char isnil;
} Node_824CB6A0;
extern void fn_82230300(void *s, int a, int b);
extern void fn_824C9CB8(void *v);
extern void fn_8265CA20(void *p);

void fn_824CB6A0(void *tree, Node_824CB6A0 *root)
{
  Node_824CB6A0 *p;
  Pair_824CB6A0 *v;

  for (p = root; p->isnil == 0; root = p) {
    fn_824CB6A0(tree, p->right);
    p = p->left;
    v = &root->value;
    fn_824C9CB8(v->second);
    fn_82230300(v->first, 1, 0);
    fn_8265CA20(root);
  }
}
