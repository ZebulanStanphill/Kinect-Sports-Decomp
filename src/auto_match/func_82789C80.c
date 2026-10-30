extern void fn_82789028();

typedef struct Elem_82789C80 { int x; int y; int z; } Elem_82789C80;
typedef struct ChunkArray_82789C80 {
  unsigned int size;
  unsigned int nchunks;
  int f8;
  Elem_82789C80 **chunks;
} ChunkArray_82789C80;

void fn_82789C80(ChunkArray_82789C80 *a, Elem_82789C80 *v)
{
  unsigned int idx = a->size >> 10;
  if (idx >= a->nchunks) {
    fn_82789028(a, idx);
  }
  a->chunks[idx][a->size & 0x3ff] = *v;
  a->size++;
}
