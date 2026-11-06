extern void *fn_82522D98(int);
extern void *fn_8265C9E0(int);
extern int lbl_821CAD1C[];
typedef struct Item_825C67A8 { void *vt; int f4; int f8; unsigned char fc; } Item_825C67A8;
typedef struct Node_825C67A8 { Item_825C67A8 *item; struct Node_825C67A8 *next; } Node_825C67A8;
typedef struct { int p0; int p4; Node_825C67A8 *head; int fc; } List_825C67A8;
Item_825C67A8 *fn_825C67A8(List_825C67A8 *l, int unused, int v)
{
  Item_825C67A8 *it;
  Item_825C67A8 *m;
  Node_825C67A8 *n;
  m = (Item_825C67A8 *)fn_8265C9E0(0x10);
  if (m != 0) {
    m->f8 = l->fc;
    m->f4 = v;
    m->fc = 0;
    m->vt = lbl_821CAD1C;
    it = m;
  } else {
    it = 0;
  }
  n = (Node_825C67A8 *)fn_82522D98(8);
  n->item = it;
  n->next = l->head;
  l->head = n;
  return it;
}
