typedef struct Info_82581E30 { unsigned id; } Info_82581E30;
typedef struct Obj_82581E30 { struct ObjVt_82581E30 *vt; Info_82581E30 *info; } Obj_82581E30;
typedef struct ObjVt_82581E30 { void *s0, *s4, *s8; void (*sc)(Obj_82581E30 *, int); } ObjVt_82581E30;
typedef struct Ref_82581E30 { int pad; int count; } Ref_82581E30;
typedef struct Node_82581E30 { Obj_82581E30 *obj; Ref_82581E30 *ref; char pad[0xc]; struct Node_82581E30 *next; } Node_82581E30;
typedef struct Owner_82581E30 { char pad[0xdc]; Node_82581E30 *head; } Owner_82581E30;
extern void fn_82522ED8(Node_82581E30 *);

int fn_82581E30(Owner_82581E30 *o, unsigned *key)
{
  Node_82581E30 *cur, *prev;
  prev = 0;
  for (cur = o->head; cur != 0; prev = cur, cur = cur->next) {
    if (cur->obj->info->id == *key) {
      Obj_82581E30 *obj;
      Ref_82581E30 *ref;
      if (prev != 0)
        prev->next = cur->next;
      else
        o->head = cur->next;
      obj = cur->obj;
      if (obj != 0)
        obj->vt->sc(obj, 1);
      ref = cur->ref;
      if (ref != 0) {
        ref->count--;
        cur->ref = 0;
      }
      fn_82522ED8(cur);
      return 1;
    }
  }
  return 0;
}
