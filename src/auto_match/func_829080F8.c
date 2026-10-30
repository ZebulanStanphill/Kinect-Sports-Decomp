typedef struct { char pad[4]; unsigned int count; char pad2[8]; int *items; char pad3[0x5c]; unsigned int flags70; } Sub_829080F8;
typedef struct { char pad[8]; Sub_829080F8 *sub; } Obj_829080F8;
typedef struct { int pad; unsigned int flags; } Ent_829080F8;
extern unsigned int fn_82964760(Sub_829080F8 *, Ent_829080F8 *);
extern int fn_82907DE8(Obj_829080F8 *, unsigned int, int, unsigned int, int, int, int, unsigned int *, int, int, int);

int fn_829080F8(Obj_829080F8 *o, unsigned int p2, int p3, unsigned int p4, int p5, int p6, int p7, int p8)
{
  unsigned int out;
  Ent_829080F8 *e;
  unsigned int idx;
  unsigned int f;
  if (p2 == 0) return 0;
  out = 0;
  if (p4 < o->sub->count) e = (Ent_829080F8 *)o->sub->items[p4]; else e = 0;
  if (e == 0) return 0x80004005;
  idx = fn_82964760(o->sub, e);
  if (idx < o->sub->count) e = (Ent_829080F8 *)o->sub->items[idx]; else e = 0;
  if (e == 0) return 0x8007000e;
  f = e->flags | 0x40;
  e->flags = f;
  if ((f & 0x10) != 0 && (f & 0x80) == 0) {
    if ((f & 0x200) != 0 && (o->sub->flags70 & 0x200000) != 0) {
      f = f | 0x400;
      e->flags = f;
    }
    f = e->flags;
    if ((f & 0x200) == 0 && (o->sub->flags70 & 0x100000) != 0) {
      f = f | 0x100400;
      e->flags = f;
    }
  }
  return fn_82907DE8(o, p2, p3, idx, p5, p6, p7, &out, p7, p8, 0);
}
