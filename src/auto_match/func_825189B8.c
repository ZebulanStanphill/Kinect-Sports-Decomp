extern void fn_82230300(void *, int, int);
extern void fn_82359C18(void *);
extern void fn_8265CA20(void *);
typedef struct Val_825189B8 {
  char str[0x38];
  char second[0x18];
} Val_825189B8;
typedef struct Node_825189B8 {
  struct Node_825189B8 *left;
  struct Node_825189B8 *parent;
  struct Node_825189B8 *right;
  char pad[0xc];
  Val_825189B8 val;
  char color;
  char isnil;
} Node_825189B8;
typedef struct Tree_825189B8 {
  int pad;
  Node_825189B8 *head;
  unsigned int size;
} Tree_825189B8;
extern void fn_82518E40(Tree_825189B8 *, Node_825189B8 *);

void fn_825189B8(Tree_825189B8 *param_1, Tree_825189B8 *param_2)
{
  Node_825189B8 *root;
  Node_825189B8 *p;
  Node_825189B8 *th;
  unsigned int ts;
  if (param_1 != param_2) {
    root = param_1->head->parent;
    for (p = root; p->isnil == 0; root = p) {
      Val_825189B8 *v;
      fn_82518E40(param_1, p->right);
      p = p->left;
      v = &root->val;
      fn_82359C18(v->second);
      fn_82230300(v, 1, 0);
      fn_8265CA20(root);
    }
    param_1->head->parent = param_1->head;
    param_1->head->left = param_1->head;
    param_1->head->right = param_1->head;
    param_1->size = 0;
    th = param_1->head;
    param_1->head = param_2->head;
    param_2->head = th;
    ts = param_1->size;
    param_1->size = param_2->size;
    param_2->size = ts;
  }
}
