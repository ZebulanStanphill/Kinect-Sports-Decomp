typedef struct Cell_82E3BE78 { struct Cell_82E3BE78 *a; struct Cell_82E3BE78 *next; } Cell_82E3BE78;
typedef struct Blk_82E3BE78 { struct Blk_82E3BE78 *link; Cell_82E3BE78 cells[1]; } Blk_82E3BE78;
typedef struct Pool_82E3BE78 { Cell_82E3BE78 *free; Blk_82E3BE78 *blocks; unsigned count; } Pool_82E3BE78;
extern void *fn_82A2A360(void);
extern Blk_82E3BE78 *fn_82A28568(void *, int, unsigned);

int fn_82E3BE78(Pool_82E3BE78 *p, Cell_82E3BE78 **out)
{
  Blk_82E3BE78 *blk; Cell_82E3BE78 *c; unsigned *pc = &p->count;
  unsigned i;
  if (p->free == 0) {
    unsigned n = p->count;
    blk = fn_82A28568(fn_82A2A360(), 0, (n - 1) * 8 + 0xc);
    if (blk == 0) return 0x8007000e;
    i = 0;
    if (p->count > 0) {
      c = blk->cells;
      do {
        i++;
        c->next = p->free;
        p->free = c;
        c++;
      } while (i < *pc);
    }
    blk->link = p->blocks;
    p->blocks = blk;
  }
  *out = p->free;
  p->free = p->free->next;
  return 0;
}
