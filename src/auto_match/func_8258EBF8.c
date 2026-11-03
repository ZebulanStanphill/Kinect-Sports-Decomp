typedef struct Str_8258EBF8 {
  union { char *p; char buf[16]; } u;
  unsigned size;
  unsigned cap;
} Str_8258EBF8;

typedef struct Node_8258EBF8 {
  struct Node_8258EBF8 *left;
  struct Node_8258EBF8 *parent;
  struct Node_8258EBF8 *right;
  Str_8258EBF8 key;
  char pad[0x39 - 0x24];
  char isnil;
} Node_8258EBF8;

typedef struct Tree_8258EBF8 {
  int pad;
  Node_8258EBF8 *head;
} Tree_8258EBF8;

typedef struct Pair_8258EBF8 {
  Node_8258EBF8 *lo;
  Node_8258EBF8 *hi;
} Pair_8258EBF8;

extern int fn_8260D428(Str_8258EBF8 *, int, unsigned, const char *, unsigned);

static int cmp(Str_8258EBF8 *a, Str_8258EBF8 *b)
{
  unsigned len = b->size;
  const char *p;
  if (b->cap >= 0x10)
    p = b->u.p;
  else
    p = b->u.buf;
  return fn_8260D428(a, 0, a->size, p, len);
}

Pair_8258EBF8 *fn_8258EBF8(Pair_8258EBF8 *out, Tree_8258EBF8 *tree, Str_8258EBF8 *key)
{
  Node_8258EBF8 *lo = tree->head;
  Node_8258EBF8 *hi = lo;
  Node_8258EBF8 *n = hi->parent;
  while (n->isnil == 0) {
    if (cmp(&n->key, key) < 0) {
      n = n->right;
    } else {
      if (hi->isnil != 0) {
        if (cmp(key, &n->key) < 0)
          hi = n;
      }
      lo = n;
      n = n->left;
    }
  }
  if (hi->isnil != 0)
    n = tree->head->parent;
  else
    n = hi->left;
  while (n->isnil == 0) {
    if (cmp(key, &n->key) < 0) {
      hi = n;
      n = n->left;
    } else {
      n = n->right;
    }
  }
  out->lo = lo;
  out->hi = hi;
  return out;
}
