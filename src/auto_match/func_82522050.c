typedef struct { void *head; int pad[2]; int count; } List;
typedef struct { int pad; List *list; } Obj;
extern void fn_82521AB0(void *p);
extern void fn_8259C2A0(void *a, int b, List *l);
extern void fn_82522430(void *a, Obj *o);
extern void *lbl_832767C8;

void fn_82522050(Obj *o)
{
  void *g = lbl_832767C8;
  fn_82521AB0(o->list->head);
  { List *l = o->list; l->count++; }
  fn_8259C2A0(o->list->head, 1, o->list);
  fn_82522430(g, o);
}
