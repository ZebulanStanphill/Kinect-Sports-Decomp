typedef struct Node_828E2CC8 { struct Node_828E2CC8 *left, *parent, *right; int key; char pad[0x15]; unsigned char isnil; } Node_828E2CC8;
typedef struct { int pad; Node_828E2CC8 *head; } Tree_828E2CC8;
extern unsigned char fn_828E0270(void *, int);

Node_828E2CC8 *fn_828E2CC8(Tree_828E2CC8 *t, int k)
{
  Node_828E2CC8 *where = t->head;
  Node_828E2CC8 *n = where->parent;
  while (!n->isnil) {
    if (fn_828E0270(&n->key, k)) {
      n = n->right;
    } else {
      where = n;
      n = n->left;
    }
  }
  return where;
}
