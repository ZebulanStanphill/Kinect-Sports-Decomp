extern int *fn_82AD6090();
extern int fn_82B4B048();

typedef struct Block_82B50698 {
  int f0;
  int f4;
  int count;
  unsigned int cap;
  int items[1];
} Block_82B50698;
typedef struct Arena_82B50698 {
  unsigned int head;
  unsigned int flags;
} Arena_82B50698;

void fn_82B50698(int param_1, int v)
{
  Arena_82B50698 *a;
  Block_82B50698 *blk;

  fn_82B4B048(*(int *)(param_1 + 4));
  a = *(Arena_82B50698 **)(param_1 + 4);
  if ((a->flags & 1) == 0) {
    blk = (Block_82B50698 *)((a->head & 0xfffffffe) - 4);
    if (blk != 0 && blk->count + 1U <= blk->cap) goto ok;
  }
  blk = (Block_82B50698 *)fn_82AD6090(a, 1);
ok:
  { int *slot = &blk->items[blk->count++]; *slot = v; }
}
