typedef struct Node { struct Node *next; struct Node *prev; } Node;
typedef struct Iter { Node *ptr; } Iter;
typedef struct List { int al; Node *head; unsigned int size; } List;
typedef struct Obj { void (**vtbl)(struct Obj *, int); } Obj;
typedef struct Self { void *vtbl; int x4; Obj *obj; List list; } Self;
extern void fn_8265CA20(void *);
extern Iter *fn_82887890(Iter *, List *, Iter, Iter);
extern char lbl_820260D8[];

static Iter begin(List *l) { Iter i; i.ptr = l->head->next; return i; }
static Iter end(List *l) { Iter i; i.ptr = l->head; return i; }
static void List_dtor(List *l)
{
  Iter r;
  fn_82887890(&r, l, begin(l), end(l));
  fn_8265CA20(l->head);
}

void fn_828C5F28(Self *self)
{
  Obj *o;

  o = self->obj;
  self->vtbl = lbl_820260D8;
  if (o != 0)
    o->vtbl[0](o, 1);
  self->obj = 0;
  List_dtor(&self->list);
}
