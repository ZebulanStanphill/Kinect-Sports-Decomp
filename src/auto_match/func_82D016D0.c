typedef struct Item { struct Item *next; int size; } Item;
typedef struct Obj Obj;
typedef struct { void *s[4]; int (*f10)(Obj *, Item *, int); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct { int pad[12]; Obj *obj; } Self;

int fn_82D016D0(Self *s, Item *it)
{
  int total = 0;

  for (; it != 0; it = it->next) {
    total = s->obj->vt->f10(s->obj, it, it->size) + total;
  }
  return total;
}
