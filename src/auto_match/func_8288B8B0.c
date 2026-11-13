typedef struct Node_8288B8B0 { struct Node_8288B8B0 *left, *parent, *right; int key; char pad[9]; unsigned char isnil; } Node_8288B8B0;
typedef struct { int pad; Node_8288B8B0 *head; } Tree_8288B8B0;
extern unsigned char fn_828B5650(void *, int);

Node_8288B8B0 *fn_8288B8B0(Tree_8288B8B0 *t, int k)
{
  Node_8288B8B0 *where = t->head;
  Node_8288B8B0 *n = where->parent;
  while (!n->isnil) {
    if (fn_828B5650(&n->key, k)) {
      n = n->right;
    } else {
      where = n;
      n = n->left;
    }
  }
  return where;
}
