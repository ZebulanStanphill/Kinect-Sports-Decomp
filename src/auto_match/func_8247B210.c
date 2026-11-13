// std::map<unsigned int, weak_ptr<T>> lookup that returns a shared_ptr: lock() the stored weak
// pointer when the key exists, otherwise return a shared_ptr owning a null pointer.
extern void *fn_82365BD8(void *out, void *weak);
extern void fn_822315A0(void *rep);
extern void *fn_8265C9E0(unsigned int size);
extern char lbl_82196E94[];

typedef struct SharedPtr_8247B210 {
  void *ptr;
  void *rep;
} SharedPtr_8247B210;

typedef struct Node_8247B210 {
  struct Node_8247B210 *left;
  struct Node_8247B210 *parent;
  struct Node_8247B210 *right;
  unsigned int key;
  SharedPtr_8247B210 value;
  char color;
  char isnil;
} Node_8247B210;

typedef struct Tree_8247B210 {
  int alloc;
  Node_8247B210 *head;
  unsigned int size;
} Tree_8247B210;

typedef struct It_8247B210 {
  Node_8247B210 *p;
} It_8247B210;

typedef struct Obj_8247B210 {
  int unk0;
  Tree_8247B210 map;
} Obj_8247B210;

typedef struct RefCount_8247B210 {
  void *vt;
  int uses;
  int weaks;
  void *ptr;
} RefCount_8247B210;

static Node_8247B210 *Lbound(Tree_8247B210 *t, unsigned int key)
{
  Node_8247B210 *pnode = t->head->parent;
  Node_8247B210 *wherenode = t->head;
  while (!pnode->isnil) {
    if (pnode->key < key) {
      pnode = pnode->right;
    } else {
      wherenode = pnode;
      pnode = pnode->left;
    }
  }
  return wherenode;
}

static It_8247B210 End(Tree_8247B210 *t)
{
  It_8247B210 e;
  e.p = t->head;
  return e;
}

static It_8247B210 Find(Tree_8247B210 *t, unsigned int key)
{
  It_8247B210 where;
  It_8247B210 e;
  where.p = Lbound(t, key);
  return *((where.p == t->head || key < where.p->key) ? (e = End(t), &e) : &where);
}

static __forceinline RefCount_8247B210 *NewRef(RefCount_8247B210 *rc, void *ptr)
{
  rc->uses = 1;
  rc->weaks = 1;
  rc->vt = lbl_82196E94;
  rc->ptr = ptr;
  return rc;
}

static __forceinline void Reset(SharedPtr_8247B210 *s, void *ptr, void *rep)
{
  if (s->rep != 0)
    fn_822315A0(s->rep);
  s->rep = rep;
  s->ptr = ptr;
}

SharedPtr_8247B210 *fn_8247B210(SharedPtr_8247B210 *out, Obj_8247B210 *self, unsigned int key)
{
  It_8247B210 it;
  RefCount_8247B210 *rc;
  void *mem;

  it = Find(&self->map, key);
  if (it.p != self->map.head) {
    fn_82365BD8(out, &it.p->value);
  } else {
    out->ptr = 0;
    out->rep = 0;
    mem = fn_8265C9E0(0x10);
    rc = mem ? NewRef((RefCount_8247B210 *)mem, 0) : 0;
    Reset(out, 0, rc);
  }
  return out;
}
