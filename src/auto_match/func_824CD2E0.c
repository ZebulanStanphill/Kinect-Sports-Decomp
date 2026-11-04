typedef struct Node_824CD2E0 { struct Node_824CD2E0 *left, *parent, *right; int val[9]; char color, isnil; } Node_824CD2E0;
typedef struct { int pad; Node_824CD2E0 *head; int size; } Tree_824CD2E0;
typedef struct { Node_824CD2E0 *p; } It_824CD2E0;
extern void fn_82230300(void *, int, int);
extern It_824CD2E0 *fn_8258DF98(It_824CD2E0 *, Tree_824CD2E0 *, Node_824CD2E0 *);
extern void fn_824CD420(Tree_824CD2E0 *, Node_824CD2E0 *);
extern void fn_8265CA20(void *);

It_824CD2E0 *fn_824CD2E0(It_824CD2E0 *out, Tree_824CD2E0 *t, Node_824CD2E0 *first, Node_824CD2E0 *last)
{
  Node_824CD2E0 *head = t->head;
  if (first == head->left && last == head) {
    Node_824CD2E0 *root = head->parent;
    Node_824CD2E0 *p;
    for (p = root; !p->isnil; root = p) {
      fn_824CD420(t, p->right);
      p = p->left;
      fn_82230300(root->val, 1, 0);
      fn_8265CA20(root);
    }
    t->head->parent = t->head;
    t->head->left = t->head;
    t->head->right = t->head;
    t->size = 0;
    out->p = t->head->left;
  } else {
    It_824CD2E0 tmp;
    while (first != last) {
      Node_824CD2E0 *cur = first;
      if (!first->isnil) {
        Node_824CD2E0 *n = first->right;
        if (!n->isnil) {
          Node_824CD2E0 *q = n->left;
          while (!q->isnil) {
            n = q;
            q = q->left;
          }
          first = n;
        } else {
          while (!(n = first->parent)->isnil && first == n->right) first = n;
          first = n;
        }
      }
      fn_8258DF98(&tmp, t, cur);
    }
    out->p = first;
  }
  return out;
}
