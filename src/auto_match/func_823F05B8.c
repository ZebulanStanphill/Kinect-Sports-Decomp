typedef struct { char pad[0x10]; int f10; int f14; } X_823F05B8;
typedef struct { unsigned first; int second; } Key_823F05B8;
typedef struct { X_823F05B8 a; X_823F05B8 b; } Val_823F05B8;
typedef struct { Key_823F05B8 key; Val_823F05B8 v; } Pair_823F05B8;
typedef struct Node_823F05B8 {
  struct Node_823F05B8 *left, *parent, *right;
  int padA;
  Key_823F05B8 key;
  X_823F05B8 a, b;
  char color;
  unsigned char isnil;
} Node_823F05B8;
typedef struct { int pad; Node_823F05B8 *head; } Tree_823F05B8;
typedef struct { Node_823F05B8 *it; int pad[3]; } Res_823F05B8;
extern void fn_82392C68(X_823F05B8 *, X_823F05B8 *);
extern void fn_82359C18(X_823F05B8 *);
extern Res_823F05B8 *fn_823F84C8(Res_823F05B8 *, Tree_823F05B8 *, Node_823F05B8 *, Pair_823F05B8 *);

static unsigned char less(Key_823F05B8 *a, Key_823F05B8 *b)
{
  return b->first > a->first || (b->first >= a->first && a->second < b->second);
}

X_823F05B8 *fn_823F05B8(Tree_823F05B8 *t, Key_823F05B8 *key)
{
  Node_823F05B8 *where = t->head;
  Node_823F05B8 *n = t->head->parent;
  while (n->isnil == 0) {
    if (less(&n->key, key))
      n = n->right;
    else {
      where = n;
      n = n->left;
    }
  }
  if (where == t->head || less(key, &where->key)) {
    Val_823F05B8 tmp;
    Pair_823F05B8 p;
    Res_823F05B8 res;
    tmp.a.f10 = 0;
    tmp.b.f10 = 0;
    p.key.first = key->first;
    p.key.second = key->second;
    fn_82392C68(&p.v.a, &tmp.a);
    fn_82392C68(&p.v.b, &tmp.b);
    where = fn_823F84C8(&res, t, where, &p)->it;
    fn_82359C18(&p.v.b);
    fn_82359C18(&p.v.a);
    fn_82359C18(&tmp.b);
    fn_82359C18(&tmp.a);
  }
  return &where->a;
}
