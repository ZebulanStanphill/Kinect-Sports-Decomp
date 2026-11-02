typedef struct Node_82290718 { struct Node_82290718 *left, *parent, *right; int val[8]; char color, isnil; } Node_82290718;
typedef struct { int pad; Node_82290718 *head; int size; } Tree_82290718;
typedef struct { Node_82290718 *p; } It_82290718;
extern void fn_82230300(void *, int, int);
extern It_82290718 *fn_82290970(It_82290718 *, Tree_82290718 *, Node_82290718 *);
extern void fn_82550380(Tree_82290718 *, Node_82290718 *);
extern void fn_8265CA20(void *);

It_82290718 *fn_82290718(It_82290718 *out, Tree_82290718 *t, Node_82290718 *first, Node_82290718 *last)
{
  Node_82290718 *head = t->head;
  if (first == head->left && last == head) {
    Node_82290718 *root = head->parent;
    Node_82290718 *p;
    for (p = root; !p->isnil; root = p) {
      fn_82550380(t, p->right);
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
    It_82290718 tmp;
    while (first != last) {
      Node_82290718 *cur = first;
      if (!first->isnil) {
        Node_82290718 *n = first->right;
        if (!n->isnil) {
          Node_82290718 *q = n->left;
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
      fn_82290970(&tmp, t, cur);
    }
    out->p = first;
  }
  return out;
}
