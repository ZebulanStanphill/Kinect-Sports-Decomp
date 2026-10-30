extern void fn_8265CA20(void *);
extern void fn_82888858(void *, void *);
extern void fn_828888D0(void *, void *);
extern __declspec(noreturn) void fn_82F622A8(const char *);
typedef struct Node_82888C30 {
  struct Node_82888C30 *left, *parent, *right;
  char pad[0x28];
  void *f34, *f38, *f3c;
  char pad2[0x20];
  unsigned char color;
  unsigned char isnil;
} Node;
typedef struct Tree_82888C30 { int f0; Node *head; unsigned int size; } Tree;
typedef struct It_82888C30 { Node *p; } It;
It * fn_82888C30(It *out, Tree *t, unsigned char addleft, Node *where, Node *n)
{
  Node *x;
  if (t->size >= 0x3333332) {
    if (n->f34 != 0) fn_8265CA20(n->f34);
    n->f34 = 0;
    n->f38 = 0;
    n->f3c = 0;
    fn_8265CA20(n);
    fn_82F622A8("map/set<T> too long");
  }
  t->size = t->size + 1;
  n->parent = where;
  if (where == t->head) {
    t->head->parent = n;
    t->head->left = n;
    t->head->right = n;
  } else if (addleft != 0) {
    where->left = n;
    if (where == t->head->left) t->head->left = n;
  } else {
    where->right = n;
    if (where == t->head->right) t->head->right = n;
  }
  x = n;
  while (x->parent->color == 0) {
    if (x->parent == x->parent->parent->left) {
      Node *u = x->parent->parent->right;
      if (u->color == 0) {
        x->parent->color = 1;
        u->color = 1;
        x->parent->parent->color = 0;
        x = x->parent->parent;
      } else {
        if (x == x->parent->right) {
          x = x->parent;
          fn_828888D0(t, x);
        }
        x->parent->color = 1;
        x->parent->parent->color = 0;
        fn_82888858(t, x->parent->parent);
      }
    } else {
      Node *u = x->parent->parent->left;
      if (u->color == 0) {
        x->parent->color = 1;
        u->color = 1;
        x->parent->parent->color = 0;
        x = x->parent->parent;
      } else {
        if (x == x->parent->left) {
          x = x->parent;
          fn_82888858(t, x);
        }
        x->parent->color = 1;
        x->parent->parent->color = 0;
        fn_828888D0(t, x->parent->parent);
      }
    }
  }
  { Node *h = t->head;
  out->p = n;
  h->parent->color = 1; }
  return out;
}
