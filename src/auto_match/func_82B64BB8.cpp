typedef struct Volume_82B64BB8 Volume_82B64BB8;

typedef struct VolumeVtbl_82B64BB8 {
    void *f0;
    void (*get)(Volume_82B64BB8 *self, unsigned int y, unsigned int z, void *row); /* 0x4 */
    void (*set)(Volume_82B64BB8 *self, unsigned int y, unsigned int z, void *row); /* 0x8 */
} VolumeVtbl_82B64BB8;

struct Volume_82B64BB8 {
    VolumeVtbl_82B64BB8 *vtbl; /* 0x00 */
    char pad04[0xc];
    int f10; /* 0x10 */
    char pad14[0x54];
    unsigned int width;  /* 0x68 */
    unsigned int height; /* 0x6c */
    unsigned int depth;  /* 0x70 */
};

typedef struct Copy_82B64BB8 {
    Volume_82B64BB8 *source; /* 0x0 */
    Volume_82B64BB8 *dest;   /* 0x4 */
    unsigned char pad8[3];
    unsigned char mode; /* 0xb */
} Copy_82B64BB8;

struct Texel_82B64BB8 {
    float r;
    float g;
    float b;
    float a;

    Texel_82B64BB8()
    {
    }
};

/* Resamples the source volume into the destination with nearest-point sampling (16.16 steps). */
extern "C" int fn_82B64BB8(Copy_82B64BB8 *p)
{
    Texel_82B64BB8 *sourceRow;
    Texel_82B64BB8 *destRow;
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
    sourceRow = new Texel_82B64BB8[p->source->width];
    if (sourceRow == 0) {
        return 0x8007000E;
    }
    destRow = new Texel_82B64BB8[p->dest->width];
    if (destRow == 0) {
        delete[] sourceRow;
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
                destRow[x] = sourceRow[u >> 16];
                u += stepX;
            }
            p->dest->vtbl->set(p->dest, y, z, destRow);
            v += stepY;
        }
        w += stepZ;
    }
    delete[] sourceRow;
    delete[] destRow;
    return 0;
}
