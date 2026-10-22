extern void fn_822315A0(void *);
typedef struct Node { struct Node *left, *parent, *right; } Node;
typedef struct Tree { int alloc; Node *head; int size; } Tree;
extern void fn_82250768(Tree *t, Node *n);
extern void fn_82250848(Tree *t, Node *n);

typedef struct SP { void *ptr; void *rep; } SP;

typedef struct Obj Obj;
typedef struct Vt { void *f0; void *f1; void (*f2)(Obj *); } Vt;
struct Obj {
  Vt *vt;
  int unk4;
  unsigned char flag;
  int unkc;
  int unk10;
  Tree a;
  int unk20;
  Tree b;
  int unk30;
  int unk34;
  int unk38;
  int unk3c;
  int unk40;
  SP sp;
};

static void sp_swap(SP *a, SP *b)
{
  void *t;
  t = a->rep; a->rep = b->rep; b->rep = t;
  t = a->ptr; a->ptr = b->ptr; b->ptr = t;
}

static void sp_reset(SP *s)
{
  SP tmp;
  tmp.ptr = 0;
  tmp.rep = 0;
  sp_swap(s, &tmp);
  if (tmp.rep != 0) {
    fn_822315A0(tmp.rep);
  }
}

static void clear_a(Tree *t)
{
  fn_82250768(t, t->head->parent);
  t->head->parent = t->head;
  t->head->left = t->head;
  t->head->right = t->head;
  t->size = 0;
}

static void clear_b(Tree *t)
{
  fn_82250848(t, t->head->parent);
  t->head->parent = t->head;
  t->head->left = t->head;
  t->head->right = t->head;
  t->size = 0;
}

void fn_8251A030(Obj *p)
{
  p->vt->f2(p);
  p->flag = 1;
  p->unk10 = 0;
  clear_a(&p->a);
  clear_b(&p->b);
  p->unk34 = 0x32;
  p->unk38 = 0;
  p->unk3c = 8;
  sp_reset(&p->sp);
}
