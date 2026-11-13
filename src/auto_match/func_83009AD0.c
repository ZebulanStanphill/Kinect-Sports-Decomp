struct Item_83009AD0;
struct Obj_83009AD0;
typedef struct Ctx_83009AD0 { struct Obj_83009AD0 *focus; } Ctx_83009AD0;
typedef struct ItemVt_83009AD0 {
  int pad[17];
  void (*Update)(struct Item_83009AD0 *, float, Ctx_83009AD0 *, int);
} ItemVt_83009AD0;
typedef struct Item_83009AD0 { ItemVt_83009AD0 *vt; char pad[0x14]; unsigned short active; } Item_83009AD0;
typedef struct Entry_83009AD0 { int key; Item_83009AD0 *item; } Entry_83009AD0;
typedef struct Obj_83009AD0 {
  char pad[0x48];
  Entry_83009AD0 *first;
  Entry_83009AD0 *last;
  char pad2[0x50];
  unsigned char flags;
} Obj_83009AD0;

void fn_83009AD0(Obj_83009AD0 *o, float dt, Ctx_83009AD0 *c)
{
  Entry_83009AD0 *e;
  for (e = o->first; e != o->last; e++) {
    Item_83009AD0 *it = e->item;
    if (it->active != 0) {
      if ((o->flags & 8) != 0 && c->focus == o)
        dt = 0.0f;
      it->vt->Update(it, dt, c, 1);
    }
  }
}
