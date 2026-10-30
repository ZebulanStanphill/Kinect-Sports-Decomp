typedef struct Val_823B77E8 { void *ptr; void *rc; } Val_823B77E8;
typedef struct Node_823B77E8 {
  struct Node_823B77E8 *left;
  struct Node_823B77E8 *parent;
  struct Node_823B77E8 *right;
  unsigned key;
  Val_823B77E8 val;
  char color;
  char isnil;
} Node_823B77E8;
typedef struct Tree_823B77E8 { int pad; Node_823B77E8 *head; } Tree_823B77E8;
typedef struct Obj_823B77E8 { char pad[0x84]; Tree_823B77E8 tree; } Obj_823B77E8;
typedef struct Pair_823B77E8 { unsigned key; Val_823B77E8 val; } Pair_823B77E8;
typedef struct It_823B77E8 { Node_823B77E8 *p; } It_823B77E8;
extern void fn_822315A0(void *);
extern unsigned char fn_8223AAC0(void *);
extern Node_823B77E8 **fn_823B97C0(It_823B77E8 *, Tree_823B77E8 *, Node_823B77E8 *, Pair_823B77E8 *);

static __forceinline Node_823B77E8 *LowerBound(Obj_823B77E8 *o, unsigned key)
{
  Node_823B77E8 *y = o->tree.head;
  Node_823B77E8 *x = y->parent;
  while (x->isnil == 0) {
    if (x->key < key) {
      x = x->right;
    } else {
      y = x;
      x = x->left;
    }
  }
  return y;
}

void fn_823B77E8(Obj_823B77E8 *o, Val_823B77E8 *src, unsigned key)
{
  Node_823B77E8 *y;
  It_823B77E8 it;
  Pair_823B77E8 pair;
  void *ptr;
  void *rc;
  void *old;
  Tree_823B77E8 *tr = &o->tree;

  y = LowerBound(o, key);
  if (y == tr->head || key < y->key) {
    pair.key = key;
    pair.val.rc = 0;
    pair.val.ptr = 0;
    y = *fn_823B97C0(&it, tr, y, &pair);
    if (pair.val.rc != 0) {
      fn_822315A0(pair.val.rc);
    }
  }
  ptr = src->ptr;
  rc = src->rc;
  {
    void *p2 = 0;
    void *r2 = 0;
    if (rc != 0 && fn_8223AAC0(rc)) {
      r2 = rc;
      p2 = ptr;
    }
    old = y->val.rc;
    y->val.rc = r2;
    y->val.ptr = p2;
  }
  if (old != 0) {
    fn_822315A0(old);
  }
  if (src->rc != 0) {
    fn_822315A0(src->rc);
  }
}
