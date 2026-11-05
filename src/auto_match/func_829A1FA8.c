typedef struct {
  char pad0[0xc];
  unsigned count;
  char pad10[0x18 - 0x10];
  unsigned **items;
  char pad1c[0x100 - 0x1c];
  unsigned idx;
  unsigned *cur;
} Obj_829A1FA8;

extern void fn_8294B7A8(Obj_829A1FA8 *);
extern int fn_82969030(Obj_829A1FA8 *);
extern int fn_8296E438(Obj_829A1FA8 *);
extern int fn_8296EB38(Obj_829A1FA8 *);
extern int fn_82971580(Obj_829A1FA8 *);
extern int fn_82996E58(Obj_829A1FA8 *);
extern int fn_82997150(Obj_829A1FA8 *);

int fn_829A1FA8(Obj_829A1FA8 *o)
{
  unsigned i;
  int r;

  for (i = 0; i < o->count; i++) {
    o->idx = i;
    o->cur = o->items[i];
    if ((*o->cur & 0xfff00000) == 0x11000000) {
      r = fn_82996E58(o);
      if (r < 0)
        return r;
    }
  }
  fn_8294B7A8(o);
  for (i = 0; i < o->count; i++) {
    o->idx = i;
    o->cur = o->items[i];
    if ((*o->cur & 0xfff00000) == 0x11000000) {
      r = fn_82997150(o);
      if (r < 0)
        return r;
    }
  }
  fn_8294B7A8(o);
  r = fn_8296E438(o);
  if (r >= 0) {
    r = fn_8296EB38(o);
    if (r >= 0) {
      r = fn_82969030(o);
      if (r >= 0) {
        r = fn_82971580(o);
        if (r >= 0) {
          fn_8294B7A8(o);
          r = 0;
        }
      }
    }
  }
  return r;
}
