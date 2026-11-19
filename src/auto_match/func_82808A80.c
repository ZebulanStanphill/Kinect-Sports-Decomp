extern void *memcpy(void *dst, const void *src, unsigned int size);
extern float fn_82809558(float value);
extern void fn_8280DD78(const float *from, const float *to, float *out, float t);
extern void fn_8280E418(float *in, float *out);

typedef struct Buffer_82808A80 {
    unsigned char *base; /* 0x0 */
    unsigned int stride; /* 0x4 */
    unsigned int offset; /* 0x8 */
    char padc[0x26];
    unsigned short width; /* 0x32 */
} Buffer_82808A80;

typedef struct Keys_82808A80 {
    char pad0[4];
    unsigned char *from; /* 0x4 */
    unsigned char *to;   /* 0x8 */
} Keys_82808A80;

typedef struct Anim_82808A80 {
    char pad0[0x40];
    float t; /* 0x40 */
    char pad44[4];
    unsigned short count; /* 0x48 */
    char pad4a[6];
    unsigned char *mask; /* 0x50 */
    void *defaults;      /* 0x54 */
    char pad58[0xc];
    Buffer_82808A80 *buffer; /* 0x64 */
} Anim_82808A80;

static __forceinline void RebuildW(float *q)
{
    float w = 1.0f - (q[0] * q[0] + q[1] * q[1] + q[2] * q[2]);
    if (w <= 0.0f) {
        q[3] = 0.0f;
    } else {
        q[3] = fn_82809558(w);
    }
}

void fn_82808A80(Anim_82808A80 *a, Keys_82808A80 *keys, float *dst)
{
    Buffer_82808A80 *b = a->buffer;
    unsigned int i = 0;
    unsigned int n = b->width;
    float *pa = (float *)(keys->from[b->offset] * b->stride + (unsigned int)b->base);
    float *pb = (float *)(keys->to[b->offset] * b->stride + (unsigned int)b->base);
    unsigned int k;
    if (a->count != 0) {
        do {
            if (a->mask == 0 || a->mask[i] != 0) {
                RebuildW(pa);
                RebuildW(pb);
                fn_8280DD78(pa, pb, dst, a->t);
                fn_8280E418(dst, dst);
                for (k = 4; k < n; k++) {
                    dst[k] = (pb[k] - pa[k]) * a->t + pa[k];
                }
            } else {
                memcpy(dst, a->defaults, n * 4);
            }
            i = i + 1;
            dst = dst + n;
            pa = pa + n;
            pb = pb + n;
        } while (i < a->count);
    }
}
