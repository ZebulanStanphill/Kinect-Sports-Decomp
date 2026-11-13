typedef struct Obj_82576478 Obj_82576478;
struct Obj_82576478 { void (**vt)(Obj_82576478 *o, int flags); };
typedef struct Node_82576478 { Obj_82576478 *obj; struct Node_82576478 *next; } Node_82576478;
typedef struct { char pad[0x20]; Node_82576478 *head; } List_82576478;
extern void *fn_82522D98(unsigned int size);

void fn_82576478(List_82576478 *self, Obj_82576478 *obj)
{
  if (obj != 0) {
    Node_82576478 *n = (Node_82576478 *)fn_82522D98(8);
    if (n != 0) {
      n->obj = obj;
      n->next = self->head;
      self->head = n;
    } else {
      (*obj->vt)(obj, 1);
    }
  }
}
