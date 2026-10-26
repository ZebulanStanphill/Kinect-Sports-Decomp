typedef struct List { int size; struct List *next; struct List *prev; int count; } List;
typedef struct { void *vtbl; List l; } Obj;
extern void fn_8265CA20(Obj *p);
extern void fn_828CB6C8(List *first, List *last);
extern char lbl_82026780[];

static void List_dtor(List *l)
{
  fn_828CB6C8(l, l);
  l->next = l;
  l->prev = l;
  l->size = 0;
  l->count = 0;
}

static void Base_dtor(Obj *p)
{
  p->vtbl = lbl_82026780;
}

Obj *fn_828CB948(Obj *p, unsigned int flags)
{
  List_dtor(&p->l);
  Base_dtor(p);
  if ((flags & 1) != 0) {
    fn_8265CA20(p);
  }
  return p;
}
