extern int *fn_82AF87E0();

typedef struct Block_82B50418 {
  int f0;
  int f4;
  int count;
  unsigned int cap;
  unsigned __int64 items[1];
} Block_82B50418;
typedef struct Arena_82B50418 {
  unsigned int head;
  unsigned int flags;
} Arena_82B50418;

void fn_82B50418(Arena_82B50418 *a, unsigned __int64 v)
{
  Block_82B50418 *blk;

  if ((a->flags & 1) == 0) {
    blk = (Block_82B50418 *)((a->head & 0xfffffffe) - 4);
    if (blk != 0 && blk->count + 1U <= blk->cap) goto ok;
  }
  blk = (Block_82B50418 *)fn_82AF87E0(a, 1);
ok:
  { unsigned __int64 *slot = &blk->items[blk->count++]; *slot = v; }
}
