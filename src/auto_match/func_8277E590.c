typedef struct Pair { int a; int b; } Pair;
typedef struct Deq { unsigned int off; unsigned int mapsize; int pad; Pair **map; } Deq;
extern void fn_8277CBD8(Deq *d, unsigned int n);

void fn_8277E590(Deq *d, Pair *v)
{
  unsigned int blk = d->off >> 10;
  Pair *e;
  if (blk >= d->mapsize) {
    fn_8277CBD8(d, blk);
  }
  e = d->map[blk] + (d->off & 0x3ff);
  *e = *v;
  d->off = d->off + 1;
}
