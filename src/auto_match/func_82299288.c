typedef struct Node_82299288 {
  struct Node_82299288 *left, *parent, *right;
  int key;
  int val[1];
  char color, isnil;
} Node_82299288;
typedef struct { int pad; Node_82299288 *head; } Tree_82299288;
typedef struct { Node_82299288 *p; } It_82299288;

static void LowerBound_82299288(Tree_82299288 *t, It_82299288 *res, int *key)
{
  Node_82299288 *x = t->head->parent;
  Node_82299288 *w = t->head;
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

void fn_82299288(It_82299288 *out, Tree_82299288 *t, int *key)
{
  It_82299288 where, end;
  It_82299288 *r;
  LowerBound_82299288(t, &where, key);
  if (where.p == t->head || *key < where.p->key) {
    end.p = t->head;
    r = &end;
  } else {
    r = &where;
  }
  out->p = r->p;
}
