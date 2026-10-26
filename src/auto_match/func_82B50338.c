typedef struct { int v[8]; } Item;
typedef struct Block { int a, b; unsigned int count; unsigned int cap; Item items[1]; } Block;
extern Block *fn_82B4B388(unsigned int *, int);

static Block *cur(unsigned int *p)
{
  return (p[1] & 1) ? 0 : (Block *)((p[0] & ~1u) - 4);
}

Item *fn_82B50338(unsigned int *p)
{
  Block *b = cur(p);
  if (b == 0 || b->count + 1 > b->cap)
    b = fn_82B4B388(p, 1);
  return &b->items[b->count++];
}
