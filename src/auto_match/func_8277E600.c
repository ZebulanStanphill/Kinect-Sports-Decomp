extern void fn_8277D098();

typedef struct Elem_8277E600 { int x; int y; int z; int w; } Elem_8277E600;
typedef struct ChunkArray_8277E600 {
  unsigned int size;
  unsigned int nchunks;
  int f8;
  Elem_8277E600 **chunks;
} ChunkArray_8277E600;

void fn_8277E600(ChunkArray_8277E600 *a, Elem_8277E600 *v)
{
  unsigned int idx = a->size >> 6;
  if (idx >= a->nchunks) {
    fn_8277D098(a, idx);
  }
  a->chunks[idx][a->size & 0x3f] = *v;
  a->size++;
}
