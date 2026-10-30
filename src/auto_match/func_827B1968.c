typedef struct Pair { int a; int b; } Pair;
typedef struct Deq { unsigned int off; unsigned int mapsize; int pad; Pair **map; } Deq;
extern void fn_827B0B58(Deq *d, unsigned int n);

void fn_827B1968(Deq *d, Pair *v)
{
  unsigned int blk = d->off >> 6;
  Pair *e;
  if (blk >= d->mapsize) {
    fn_827B0B58(d, blk);
  }
  e = d->map[blk] + (d->off & 0x3f);
  *e = *v;
  d->off = d->off + 1;
}
