extern void fn_82779BC8();

typedef struct Elem_82779C60 { int x; int y; int z; } Elem_82779C60;
typedef struct ChunkArray_82779C60 {
  unsigned int size;
  unsigned int nchunks;
  int f8;
  Elem_82779C60 **chunks;
} ChunkArray_82779C60;

void fn_82779C60(ChunkArray_82779C60 *a, Elem_82779C60 *v)
{
  unsigned int idx = a->size >> 6;
  if (idx >= a->nchunks) {
    fn_82779BC8(a, idx);
  }
  a->chunks[idx][a->size & 0x3f] = *v;
  a->size++;
}
