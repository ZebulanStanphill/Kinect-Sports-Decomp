extern unsigned int fn_82A1C098(void *p);
extern int fn_82A1DD38();

typedef struct Item {
  char pad[0x3e8];
  char sub[0x1c];
  int f404;
  int f408;
  unsigned int f40c;
} Item;

typedef struct Node {
  struct Node *left;
  struct Node *parent;
  struct Node *right;
  unsigned int key;
  Item *value;
  char color;
  char isnil;
} Node;

typedef struct Tree {
  int alloc;
  Node *head;
  unsigned int size;
} Tree;

typedef struct It {
  Node *p;
} It;

typedef struct Obj {
  char pad[0x48];
  Tree map;
} Obj;

static Node *Lbound(Tree *t, unsigned int key)
{
  Node *pnode = t->head->parent;
  Node *wherenode = t->head;
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

static It End(Tree *t)
{
  It e;
  e.p = t->head;
  return e;
}

static It Find(Tree *t, unsigned int key)
{
  It where;
  It e;
  where.p = Lbound(t, key);
  return *((where.p == t->head || key < where.p->key) ? (e = End(t), &e) : &where);
}

int fn_8225DA70(Obj *param_1, int param_2, unsigned int param_3, unsigned int *param_4)
{
  It it;
  Item *item;
  unsigned int r;
  int ok;

  it = Find(&param_1->map, param_3);
  if (it.p != param_1->map.head) {
    item = it.p->value;
    r = 0;
    ok = item->f404;
    if (ok == 0 && item->f40c < 3 && (r = fn_82A1C098(item->sub)) == 0) {
      ok = 1;
    }
    if (param_4 != 0) {
      *param_4 = r;
    }
    if (ok != 0) {
      fn_82A1DD38(param_2, item, 1000);
      return 1;
    }
  }
  return 0;
}
