extern void fn_82788F90();

typedef struct Elem_82789C08 { int x; int y; int z; } Elem_82789C08;
typedef struct ChunkArray_82789C08 {
  unsigned int size;
  unsigned int nchunks;
  int f8;
  Elem_82789C08 **chunks;
} ChunkArray_82789C08;

void fn_82789C08(ChunkArray_82789C08 *a, Elem_82789C08 *v)
{
  unsigned int idx = a->size >> 8;
  if (idx >= a->nchunks) {
    fn_82788F90(a, idx);
  }
  a->chunks[idx][a->size & 0xff] = *v;
  a->size++;
}
