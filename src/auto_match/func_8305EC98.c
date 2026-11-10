typedef struct Obj_8305EC98 {
  char pad[0x28];
  void *table;
  unsigned *items;
  int count;
  int a;
  int b;
  int c;
} Obj_8305EC98;
extern void *memcpy(void *, const void *, unsigned);
extern void fn_8305EB60(Obj_8305EC98 *o, int count);
extern unsigned fn_8305F7A0(void *table, unsigned v);
extern unsigned fn_83060570(void *table, unsigned v);

void fn_8305EC98(Obj_8305EC98 *dst, Obj_8305EC98 *src)
{
  int i;
  /* the store goes through a second pointer to the destination: base-first stwx */
  Obj_8305EC98 *self = dst;
  void *st;
  dst->a = src->a;
  dst->b = src->b;
  dst->c = src->c;
  fn_8305EB60(dst, src->count);
  st = src->table;
  if (dst->table != st) {
    for (i = 0; i < dst->count; i++) {
      self->items[i] = fn_83060570(dst->table, fn_8305F7A0(src->table, src->items[i]));
    }
  } else {
    memcpy(dst->items, src->items, dst->count << 2);
  }
}
