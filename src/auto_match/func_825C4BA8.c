typedef struct Info_825C4BA8 { unsigned id; } Info_825C4BA8;
typedef struct Obj_825C4BA8 { struct ObjVt_825C4BA8 *vt; Info_825C4BA8 *info; } Obj_825C4BA8;
typedef struct ObjVt_825C4BA8 { void *s0, *s4, *s8; void (*sc)(Obj_825C4BA8 *, int); } ObjVt_825C4BA8;
typedef struct Ref_825C4BA8 { int pad; int count; } Ref_825C4BA8;
typedef struct Node_825C4BA8 { Obj_825C4BA8 *obj; char pad[0xc]; Ref_825C4BA8 *ref; struct Node_825C4BA8 *next; } Node_825C4BA8;
typedef struct Owner_825C4BA8 { char pad[8]; Node_825C4BA8 *head; } Owner_825C4BA8;
extern void fn_82522ED8(Node_825C4BA8 *);

int fn_825C4BA8(Owner_825C4BA8 *o, unsigned *key)
{
  Node_825C4BA8 *cur, *prev;
  prev = 0;
  for (cur = o->head; cur != 0; prev = cur, cur = cur->next) {
    if (cur->obj->info->id == *key) {
      Obj_825C4BA8 *obj;
      Ref_825C4BA8 *ref;
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
