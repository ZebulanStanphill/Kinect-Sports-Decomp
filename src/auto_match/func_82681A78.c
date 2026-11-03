extern int fn_8267BDA8(void *, unsigned);
extern void *fn_8267BED0(void *, int, int *);

typedef struct Obj_82681A78 {
  int f0;
  int count;
  unsigned cap;
  void **items;
} Obj_82681A78;

int fn_82681A78(Obj_82681A78 *self, unsigned idx)
{
  void *p;
  int a, b;
  if (idx >= self->cap) {
    if (self->items != 0) {
      p = (void *)fn_8267BDA8(self->items, (self->cap + 5) * 4);
    } else {
      a = 2;
      p = fn_8267BED0(self, 0x14, &a);
    }
    if (p == 0)
      return 0;
    self->items = p;
    self->cap = self->cap + 5;
  }
  b = 2;
  {
    void *r = fn_8267BED0(self, 0x1000, &b);
    self->items[idx] = r;
  }
  if (self->items[idx] == 0)
    return 0;
  self->count = self->count + 1;
  return 1;
}
