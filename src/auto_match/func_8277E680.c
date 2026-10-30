extern void fn_8277CC70();

typedef struct Elem_8277E680 { int x; int y; int z; int w; } Elem_8277E680;
typedef struct ChunkArray_8277E680 {
  unsigned int size;
  unsigned int nchunks;
  int f8;
  Elem_8277E680 **chunks;
} ChunkArray_8277E680;

void fn_8277E680(ChunkArray_8277E680 *a, Elem_8277E680 *v)
{
  unsigned int idx = a->size >> 10;
  if (idx >= a->nchunks) {
    fn_8277CC70(a, idx);
  }
  a->chunks[idx][a->size & 0x3ff] = *v;
  a->size++;
}
