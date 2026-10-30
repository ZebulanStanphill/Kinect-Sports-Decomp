typedef struct Node_82829E10 {
  struct Node_82829E10 *left, *parent, *right;
  unsigned start, len;
  char pad[0xd];
  unsigned char isnil;
} Node_82829E10;
typedef struct { int pad; Node_82829E10 *head; } Tree_82829E10;
typedef struct { unsigned start, len; } Key_82829E10;

void fn_82829E10(Node_82829E10 **out, Tree_82829E10 *t, Key_82829E10 *key)
{
  Node_82829E10 *cur, *n;
  Node_82829E10 *it, *end;
  Node_82829E10 **r;
  Node_82829E10 *tmp;
  cur = t->head;
  n = t->head->parent;
  while (n->isnil == 0) {
    if (n->len + n->start < key->start) {
      n = n->right;
    } else {
      cur = n;
      n = n->left;
    }
  }
  it = cur;
  end = t->head;
  if (it == end || key->len + key->start < it->start) {
    tmp = end;
    r = &tmp;
  } else {
    r = &it;
  }
  *out = *r;
}
