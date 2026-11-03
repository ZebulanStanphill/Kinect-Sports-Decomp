extern unsigned char fn_828B5650(void *, void *);
typedef struct { unsigned a, b, c; } Sub_828E63C8;
typedef struct { unsigned first; Sub_828E63C8 second; } Key_828E63C8;
typedef struct Node_828E63C8 {
  struct Node_828E63C8 *left, *parent, *right;
  Key_828E63C8 val;
  char color, isnil;
} Node_828E63C8;
typedef struct { int pad; Node_828E63C8 *head; } Tree_828E63C8;

Node_828E63C8 *fn_828E63C8(Tree_828E63C8 *t, Key_828E63C8 *k)
{
  Node_828E63C8 *y = t->head;
  Node_828E63C8 *x = y->parent;
  unsigned char less;
  Key_828E63C8 *v;
  while (x->isnil == 0) {
    v = &x->val;
    if (v->first < k->first || (!(k->first < v->first) && fn_828B5650(&v->second, &k->second) != 0)) less = 1; else less = 0;
    if (less) {
      x = x->right;
    } else {
      y = x;
      x = x->left;
    }
  }
  return y;
}
