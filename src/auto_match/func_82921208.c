typedef struct Volume_82921208 Volume_82921208;

typedef struct VolumeVtbl_82921208 {
    void *f0;
    void (*get)(Volume_82921208 *self, unsigned int y, unsigned int z, void *row); /* 0x4 */
    void (*set)(Volume_82921208 *self, unsigned int y, unsigned int z, void *row); /* 0x8 */
} VolumeVtbl_82921208;

struct Volume_82921208 {
    VolumeVtbl_82921208 *vtbl; /* 0x00 */
    char pad04[0xc];
    int f10; /* 0x10 */
    char pad14[0x54];
    unsigned int width;  /* 0x68 */
    unsigned int height; /* 0x6c */
    unsigned int depth;  /* 0x70 */
};

typedef struct Copy_82921208 {
    Volume_82921208 *source; /* 0x0 */
    Volume_82921208 *dest;   /* 0x4 */
    unsigned char pad8[3];
    unsigned char mode; /* 0xb */
} Copy_82921208;

typedef struct Texel_82921208 {
    float r;
    float g;
    float b;
    float a;
} Texel_82921208;

extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);

static __forceinline void *Alloc(unsigned int n)
{
    return fn_8265C940(n, 0x24810000);
}

/* Resamples the source volume into the destination with nearest-point sampling (16.16 steps). */
int fn_82921208(Copy_82921208 *p)
{
    Texel_82921208 *sourceRow;
    Texel_82921208 *destRow;
    Texel_82921208 *texel;
    unsigned int stepX;
    unsigned int stepY;
    unsigned int stepZ;
    unsigned int x;
    unsigned int y;
    unsigned int z;
    unsigned int u;
    unsigned int v;
    unsigned int w;
    unsigned int lastV;

    if (p->mode != 2) {
        return 0x80004005;
    }
    sourceRow = (Texel_82921208 *)Alloc(p->source->width << 4);
    if (sourceRow == 0) {
        return 0x8007000E;
    }
    destRow = (Texel_82921208 *)Alloc(p->dest->width << 4);
    if (destRow == 0) {
        fn_8265C990(sourceRow, 0x24810000);
        return 0x8007000E;
    }
    if (p->dest->f10 != 0 && p->source->f10 != 0) {
        p->dest->f10 = 0;
        p->source->f10 = 0;
    }
    stepX = (p->source->width << 16) / p->dest->width;
    stepY = (p->source->height << 16) / p->dest->height;
    stepZ = (p->source->depth << 16) / p->dest->depth;
    w = 0;
    for (z = 0; z < p->dest->depth; z++) {
        v = 0;
        for (y = 0, lastV = 0xffffffff; y < p->dest->height; y++) {
            u = 0;
            x = 0;
            if (((lastV ^ v) & 0xffff0000) != 0) {
                p->source->vtbl->get(p->source, v >> 16, w >> 16, sourceRow);
                lastV = v;
            }
            for (; x < p->dest->width; x++) {
                texel = &sourceRow[u >> 16];
                destRow[x].r = texel->r;
                destRow[x].g = texel->g;
                destRow[x].b = texel->b;
                destRow[x].a = texel->a;
                u += stepX;
            }
            p->dest->vtbl->set(p->dest, y, z, destRow);
            v += stepY;
        }
        w += stepZ;
    }
    fn_8265C990(sourceRow, 0x24810000);
    fn_8265C990(destRow, 0x24810000);
    return 0;
}
