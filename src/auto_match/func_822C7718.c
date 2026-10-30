typedef struct Node Node;
struct Node { Node *left; Node *parent; Node *right; char key[0x1c]; char val[0x1c]; char color; char isnil; };
typedef struct { int pad; Node *head; int size; } Tree;
extern void fn_822C77B8(Tree *, Node *);
extern void fn_82230300(void *, int, int);
extern void fn_8265CA20(void *);
void fn_822C7718(Tree *t)
{
  Node *n = t->head->parent;
  Node *nx = n;
  while (nx->isnil == 0) {
    char *s;
    fn_822C77B8(t, nx->right);
    s = n->key;
    nx = nx->left;
    fn_82230300(s + 0x1c, 1, 0);
    fn_82230300(s, 1, 0);
    fn_8265CA20(n);
    n = nx;
  }
  t->head->parent = t->head;
  t->head->left = t->head;
  t->head->right = t->head;
  t->size = 0;
  fn_8265CA20(t->head);
}
