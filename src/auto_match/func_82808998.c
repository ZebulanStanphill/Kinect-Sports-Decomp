extern void *memcpy(void *d, const void *s, unsigned int n);

typedef struct {
  unsigned char *base;
  unsigned int stride;
  unsigned int off;
  char pad[0x26];
  unsigned short n;
} Buf_82808998;

typedef struct {
  char pad0[4];
  unsigned char *ia;
  unsigned char *ib;
} Idx_82808998;

typedef struct {
  char pad0[0x40];
  float t;
  char pad1[4];
  unsigned short count;
  char pad2[6];
  unsigned char *mask;
  void *dflt;
} Anim_82808998;

void fn_82808998(Anim_82808998 *a, Idx_82808998 *ix, float *dst)
{
  Buf_82808998 *b = *(Buf_82808998 **)((char *)a + 0x64);
  unsigned int i = 0;
  unsigned int n = b->n;
  float *pa = (float *)(ix->ia[b->off] * b->stride + (unsigned int)b->base);
  float *pb = (float *)(ix->ib[b->off] * b->stride + (unsigned int)b->base);
  unsigned int k;
  if (a->count != 0) {
    do {
      if (a->mask == 0 || a->mask[i] != 0) {
        for (k = 0; k < n; k++) {
          dst[k] = (pb[k] - pa[k]) * a->t + pa[k];
        }
      } else {
        memcpy(dst, a->dflt, n * 4);
      }
      i = i + 1;
      dst = dst + n;
      pa = pa + n;
      pb = pb + n;
    } while (i < a->count);
  }
}
