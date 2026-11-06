typedef struct Str_823261A0 { union { char *p; char buf[16]; } u; unsigned size; unsigned cap; } Str_823261A0;
typedef struct Node_823261A0 { struct Node_823261A0 *left, *parent, *right; Str_823261A0 key; int pad24; int value; char color; char isnil; } Node_823261A0;
typedef struct Tree_823261A0 { int pad; Node_823261A0 *head; } Tree_823261A0;
typedef struct Wrap_823261A0 { int pad; Str_823261A0 s; } Wrap_823261A0;
typedef struct Self_823261A0 { char pad[0xcc]; Tree_823261A0 tree; } Self_823261A0;
extern int fn_8260D428(Str_823261A0 *, int, unsigned, const char *, unsigned);

static const char *cstr(Str_823261A0 *s) { return s->cap >= 0x10 ? s->u.p : s->u.buf; }

static int cmp(Str_823261A0 *a, Str_823261A0 *b) { unsigned len = b->size; const char *p = cstr(b); return fn_8260D428(a, 0, a->size, p, len); }

int fn_823261A0(Self_823261A0 *param_1, Wrap_823261A0 **param_2)
{
  Tree_823261A0 *t = &param_1->tree;
  Str_823261A0 *key = &(*param_2)->s;
  Node_823261A0 *res = t->head;
  Node_823261A0 *n = res->parent;
  Node_823261A0 **pp;
  Node_823261A0 *tmp;
  Node_823261A0 *endn;
  int r;

  while (n->isnil == 0) {
    if (cmp(&n->key, key) < 0) {
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
  r = 0;
  if (*pp != param_1->tree.head) {
    r = (*pp)->value;
  }
  return r;
}
