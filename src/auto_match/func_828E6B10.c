extern unsigned char fn_828B5650(void *, void *);
typedef struct Node { struct Node *left, *parent, *right; unsigned a; char y[0x9]; char pad[3]; char color; char isnil; } Node;
typedef struct { unsigned a; char y[1]; } Key;
typedef struct { char pad[4]; Node *head; } Tree;
typedef struct { Node *lo, *hi; } Range;
static __forceinline unsigned char lt(Key *x, Key *y)
{
  if (x->a < y->a || (!(y->a < x->a) && fn_828B5650(x->y, y->y))) return 1;
  return 0;
}
Range *fn_828E6B10(Range *out, Tree *tree, Key *k)
{
  Node *lo = tree->head;
  Node *hi = lo;
  Node *p = lo->parent;
  while (!p->isnil) {
    if (lt((Key *)&p->a, k)) {
      p = p->right;
    } else {
      if (hi->isnil && lt(k, (Key *)&p->a)) hi = p;
      lo = p;
      p = p->left;
    }
  }
  if (hi->isnil) p = tree->head->parent; else p = hi->left;
  while (!p->isnil) {
    if (lt(k, (Key *)&p->a)) { hi = p; p = p->left; }
    else p = p->right;
  }
  out->lo = lo;
  out->hi = hi;
  return out;
}
