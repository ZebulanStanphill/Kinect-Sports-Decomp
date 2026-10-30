extern int fn_82517A50();
extern struct NodeA_8251A108 *fn_8251BA68();
extern struct NodeB_8251A108 *fn_8251BB70();

typedef struct NodeA_8251A108 {
  struct NodeA_8251A108 *left;
  struct NodeA_8251A108 *parent;
  struct NodeA_8251A108 *right;
  unsigned char pad[0x29];
  char isnil;
} NodeA_8251A108;
typedef struct NodeB_8251A108 {
  struct NodeB_8251A108 *left;
  struct NodeB_8251A108 *parent;
  struct NodeB_8251A108 *right;
  unsigned char pad[0x3d];
  char isnil;
} NodeB_8251A108;
typedef struct TreeA_8251A108 {
  int al;
  NodeA_8251A108 *head;
  int size;
} TreeA_8251A108;
typedef struct TreeB_8251A108 {
  int al;
  NodeB_8251A108 *head;
  int size;
} TreeB_8251A108;
typedef struct { NodeA_8251A108 *p; } ItA_8251A108;
typedef struct { NodeB_8251A108 *p; } ItB_8251A108;
extern void fn_8224FE78(ItA_8251A108 *ret, TreeA_8251A108 *t, ItA_8251A108 first, ItA_8251A108 last);
extern void fn_8224FF20(ItB_8251A108 *ret, TreeB_8251A108 *t, ItB_8251A108 first, ItB_8251A108 last);
static ItA_8251A108 TreeA_begin(TreeA_8251A108 *t) { ItA_8251A108 i; i.p = t->head->left; return i; }
static ItA_8251A108 TreeA_end(TreeA_8251A108 *t) { ItA_8251A108 i; i.p = t->head; return i; }
static ItB_8251A108 TreeB_begin(TreeB_8251A108 *t) { ItB_8251A108 i; i.p = t->head->left; return i; }
static ItB_8251A108 TreeB_end(TreeB_8251A108 *t) { ItB_8251A108 i; i.p = t->head; return i; }
typedef struct Obj_8251A108 {
  int f0;
  TreeA_8251A108 a;
  int f10;
  TreeB_8251A108 b;
  int f20;
  int f24;
  int f28;
  int f2c;
  int f30;
  int f34[2];
  int f3c;
} Obj_8251A108;

static void TreeA_assign(TreeA_8251A108 *d, TreeA_8251A108 *s)
{
  ItA_8251A108 it;
  NodeA_8251A108 *head;
  NodeA_8251A108 *n;
  if (d != s) {
    fn_8224FE78(&it, d, TreeA_begin(d), TreeA_end(d));
    head = d->head;
    head->parent = fn_8251BA68(d, s->head->parent, head);
    head = d->head;
    d->size = s->size;
    n = head->parent;
    if (!n->isnil) {
      while (!n->left->isnil) n = n->left;
      head->left = n;
      n = d->head->parent;
      while (!n->right->isnil) n = n->right;
      d->head->right = n;
    } else {
      head->left = head;
      d->head->right = d->head;
    }
  }
}
static void TreeB_assign(TreeB_8251A108 *d, TreeB_8251A108 *s)
{
  ItB_8251A108 it;
  NodeB_8251A108 *head;
  NodeB_8251A108 *n;
  if (d != s) {
    fn_8224FF20(&it, d, TreeB_begin(d), TreeB_end(d));
    head = d->head;
    head->parent = fn_8251BB70(d, s->head->parent, head);
    head = d->head;
    d->size = s->size;
    n = head->parent;
    if (!n->isnil) {
      while (!n->left->isnil) n = n->left;
      head->left = n;
      n = d->head->parent;
      while (!n->right->isnil) n = n->right;
      d->head->right = n;
    } else {
      head->left = head;
      d->head->right = d->head;
    }
  }
}

Obj_8251A108 *fn_8251A108(Obj_8251A108 *d, Obj_8251A108 *s)
{
  d->f0 = s->f0;
  TreeA_assign(&d->a, &s->a);
  TreeB_assign(&d->b, &s->b);
  d->f24 = s->f24;
  d->f28 = s->f28;
  d->f2c = s->f2c;
  d->f30 = s->f30;
  fn_82517A50(d->f34, s->f34);
  d->f3c = s->f3c;
  return d;
}
