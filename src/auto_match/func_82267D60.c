struct Cb_82267D60;
typedef struct VT_82267D60 { void *s[2]; void (*f8)(struct Cb_82267D60 *self); } VT_82267D60;
typedef struct Cb_82267D60 { VT_82267D60 *vt; } Cb_82267D60;
typedef struct { char pad[0x40]; unsigned int id; } Item_82267D60;
typedef struct Node_82267D60 { struct Node_82267D60 *next; int pad; Item_82267D60 *item; } Node_82267D60;
typedef struct { Node_82267D60 *head; char pad[0x20 - 4]; Cb_82267D60 *cb; char pad2[0x4c - 0x24]; int busy; int pad3[2]; int flag; } Obj_82267D60;

void fn_82267D60(Obj_82267D60 *p, unsigned int id, int n)
{
  Node_82267D60 *it;
  p->busy = 1;
  p->flag = (n >= 20 && n < 100) ? 1 : 0;
    for (it = p->head->next; it != p->head; it = it->next) {
    if (it->item->id == id) {
      if (p->cb != 0)
        p->cb->vt->f8(p->cb);
      break;
    }
  }
  p->busy = 0;
}
