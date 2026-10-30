typedef struct LNode_8259A698 { struct LNode_8259A698 *next; struct LNode_8259A698 *prev; int v8; void *ptr; } LNode_8259A698;
typedef struct { int pad; LNode_8259A698 *head; int size; } List_8259A698;
typedef struct TNode_8259A698 { struct TNode_8259A698 *left; struct TNode_8259A698 *parent; struct TNode_8259A698 *right; int v; char color; char isnil; } TNode_8259A698;
typedef struct { int pad; TNode_8259A698 *head; int size; } Tree_8259A698;
typedef struct { int v0; int v4; int v8; int vc; int v10; } Elem_8259A698;
typedef struct { void **begin; void **end; void **cap; } PVec_8259A698;
typedef struct { Elem_8259A698 *begin; Elem_8259A698 *end; Elem_8259A698 *cap; } EVec_8259A698;
typedef struct {
  void *vt; char pad0[0x30]; List_8259A698 list; char pad1[0x60 - 0x40]; char sub60[0x74 - 0x60];
  int f74; EVec_8259A698 ev; char pad2[0x9c - 0x84]; Tree_8259A698 tree; char pad3[0xac - 0xa8]; PVec_8259A698 pv;
} Obj_8259A698;

extern void fn_822315A0(void *p);
extern void fn_822733C8(void *t, void *n);
extern LNode_8259A698 **fn_8259BA48(void *out, List_8259A698 *l, LNode_8259A698 *n);
extern void fn_8259C558(void *p);
extern void fn_825BF428(void *p);
extern void fn_8265CA20(void *p);
extern void fn_827D55A0(int a, void *b, int c);
extern void fn_827D9A90(void *p);
extern void *memmove(void *d, const void *s, unsigned n);
extern char lbl_821C7BA0[];

void fn_8259A698(Obj_8259A698 *o)
{
  void **it;
  LNode_8259A698 *ln;
  PVec_8259A698 *pv;
  Tree_8259A698 *t;
  TNode_8259A698 *tn;
  char tmp[16];

  it = o->pv.begin;
  o->vt = lbl_821C7BA0;
  pv = &o->pv;
  if (it != o->pv.end) {
    do {
      void **next = it + 1;
      fn_827D55A0(o->f74, *it, 0);
      memmove(it, next, (pv->end - next) * 4);
      pv->end = pv->end - 1;
    } while (it != o->pv.end);
  }
  ln = o->list.head->next;
  if (ln != o->list.head) {
    do {
      if (ln->ptr != 0) fn_8265CA20(ln->ptr);
      ln = *fn_8259BA48(tmp, &o->list, ln);
    } while (ln != o->list.head);
  }
  fn_8259C558(o->sub60);
  if (pv->begin != 0) fn_8265CA20(pv->begin);
  pv->begin = 0;
  pv->end = 0;
  pv->cap = 0;
  t = &o->tree;
  tn = t->head->parent;
  while (tn->isnil == 0) {
    TNode_8259A698 *nx;
    fn_822733C8(t, tn->right);
    nx = tn->left;
    fn_8265CA20(tn);
    tn = nx;
  }
  t->head->parent = t->head;
  t->head->left = t->head;
  t->head->right = t->head;
  t->size = 0;
  fn_8265CA20(t->head);
  if (o->ev.begin != 0) {
    Elem_8259A698 *e = o->ev.begin;
    Elem_8259A698 *end = o->ev.end;
    if (e != end) {
      void **q = (void **)&e->v8;
      do {
        if (*q != 0) fn_822315A0(*q);
        e++;
        q += 5;
      } while (e != end);
    }
    fn_8265CA20(o->ev.begin);
  }
  o->ev.begin = 0;
  o->ev.end = 0;
  o->ev.cap = 0;
  fn_825BF428(&o->list);
  fn_827D9A90(o);
}
