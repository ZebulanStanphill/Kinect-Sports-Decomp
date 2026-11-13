typedef struct Obj_83028D28 {
  char pad[0x14];
  unsigned int flags;
} Obj_83028D28;

typedef struct Entry_83028D28 {
  int key;
  Obj_83028D28 *obj;
} Entry_83028D28;

typedef struct Owner_83028D28 {
  char pad[0x88];
  Entry_83028D28 *begin;
  Entry_83028D28 *end;
} Owner_83028D28;

static __forceinline void SetFlag_83028D28(Obj_83028D28 *o, unsigned int v)
{
  o->flags = (o->flags & 0xbfffffff) | ((v & 1) << 30);
}

void fn_83028D28(Owner_83028D28 *param_1, unsigned int param_2)
{
  Entry_83028D28 *e;

  for (e = param_1->begin; e != param_1->end; e++) {
    SetFlag_83028D28(e->obj, param_2);
  }
}
