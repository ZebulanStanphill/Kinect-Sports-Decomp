typedef struct Node_823223C0 {
  struct Node_823223C0 *left, *parent, *right;
  int key;
  int val[2];
  char color, isnil;
} Node_823223C0;
typedef struct { int pad; Node_823223C0 *head; } Tree_823223C0;
typedef struct { Node_823223C0 *p; } It_823223C0;

static void LowerBound_823223C0(Tree_823223C0 *t, It_823223C0 *res, int *key)
{
  Node_823223C0 *x = t->head->parent;
  Node_823223C0 *w = t->head;
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

void fn_823223C0(It_823223C0 *out, Tree_823223C0 *t, int *key)
{
  It_823223C0 where, end;
  It_823223C0 *r;
  LowerBound_823223C0(t, &where, key);
  if (where.p == t->head || *key < where.p->key) {
    end.p = t->head;
    r = &end;
  } else {
    r = &where;
  }
  out->p = r->p;
}
