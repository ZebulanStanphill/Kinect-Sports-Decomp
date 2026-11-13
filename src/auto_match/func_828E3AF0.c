typedef struct Opt_828E3AF0 { unsigned char hasValue; int value; } Opt_828E3AF0;
typedef struct Key_828E3AF0 { int id; Opt_828E3AF0 opt; } Key_828E3AF0;
typedef struct Node_828E3AF0 {
  struct Node_828E3AF0 *left, *parent, *right;
  Key_828E3AF0 key;
  int mapped;
  char color;
  unsigned char isnil;
} Node_828E3AF0;
typedef struct { int pad; Node_828E3AF0 *head; } Tree_828E3AF0;
static unsigned char optLess(const Opt_828E3AF0 *a, const Opt_828E3AF0 *b)
{
  if (!b->hasValue)
    return 0;
  if (!a->hasValue)
    return 1;
  return a->value < b->value;
}
static unsigned char keyLess(const Key_828E3AF0 *a, const Key_828E3AF0 *b)
{
  return a->id < b->id || (!(b->id < a->id) && optLess(&a->opt, &b->opt));
}
Node_828E3AF0 *fn_828E3AF0(Tree_828E3AF0 *t, Key_828E3AF0 *key)
{
  Node_828E3AF0 *where = t->head;
  Node_828E3AF0 *node = where->parent;
  while (node->isnil == 0) {
    if (keyLess(&node->key, key)) {
      node = node->right;
    } else {
      where = node;
      node = node->left;
    }
  }
  return where;
}
