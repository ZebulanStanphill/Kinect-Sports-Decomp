typedef struct Str_824E75B8 { union { char *p; char buf[16]; } u; unsigned size; unsigned cap; int alloc; } Str_824E75B8;
typedef struct Node_824E75B8 { struct Node_824E75B8 *left, *parent, *right; Str_824E75B8 key; char pad[0x68]; char color; char isnil; } Node_824E75B8;
typedef struct Tree_824E75B8 { int pad; Node_824E75B8 *head; } Tree_824E75B8;
typedef struct It_824E75B8 { Node_824E75B8 *node; } It_824E75B8;
extern int fn_8260D428(Str_824E75B8 *, int, unsigned, const char *, unsigned);

static const char *cstr(Str_824E75B8 *s) { return s->cap >= 0x10 ? s->u.p : s->u.buf; }

static int cmp(Str_824E75B8 *a, Str_824E75B8 *b) { unsigned len = b->size; const char *p = cstr(b); return fn_8260D428(a, 0, a->size, p, len); }

It_824E75B8 *fn_824E75B8(It_824E75B8 *out, Tree_824E75B8 *t, Str_824E75B8 *key)
{
  Node_824E75B8 *res = t->head;
  Node_824E75B8 *n = res->parent;
  Node_824E75B8 *r;
  Node_824E75B8 **pp;
  Node_824E75B8 *tmp;
  Node_824E75B8 *endn;
  while (n->isnil == 0) {
    Str_824E75B8 *k = &n->key;
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
