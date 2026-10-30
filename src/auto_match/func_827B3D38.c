extern void fn_827B3938();

typedef struct Elem_827B3D38 { int x; int y; int z; int w; } Elem_827B3D38;
typedef struct ChunkArray_827B3D38 {
  unsigned int size;
  unsigned int nchunks;
  int f8;
  Elem_827B3D38 **chunks;
} ChunkArray_827B3D38;

void fn_827B3D38(ChunkArray_827B3D38 *a, Elem_827B3D38 *v)
{
  unsigned int idx = a->size >> 8;
  if (idx >= a->nchunks) {
    fn_827B3938(a, idx);
  }
  a->chunks[idx][a->size & 0xff] = *v;
  a->size++;
}
