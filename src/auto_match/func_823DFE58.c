typedef struct Node_823DFE58 Node_823DFE58;
struct Node_823DFE58 { Node_823DFE58 *left; Node_823DFE58 *parent; Node_823DFE58 *right; char pad[0x99]; char isnil; };
typedef struct { int pad; Node_823DFE58 *head; int size; } Tree_823DFE58;
extern int fn_823E14E8();
extern int fn_8265CA20();
extern int fn_8265CAA0();
extern unsigned int lbl_821B6A48;
static __forceinline void Clear_823DFE58(Tree_823DFE58 *t)
{
  Node_823DFE58 *n = t->head->parent;
  Node_823DFE58 *next;
  while (!n->isnil) {
    fn_823E14E8(t, n->right);
    next = n->left;
    fn_8265CA20(n);
    n = next;
  }
  t->head->parent = t->head;
  t->head->left = t->head;
  t->head->right = t->head;
  t->size = 0;
}
void fn_823DFE58(unsigned int *param_1)
{
  Tree_823DFE58 *t = (Tree_823DFE58 *)(param_1 + 1);
  *param_1 = (unsigned int)&lbl_821B6A48;
  Clear_823DFE58(t);
  fn_8265CAA0(param_1[5]);
  fn_8265CAA0(param_1[6]);
  Clear_823DFE58(t);
  fn_8265CA20(t->head);
}

