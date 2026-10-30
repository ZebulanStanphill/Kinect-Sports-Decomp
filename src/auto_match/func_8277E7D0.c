extern void fn_8277CE38();

typedef struct Elem_8277E7D0 { int x; int y; int z; } Elem_8277E7D0;
typedef struct ChunkArray_8277E7D0 {
  unsigned int size;
  unsigned int nchunks;
  int f8;
  Elem_8277E7D0 **chunks;
} ChunkArray_8277E7D0;

void fn_8277E7D0(ChunkArray_8277E7D0 *a, Elem_8277E7D0 *v)
{
  unsigned int idx = a->size >> 6;
  if (idx >= a->nchunks) {
    fn_8277CE38(a, idx);
  }
  a->chunks[idx][a->size & 0x3f] = *v;
  a->size++;
}
