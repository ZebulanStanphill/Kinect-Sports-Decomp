typedef struct Node_82829120 {
  struct Node_82829120 *left, *parent, *right;
  unsigned key;
  int val[1];
  char color, isnil;
} Node_82829120;
typedef struct { int pad; Node_82829120 *head; } Tree_82829120;
typedef struct { Node_82829120 *p; } It_82829120;

static void LowerBound_82829120(Tree_82829120 *t, It_82829120 *res, unsigned *key)
{
  Node_82829120 *x = t->head->parent;
  Node_82829120 *w = t->head;
  while (x->isnil == 0) {
    if (x->key < *key) {
      x = x->right;
    } else {
      w = x;
      x = x->left;
    }
  }
  res->p = w;
}

void fn_82829120(It_82829120 *out, Tree_82829120 *t, unsigned *key)
{
  It_82829120 where, end;
  It_82829120 *r;
  LowerBound_82829120(t, &where, key);
  if (where.p == t->head || *key < where.p->key) {
    end.p = t->head;
    r = &end;
  } else {
    r = &where;
  }
  out->p = r->p;
}
