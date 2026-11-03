typedef struct Node_823BC2C8 {
  struct Node_823BC2C8 *left;
  struct Node_823BC2C8 *parent;
  struct Node_823BC2C8 *right;
  unsigned int pad0c;
  unsigned int pad10;
  unsigned int val;
  char pad18;
  char isnil;
} Node_823BC2C8;
typedef struct {
  unsigned int pad0;
  Node_823BC2C8 *head;
  unsigned int size;
} Tree_823BC2C8;
typedef struct {
  void *vt;
  char pad[0x1c];
  Tree_823BC2C8 tree;
} Obj_823BC2C8;

extern void fn_823B9360(Tree_823BC2C8 *t, Node_823BC2C8 *n);
extern void fn_822315A0(unsigned int p);
extern void fn_8265CA20(void *p);
extern char lbl_821B5E94[];

void fn_823BC2C8(Obj_823BC2C8 *o)
{
  Tree_823BC2C8 *t = &o->tree;
  Node_823BC2C8 *root;
  Node_823BC2C8 *p;

  o->vt = lbl_821B5E94;
  root = t->head->parent;
  for (p = root; !p->isnil; root = p) {
    fn_823B9360(t, p->right);
    p = p->left;
    {
      unsigned int v = root->val;
      if (v != 0) fn_822315A0(v);
    }
    fn_8265CA20(root);
  }
  t->head->parent = t->head;
  t->head->left = t->head;
  t->head->right = t->head;
  t->size = 0;
  fn_8265CA20(t->head);
}
