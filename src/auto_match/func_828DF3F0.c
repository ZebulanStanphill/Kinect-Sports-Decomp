typedef struct Node_828DF3F0 { struct Node_828DF3F0 *left, *parent, *right; int key; char pad[5]; unsigned char isnil; } Node_828DF3F0;
typedef struct { int pad; Node_828DF3F0 *head; } Tree_828DF3F0;
extern unsigned char fn_828E0270(void *, int);

Node_828DF3F0 *fn_828DF3F0(Tree_828DF3F0 *t, int k)
{
  Node_828DF3F0 *where = t->head;
  Node_828DF3F0 *n = where->parent;
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
