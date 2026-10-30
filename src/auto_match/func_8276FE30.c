extern void fn_8276F7C0();

typedef struct Elem_8276FE30 { int x; int y; int z; } Elem_8276FE30;
typedef struct ChunkArray_8276FE30 {
  unsigned int size;
  unsigned int nchunks;
  int f8;
  Elem_8276FE30 **chunks;
} ChunkArray_8276FE30;

void fn_8276FE30(ChunkArray_8276FE30 *a, Elem_8276FE30 *v)
{
  unsigned int idx = a->size >> 8;
  if (idx >= a->nchunks) {
    fn_8276F7C0(a, idx);
  }
  a->chunks[idx][a->size & 0xff] = *v;
  a->size++;
}
