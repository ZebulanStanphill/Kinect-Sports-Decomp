typedef struct VObj { void (**vt)(struct VObj *, int); } VObj;
typedef struct NodeA { VObj *obj; int pad[4]; struct NodeA *next; } NodeA;
typedef struct NodeB { void *obj; int pad; struct NodeB *next; } NodeB;
typedef struct Mgr { void *vt; int pad; NodeA *a; NodeB *b; } Mgr;
extern void fn_82522ED8(void *p);
extern void fn_825F19B0(void *p);
extern char lbl_821C1424[];
extern char lbl_821C8F20[];

void fn_825C4998(Mgr *m)
{
  NodeA *a;
  NodeA *an;
  NodeB *b;
  NodeB *bn;

  m->vt = lbl_821C8F20;
  a = m->a;
  while (a != 0) {
    if (a->obj != 0) {
      a->obj->vt[3](a->obj, 1);
      a->obj = 0;
    }
    an = a->next;
    fn_82522ED8(a);
    a = an;
  }
  m->a = 0;
  b = m->b;
  while (b != 0) {
    if (b->obj != 0) {
      fn_825F19B0(b->obj);
      b->obj = 0;
    }
    bn = b->next;
    fn_82522ED8(b);
    b = bn;
  }
  m->b = 0;
  m->vt = lbl_821C1424;
}
