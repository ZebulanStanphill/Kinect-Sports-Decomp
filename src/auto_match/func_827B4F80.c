typedef struct Pair { int a; int b; } Pair;
typedef struct Deq { unsigned int off; unsigned int mapsize; int pad; Pair **map; } Deq;
extern void fn_827B4A98(Deq *d, unsigned int n);

void fn_827B4F80(Deq *d, Pair *v)
{
  unsigned int blk = d->off >> 4;
  Pair *e;
  if (blk >= d->mapsize) {
    fn_827B4A98(d, blk);
  }
  e = d->map[blk] + (d->off & 0xf);
  *e = *v;
  d->off = d->off + 1;
}
