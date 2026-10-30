extern void fn_8277D130();

typedef struct Elem_8277E9F8 { int x; int y; int z; } Elem_8277E9F8;
typedef struct ChunkArray_8277E9F8 {
  unsigned int size;
  unsigned int nchunks;
  int f8;
  Elem_8277E9F8 **chunks;
} ChunkArray_8277E9F8;

void fn_8277E9F8(ChunkArray_8277E9F8 *a, Elem_8277E9F8 *v)
{
  unsigned int idx = a->size >> 10;
  if (idx >= a->nchunks) {
    fn_8277D130(a, idx);
  }
  a->chunks[idx][a->size & 0x3ff] = *v;
  a->size++;
}
