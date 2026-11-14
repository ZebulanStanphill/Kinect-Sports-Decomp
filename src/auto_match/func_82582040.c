typedef struct Target_82582040 {
  char pad0[0x54];
  unsigned char dirty;
} Target_82582040;

typedef struct Entry_82582040 {
  Target_82582040 *target;
  char pad4[0xc - 0x4];
  unsigned char disabled;
  unsigned char enabled;
  char padE[0x10 - 0xe];
  struct Entry_82582040 *next;
} Entry_82582040;

typedef struct Child_82582040 {
  void *item;
  char pad4[0x14 - 0x4];
  struct Child_82582040 *next;
} Child_82582040;

typedef struct Obj_82582040 {
  char pad0[0xdc];
  Child_82582040 *children;
  Entry_82582040 *entries;
} Obj_82582040;

extern void *lbl_8320A898;
extern void fn_82586008(void *item, int arg);
extern void *fn_82544528(void);
extern void fn_8263CBB0(void *a, unsigned int b, void *c, unsigned __int64 mask);
extern void fn_825D8490(Target_82582040 *t, float v, int b, int c);

void fn_82582040(Obj_82582040 *self, float value, int arg)
{
  Entry_82582040 *e;
  Child_82582040 *c;

  for (e = self->entries; e != 0; e = e->next) {
    e->target->dirty = 0;
  }
  for (c = self->children; c != 0; c = c->next) {
    if (c->item != 0) {
      fn_82586008(c->item, arg);
    }
  }
  e = self->entries;
  {
    void *ctx = fn_82544528();
    fn_8263CBB0(lbl_8320A898, 1, ctx, 0x40000000);
  }
  for (; e != 0; e = e->next) {
    if (e->disabled == 0 && e->enabled != 0) {
      fn_825D8490(e->target, value, arg, 1);
    }
  }
}
