extern void *memmove(void *, const void *, unsigned);
extern unsigned char fn_82536358(void *item);
extern void fn_82536008(int item);
extern void fn_82536288(int *item);

typedef struct Vec_8228F3E8 {
  int *first;
  int *last;
} Vec_8228F3E8;

typedef struct Obj_8228F3E8 {
  char pad[0x38];
  Vec_8228F3E8 items;
} Obj_8228F3E8;

void fn_8228F3E8(Obj_8228F3E8 *self)
{
  int *it;
  Vec_8228F3E8 *v;
  int *f;

  for (it = self->items.first; it != self->items.last; it++) {
    int item = *it;
    if (fn_82536358((void *)item)) {
      fn_82536008(item);
      fn_82536288(&item);
    }
  }
  v = &self->items;
  f = v->first;
  if (f != v->last) {
    int *l = v->last;
    unsigned n = (v->last - l) * 4;
    memmove(f, l, n);
    v->last = f + (n >> 2);
  }
}
