typedef struct Str_8258E3A8 { union { char *p; char buf[16]; } u; unsigned size; unsigned cap; int alloc; } Str_8258E3A8;
typedef struct Node_8258E3A8 { struct Node_8258E3A8 *left, *parent, *right; Str_8258E3A8 key; char pad[0x8]; char color; char isnil; } Node_8258E3A8;
typedef struct Tree_8258E3A8 { int pad; Node_8258E3A8 *head; } Tree_8258E3A8;
typedef struct It_8258E3A8 { Node_8258E3A8 *node; } It_8258E3A8;
extern int fn_8260D428(Str_8258E3A8 *, int, unsigned, const char *, unsigned);

static const char *cstr(Str_8258E3A8 *s) { return s->cap >= 0x10 ? s->u.p : s->u.buf; }

static int cmp(Str_8258E3A8 *a, Str_8258E3A8 *b) { unsigned len = b->size; const char *p = cstr(b); return fn_8260D428(a, 0, a->size, p, len); }

It_8258E3A8 *fn_8258E3A8(It_8258E3A8 *out, Tree_8258E3A8 *t, Str_8258E3A8 *key)
{
  Node_8258E3A8 *res = t->head;
  Node_8258E3A8 *n = res->parent;
  Node_8258E3A8 *r;
  Node_8258E3A8 **pp;
  Node_8258E3A8 *tmp;
  Node_8258E3A8 *endn;
  while (n->isnil == 0) {
    Str_8258E3A8 *k = &n->key;
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
