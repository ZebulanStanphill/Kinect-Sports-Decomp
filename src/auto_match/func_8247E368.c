typedef struct Item_8247E368 Item_8247E368;
typedef struct IVT_8247E368 { void (*f0)(Item_8247E368 *, int); } IVT_8247E368;
struct Item_8247E368 { IVT_8247E368 *vt; char pad[0x44]; };
typedef struct Chunk_8247E368 { char str[0x1c]; Item_8247E368 *first; Item_8247E368 *last; Item_8247E368 *end; } Chunk_8247E368;
typedef struct DQ_8247E368 { int pad0; Chunk_8247E368 **map; unsigned int mapsize; unsigned int off; unsigned int size; } DQ_8247E368;
extern void fn_82230300(void *s, int a, int b);
extern void fn_8265CA20(void *p);

void fn_8247E368(DQ_8247E368 *d)
{
  unsigned int i;
  unsigned int n;
  while (d->size != 0) {
    if (d->size != 0) {
      Chunk_8247E368 *c;
      Item_8247E368 *it;
      Item_8247E368 *q;
      unsigned int idx = d->size + d->off - 1;
      if (d->mapsize <= idx) idx -= d->mapsize;
      c = d->map[idx];
      it = c->first;
      if (it != 0) {
        Item_8247E368 *e = c->last;
        for (q = it; q != e; q++) q->vt->f0(q, 0);
        fn_8265CA20(c->first);
      }
      c->first = 0;
      c->last = 0;
      c->end = 0;
      fn_82230300(c, 1, 0);
      if (--d->size == 0) d->off = 0;
    }
  }
  n = d->mapsize;
  if (n != 0) {
    i = n * 4;
    do {
      i -= 4;
      n--;
      if (*(void **)((char *)d->map + i) != 0) fn_8265CA20(*(void **)((char *)d->map + i));
    } while (n != 0);
  }
  if (d->map != 0) fn_8265CA20(d->map);
  d->mapsize = 0;
  d->map = 0;
}
