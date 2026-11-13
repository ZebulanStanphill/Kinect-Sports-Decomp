typedef struct Node_828313D0 {
  struct Node_828313D0 *left;
  struct Node_828313D0 *parent;
  struct Node_828313D0 *right;
  unsigned key;
  int value;
  char color;
  char isnil;
} Node_828313D0;

typedef struct Tree_828313D0 {
  int pad;
  Node_828313D0 *head;
} Tree_828313D0;

typedef struct Tree2_828313D0 {
  int pad;
  Node_828313D0 *head;
} Tree2_828313D0;

typedef struct Pair_828313D0 {
  unsigned key;
  int value;
} Pair_828313D0;

typedef struct Iter_828313D0 {
  Node_828313D0 *node;
  int pad;
} Iter_828313D0;

extern Iter_828313D0 *fn_82831370(Iter_828313D0 *, Tree_828313D0 *, Node_828313D0 *, Pair_828313D0 *);

int *fn_828313D0(Tree_828313D0 *t, unsigned *k)
{
  Node_828313D0 *where = t->head;
  Node_828313D0 *p = t->head->parent;
  Node_828313D0 *res;
  if (p->isnil == 0) {
    do {
      if (p->key < *k) {
        p = p->right;
      } else {
        where = p;
        p = p->left;
      }
    } while (p->isnil == 0);
  }
  res = where;
  if (where == t->head || *k < where->key) {
    struct { Iter_828313D0 ret; Pair_828313D0 pr; } l;
    l.pr.key = *k;
    l.pr.value = 0;
    res = fn_82831370(&l.ret, t, where, &l.pr)->node;
  }
  return &res->value;
}
