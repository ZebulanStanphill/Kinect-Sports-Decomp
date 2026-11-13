typedef struct Opt_828A4538 { unsigned char hasValue; int value; } Opt_828A4538;
typedef struct Key_828A4538 { int id; Opt_828A4538 opt; } Key_828A4538;
typedef struct Node_828A4538 {
  struct Node_828A4538 *left, *parent, *right;
  Key_828A4538 key;
  int mapped;
  char color;
  unsigned char isnil;
} Node_828A4538;
typedef struct { int pad; Node_828A4538 *head; } Tree_828A4538;
static unsigned char optLess(const Opt_828A4538 *a, const Opt_828A4538 *b)
{
  if (!b->hasValue)
    return 0;
  if (!a->hasValue)
    return 1;
  return a->value < b->value;
}
static unsigned char keyLess(const Key_828A4538 *a, const Key_828A4538 *b)
{
  return a->id < b->id || (!(b->id < a->id) && optLess(&a->opt, &b->opt));
}
Node_828A4538 *fn_828A4538(Tree_828A4538 *t, Key_828A4538 *key)
{
  Node_828A4538 *where = t->head;
  Node_828A4538 *node = where->parent;
  while (node->isnil == 0) {
    if (keyLess(key, &node->key)) {
      where = node;
      node = node->left;
    } else {
      node = node->right;
    }
  }
  return where;
}
