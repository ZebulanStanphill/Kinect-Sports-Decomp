extern void fn_82785658();

typedef struct Elem_827856F0 { int x; int y; int z; } Elem_827856F0;
typedef struct ChunkArray_827856F0 {
  unsigned int size;
  unsigned int nchunks;
  int f8;
  Elem_827856F0 **chunks;
} ChunkArray_827856F0;

void fn_827856F0(ChunkArray_827856F0 *a, Elem_827856F0 *v)
{
  unsigned int idx = a->size >> 8;
  if (idx >= a->nchunks) {
    fn_82785658(a, idx);
  }
  a->chunks[idx][a->size & 0xff] = *v;
  a->size++;
}
