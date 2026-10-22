typedef struct Node {
  struct Node *left;
  struct Node *parent;
  struct Node *right;
  unsigned int key;
  int a;
  void *b;
  char color;
  char isnil;
} Node;

typedef struct Tree {
  int unk0;
  Node *head;
  int size;
} Tree;

typedef struct Val { unsigned int key; int a; void *b; } Val;

extern int fn_822315A0();
extern Node *fn_828CD830(Tree *t, Val *v);
extern void fn_828CE1D8(Node **out, Tree *t, Node *where, Node *n);

static void lbound(Tree *t, Node **out, unsigned int *key)
{
  Node *p = t->head->parent;
  Node *where = t->head;
  while (!p->isnil) {
    if (p->key < *key) {
      p = p->right;
    } else {
      where = p;
      p = p->left;
    }
  }
  *out = where;
}

int *fn_828CE388(Tree *t, unsigned int *key)
{
  Node *where;
  lbound(t, &where, key);
  if (where == t->head || *key < where->key) {
    Val v;
    Node *res;
    v.key = *key;
    v.b = 0;
    v.a = 0;
    fn_828CE1D8(&res, t, where, fn_828CD830(t, &v));
    where = res;
    if (v.b != 0) {
      fn_822315A0(v.b);
    }
  }
  return &where->a;
}
