typedef struct { float x, y; unsigned flags : 8; unsigned id : 24; } Elem_82788DD0;
typedef struct {
  unsigned size;
  int pad4[2];
  Elem_82788DD0 **map;
  int pad10[0x1a];
  unsigned first;
} Deque_82788DD0;

int fn_82788DD0(Deque_82788DD0 *d, unsigned id, float x, float y)
{
  unsigned n = d->size;
  unsigned i;
  Elem_82788DD0 *e;
  if (n > d->first) {
    do {
      i = n - 1;
      e = &d->map[(i >> 8)][i & 0xff];
      if (e->id == id && e->x == x && e->y == y) return n - 1;
      i = i - 1;
      n = n - 1;
    } while (n > d->first);
  }
  return -1;
}
