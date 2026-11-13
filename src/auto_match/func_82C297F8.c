typedef struct Ent_82C297F8 { int pad; unsigned size; unsigned __int64 off; } Ent_82C297F8;
typedef struct Node_82C297F8 { Ent_82C297F8 *e; int pad[2]; struct Node_82C297F8 *next; } Node_82C297F8;
typedef struct List_82C297F8 { int pad[4]; Node_82C297F8 *end; Node_82C297F8 *begin; } List_82C297F8;
typedef struct Obj_82C297F8 { int pad[11]; List_82C297F8 *l; } Obj_82C297F8;

int fn_82C297F8(Obj_82C297F8 *o, unsigned __int64 pos, Node_82C297F8 **out, int *found)
{
  Node_82C297F8 *n;
  Node_82C297F8 *end;
  *found = 0;
  *out = 0;
  n = o->l->begin;
  if (n != 0) {
    end = o->l->end;
    if (n != end) {
      do {
        if (n == 0) return 0;
        if (pos < n->e->off) return 0;
        if (pos < n->e->size + n->e->off) {
          *found = 1;
          *out = n;
          return 0;
        }
        if (n->e->off > pos) return 0;
        n = n->next;
      } while (n != end);
    }
  }
  return 0;
}
