typedef struct Obj_82E579E0 Obj_82E579E0;
typedef struct Vt_82E579E0 { int pad[2]; void (*f8)(Obj_82E579E0 *); } Vt_82E579E0;
struct Obj_82E579E0 { Vt_82E579E0 *vt; };
typedef struct Node_82E579E0 { struct Node_82E579E0 *next; struct Node_82E579E0 *prev; Obj_82E579E0 *obj; } Node_82E579E0;
typedef struct Free_82E579E0 { unsigned int count; Node_82E579E0 sent; } Free_82E579E0;
typedef struct List_82E579E0 { unsigned int count; Node_82E579E0 *first; int pad; Free_82E579E0 fl; } List_82E579E0;

void fn_82E579E0(List_82E579E0 *l)
{
  while (l->count != 0) {
      Node_82E579E0 *n;
      Node_82E579E0 *nx;
      Node_82E579E0 *pv;
      Node_82E579E0 *last;
      Free_82E579E0 *f = &l->fl;
      Node_82E579E0 *s = &f->sent;
      l->count--;
      n = l->first;
      nx = n->next;
      pv = n->prev;
      pv->next = nx;
      nx->prev = pv;
      n->obj->vt->f8(n->obj);
      n->obj = 0;
      last = s->prev;
      n->prev = last;
      n->next = s;
      last->next = n;
      s->prev = n;
      f->count++;
  }
  l->fl.sent.obj = 0;
}
