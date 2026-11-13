typedef struct { char pad0[0x14]; int f14; char pad1[0x4c - 0x18]; int f4c; char pad2[0x60 - 0x50]; } Item_82D42600;
typedef struct { short *data; int size; unsigned int cap; } Arr_82D42600;
typedef struct { char pad[0x10]; int f10; } G_82D42600;
typedef struct {
  char pad0[0xb0]; unsigned int shift; Item_82D42600 *items; int nitems; char pad1[0xcc - 0xbc];
  Arr_82D42600 arr;
} Obj_82D42600;
extern G_82D42600 *fn_82CE5410(void);
extern void fn_82CE6310(int, Arr_82D42600 *, int, int);

static __forceinline int Max(int a, int b) { return b < a ? a : b; }
void fn_82D42600(Obj_82D42600 *self, unsigned int idx, short val)
{
  int total, i;
  G_82D42600 *g;
  int c2;
  int h;
  Arr_82D42600 *a;

  if (self->arr.size == 0) {
    total = 0;
    for (i = 0; i < self->nitems; i++) {
      self->items[i].f4c = total;
      total += self->items[i].f14;
    }
    a = &self->arr;
    g = fn_82CE5410();
    if ((int)(a->cap & 0x3fffffff) < total) fn_82CE6310(g->f10, a, total, 2);
    g = fn_82CE5410();
    h = g->f10;
    c2 = a->cap & 0x3fffffff;
    if (c2 < total) {
      c2 = Max(c2 * 2, total);
      fn_82CE6310(h, a, c2, 2);
    }
    a->size = total;
  }
  if ((idx & 0x80000000) == 0) {
    self->arr.data[self->items[(idx & 0x7fffffff) >> (0x20 - self->shift)].f4c + (idx & (0xffffffffU >> self->shift))] = val;
  }
}
