typedef struct Link_82521D28 { struct Link_82521D28 *next; struct Link_82521D28 *prev; } Link_82521D28;
typedef struct Obj_82521D28 {
  int vt;
  int pad[7];
  void *data;
  void *data1;
  void *data2;
  int pad2;
  Link_82521D28 *link;
} Obj_82521D28;
extern void fn_82522ED8(Link_82521D28 *);
extern void fn_8265CA20(void *);
extern char lbl_821C2CF8[];
extern int lbl_832767C8;

void fn_82521D28(Obj_82521D28 *self)
{
  Link_82521D28 *l = self->link;
  self->vt = (int)lbl_821C2CF8;
  if (l->next != 0) {
    l->next->prev = l->prev;
  }
  if (l->prev != 0) {
    l->prev->next = l->next;
  }
  l->next = 0;
  l->prev = 0;
  fn_82522ED8(l);
  {
    void *d = self->data;
    lbl_832767C8 = 0;
    if (d != 0) {
      fn_8265CA20(d);
    }
  }
  self->data = 0;
  self->data1 = 0;
  self->data2 = 0;
}
