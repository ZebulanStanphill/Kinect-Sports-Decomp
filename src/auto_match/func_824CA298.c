typedef struct Str_824CA298 { union { char *p; char buf[16]; } u; unsigned size; unsigned cap; int alloc; } Str_824CA298;
typedef struct Node_824CA298 { struct Node_824CA298 *left, *parent, *right; Str_824CA298 key; char pad[0x28]; char color; char isnil; } Node_824CA298;
typedef struct Tree_824CA298 { int pad; Node_824CA298 *head; } Tree_824CA298;
typedef struct It_824CA298 { Node_824CA298 *node; } It_824CA298;
extern int fn_8260D428(Str_824CA298 *, int, unsigned, const char *, unsigned);

static const char *cstr(Str_824CA298 *s) { return s->cap >= 0x10 ? s->u.p : s->u.buf; }

static int cmp(Str_824CA298 *a, Str_824CA298 *b) { unsigned len = b->size; const char *p = cstr(b); return fn_8260D428(a, 0, a->size, p, len); }

It_824CA298 *fn_824CA298(It_824CA298 *out, Tree_824CA298 *t, Str_824CA298 *key)
{
  Node_824CA298 *res = t->head;
  Node_824CA298 *n = res->parent;
  Node_824CA298 *r;
  Node_824CA298 **pp;
  Node_824CA298 *tmp;
  Node_824CA298 *endn;
  while (n->isnil == 0) {
    Str_824CA298 *k = &n->key;
    if (cmp(k, key) < 0) {
      n = n->right;
    } else {
      res = n;
      n = n->left;
    }
  }
  tmp = res;
  if (res != t->head && cmp(key, &res->key) >= 0) {
    pp = &tmp;
  } else {
    endn = t->head;
    pp = &endn;
  }
  out->node = *pp;
  return out;
}
