typedef struct Blk_82AF8780 Blk_82AF8780;
struct Blk_82AF8780 {
  unsigned int w0;
  unsigned int pad4;
  unsigned int count;
};
typedef struct Iter_82AF8780 {
  int pad0;
  Blk_82AF8780 *cur;
  unsigned int count;
} Iter_82AF8780;

typedef struct Elem_82AF8780 { int a, b; } Elem_82AF8780;

Elem_82AF8780 *fn_82AF8780(Iter_82AF8780 *it)
{
  unsigned int n;
  if (it->count == 0) {
    unsigned int v = *(unsigned int *)((unsigned int)it->cur & 0xfffffffe);
    Blk_82AF8780 *b;
    if ((v & 1) != 0)
      b = 0;
    else
      b = (Blk_82AF8780 *)((v & 0xfffffffe) - 4);
    it->cur = b;
    it->count = b->count;
  }
  n = it->count - 1;
  it->count = n;
  return (Elem_82AF8780 *)((char *)it->cur + (n + 2) * 8);
}
