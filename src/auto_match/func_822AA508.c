typedef struct Obj Obj;
struct Obj { void (**vt)(Obj *, int); };

typedef struct Node {
  struct Node *left;
  struct Node *parent;
  struct Node *right;
  int key;
  Obj *value;
  char color;
  char isnil;
} Node;

typedef struct {
  void *a;
  void *b;
  void *c;
} Res;

typedef struct {
  int pad0;
  Node *head;
  int size;
  char pad[0x48 - 0xc];
  Res *res;
} Item;

typedef struct {
  Item **begin;
  Item **end;
  Item **cap;
} Vec;

extern void fn_82381BC0(Node **it);
extern void fn_8243DD58(Item *m, Node *n);
extern void fn_8251FA58(void *p);
extern void fn_8265CA20(void *p);

void fn_822AA508(Vec *v)
{
  Item **pp;
  Item *it;
  Res *r;
  Node *head;
  Node *n;
  Node *next;
  Node *cur;
  Obj *o;

  for (pp = v->begin; pp < v->end; pp++) {
    it = *pp;
    if (it != 0) {
      r = it->res;
      if (r != 0) {
        if (r->c != 0) {
          fn_8251FA58(r->c);
          r->c = 0;
        }
        if (r->b != 0) {
          fn_8251FA58(r->b);
          r->b = 0;
        }
        fn_8265CA20(r);
      }
      head = it->head;
      cur = head->left;
      while (cur != head) {
        o = cur->value;
        if (o != 0) {
          (*o->vt[0])(o, 1);
        }
        fn_82381BC0(&cur);
      }
      n = it->head->parent;
      while (!n->isnil) {
        fn_8243DD58(it, n->right);
        next = n->left;
        fn_8265CA20(n);
        n = next;
      }
      it->head->parent = it->head;
      it->head->left = it->head;
      it->head->right = it->head;
      it->size = 0;
      fn_8265CA20(it->head);
      fn_8265CA20(it);
    }
  }
  if (v->begin != 0) {
    fn_8265CA20(v->begin);
  }
  v->begin = 0;
  v->end = 0;
  v->cap = 0;
}
