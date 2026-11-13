typedef struct Blk_82B4B1D8 {
  unsigned int w0;
  unsigned int pad4;
  unsigned int count;
} Blk_82B4B1D8;
typedef struct Iter_82B4B1D8 {
  int pad0;
  Blk_82B4B1D8 *cur;
  unsigned int count;
} Iter_82B4B1D8;

void fn_82B4B1D8(Iter_82B4B1D8 *it, unsigned int n)
{
  while (n != 0) {
    unsigned int take;
    if (it->count == 0) {
      unsigned int v = *(unsigned int *)((unsigned int)it->cur & 0xfffffffe);
      Blk_82B4B1D8 *b;
      if ((v & 1) != 0)
        b = 0;
      else
        b = (Blk_82B4B1D8 *)((v & 0xfffffffe) - 4);
      it->cur = b;
      it->count = b->count;
    }
    take = n < it->count ? n : it->count;
    it->count -= take;
    n -= take;
  }
}
