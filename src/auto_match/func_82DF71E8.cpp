extern "C" int fn_82CE5410();
extern "C" void fn_82CE6310(void *heap, void *arr, int n, int esz);
extern "C" void *memcpy(void *d, const void *s, unsigned int n);

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Heap_82DF71E8 {
  virtual void v0();
  virtual void *Alloc(unsigned int n);
};
struct Block_82DF71E8 {
  unsigned int hdr;
  Block_82DF71E8() : hdr(0) {}
};
struct Dst_82DF71E8 {
  char **data;
  int size;
  int cap;
  Dst_82DF71E8() : data(0), size(0), cap(0x80000000) {}
};
struct Node_82DF71E8 {
  Block_82DF71E8 **blocks;
  int nblocks;
  int pad8;
  Node_82DF71E8 **kids;
  int nkids;
  char pad14[4];
  int blk;
  int off;
};
static Heap_82DF71E8 *GetHeap() { return *(Heap_82DF71E8 **)(fn_82CE5410() + 0x10); }

extern "C" int fn_82DF71E8(Node_82DF71E8 *src, void *arg, Dst_82DF71E8 *dst)
{
  int n = src->nblocks;
  Heap_82DF71E8 *heap = GetHeap();
  if ((dst->cap & 0x3fffffff) < n) {
    int grow = (dst->cap & 0x3fffffff) << 1;
    int m = n < grow ? grow : n;
    fn_82CE6310(heap, dst, m, 4);
  }
  dst->size = n;
  for (int i = 0; i < src->nblocks; i++) {
    void *p = GetHeap()->Alloc(0x200);
    Block_82DF71E8 *b = new (p) Block_82DF71E8;
    ((Block_82DF71E8 **)dst->data)[i] = b;
    memcpy(((Block_82DF71E8 **)dst->data)[i], src->blocks[i], 0x200);
  }
  for (int j = 0; j < src->nkids; j++) {
    Node_82DF71E8 *k = src->kids[j];
    int q = (int)((char **)dst->data)[k->blk] + k->off;
    Dst_82DF71E8 *c = (Dst_82DF71E8 *)(q + 0x10);
    new (c) Dst_82DF71E8;
    if (fn_82DF71E8(k, arg, c) == 1) {
      return 1;
    }
  }
  return 0;
}
