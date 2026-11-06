typedef struct { unsigned int pad0; unsigned int pad1; unsigned int mapsize; } Dummy;
typedef struct { int pad; unsigned int **map; unsigned int mapsize; } Deq;
typedef struct { Deq *c; unsigned int idx; } It;
unsigned int fn_8287CED8(It a, It b, unsigned int sum)
{
  unsigned int i, n;
  if (a.idx == b.idx) return sum;
  i = a.idx;
  n = b.idx - a.idx;
  do {
    unsigned int blk = i >> 2;
    unsigned int off = i & 3;
    if (a.c->mapsize <= blk) blk -= a.c->mapsize;
    i++;
    sum += a.c->map[blk][off];
    n--;
  } while (n != 0);
  return sum;
}
