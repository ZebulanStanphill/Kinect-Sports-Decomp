typedef struct Node_8225E360 {
  struct Node_8225E360 *left, *parent, *right;
  unsigned key;
  int val[2];
  char color, isnil;
} Node_8225E360;
typedef struct { int pad; Node_8225E360 *head; } Tree_8225E360;
typedef struct { Node_8225E360 *p; } It_8225E360;

static void LowerBound_8225E360(Tree_8225E360 *t, It_8225E360 *res, unsigned *key)
{
  Node_8225E360 *x = t->head->parent;
  Node_8225E360 *w = t->head;
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

void fn_8225E360(It_8225E360 *out, Tree_8225E360 *t, unsigned *key)
{
  It_8225E360 where, end;
  It_8225E360 *r;
  LowerBound_8225E360(t, &where, key);
  if (where.p == t->head || *key < where.p->key) {
    end.p = t->head;
    r = &end;
  } else {
    r = &where;
  }
  out->p = r->p;
}
