typedef struct Obj Obj;
typedef struct { int pad[6]; int (*fn18)(Obj *, int, int); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct {
  int pad0[5];
  Obj **list;   /* 0x14 */
  int count;    /* 0x18 */
  int pad1[8];
  int flags;    /* 0x3c */
} Item;
typedef struct {
  char pad[0xc0];
  Item *items;  /* 0xc0 */
  int n;        /* 0xc4 */
} Self;

int fn_82D41ED0(Self *self, int arg)
{
  int i, j, r, limit, m;
  Item *it;

  for (i = 0; i < self->n; i++) {
    it = &self->items[i];
    for (j = 0; j < it->count; j++) {
      r = it->list[j]->vt->fn18(it->list[j], arg, 0x100);
      m = it->flags & (int)0xc0ffffff;
      if (m == 0) limit = 0x200;
      else if (m == 1) limit = 0x1d0;
      else limit = 0x1a0;
      if (r < 0 || r > limit) return -1;
    }
  }
  return 0xf0;
}
