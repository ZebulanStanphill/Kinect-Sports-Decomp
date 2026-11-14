extern void *memcpy(void *d, const void *s, unsigned int n);
extern void fn_8280DD78(const float *a, const float *b, float *out, float t);
extern void fn_8280E418(float *out, const float *in);

typedef struct {
  unsigned char *base;
  unsigned int stride;
  unsigned int off;
  char pad[0x26];
  unsigned short n;
} Buf_82808D88;

typedef struct {
  unsigned char *i0;
  unsigned char *i1;
  unsigned char *i2;
  unsigned char *i3;
} Idx_82808D88;

typedef struct {
  char pad0[0x40];
  float t;
  char pad1[4];
  unsigned short count;
  char pad2[6];
  unsigned char *mask;
  void *dflt;
} Anim_82808D88;

void fn_82808D88(Anim_82808D88 *a, Idx_82808D88 *ix, float *dst)
{
  Buf_82808D88 *b = *(Buf_82808D88 **)((char *)a + 0x64);
  unsigned int i = 0;
  unsigned int n = b->n;
  float *p0 = (float *)(ix->i0[b->off] * b->stride + (unsigned int)b->base);
  float *p1 = (float *)(ix->i1[b->off] * b->stride + (unsigned int)b->base);
  float *p2 = (float *)(ix->i2[b->off] * b->stride + (unsigned int)b->base);
  float *p3 = (float *)(ix->i3[b->off] * b->stride + (unsigned int)b->base);
  unsigned int k;
  if (a->count != 0) {
    do {
      if (a->mask == 0 || a->mask[i] != 0) {
        fn_8280DD78(p1, p2, dst, a->t);
        fn_8280E418(dst, dst);
        for (k = 4; k < n; k++) {
          dst[k] = ((((p1[k] * 1.5f - p2[k] * 1.5f) + (p3[k] * 0.5f - p0[k] * 0.5f)) * a->t
                     + ((p0[k] - p1[k] * 2.5f) + (p2[k] * 2.0f - p3[k] * 0.5f))) * a->t
                    + (p2[k] * 0.5f - p0[k] * 0.5f)) * a->t + p1[k];
        }
      } else {
        memcpy(dst, a->dflt, n * 4);
      }
      i = i + 1;
      dst = dst + n;
      p0 = p0 + n;
      p1 = p1 + n;
      p2 = p2 + n;
      p3 = p3 + n;
    } while (i < a->count);
  }
}
