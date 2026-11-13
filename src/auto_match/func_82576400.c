typedef struct Obj_82576400 Obj_82576400;
struct Obj_82576400 { void (**vt)(Obj_82576400 *o, int flags); };
typedef struct Node_82576400 { Obj_82576400 *obj; struct Node_82576400 *next; } Node_82576400;
typedef struct { char pad[0x14]; Node_82576400 *head; } List_82576400;
extern void *fn_82522D98(unsigned int size);

void fn_82576400(List_82576400 *self, Obj_82576400 *obj)
{
  if (obj != 0) {
    Node_82576400 *n = (Node_82576400 *)fn_82522D98(8);
    if (n != 0) {
      n->obj = obj;
      n->next = self->head;
      self->head = n;
    } else {
      (*obj->vt)(obj, 1);
    }
  }
}
