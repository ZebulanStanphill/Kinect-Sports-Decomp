#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) < (b)) ? (a) : (b))

typedef struct Volume_82920FB8 Volume_82920FB8;

typedef struct VolumeVtbl_82920FB8 {
    void *f0;
    void (*get)(Volume_82920FB8 *self, unsigned int x, unsigned int y, void *row); /* 0x4 */
    void (*set)(Volume_82920FB8 *self, unsigned int x, unsigned int y, void *row); /* 0x8 */
} VolumeVtbl_82920FB8;

struct Volume_82920FB8 {
    VolumeVtbl_82920FB8 *vtbl; /* 0x00 */
    char pad04[0xc];
    int f10; /* 0x10 */
    char pad14[0x54];
    unsigned int width;  /* 0x68 */
    unsigned int height; /* 0x6c */
    unsigned int depth;  /* 0x70 */
};

typedef struct Copy_82920FB8 {
    Volume_82920FB8 *source; /* 0x0 */
    Volume_82920FB8 *dest;   /* 0x4 */
    unsigned char pad8[3];
    unsigned char mode; /* 0xb */
} Copy_82920FB8;

extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);
extern void *memset(void *dst, int value, unsigned int size);

static __forceinline void *Alloc(unsigned int n)
{
    return fn_8265C940(n, 0x24810000);
}

int fn_82920FB8(Copy_82920FB8 *p)
{
    unsigned int width;
    unsigned int height;
    unsigned int depth;
    unsigned int x;
    unsigned int y;
    void *row;
    void *blank;

    if (p->mode != 1) {
        return 0x80004005;
    }
    width = max(p->dest->width, p->source->width);
    height = min(p->dest->height, p->source->height);
    depth = min(p->dest->depth, p->source->depth);
    row = Alloc(width << 4);
    if (row == 0) {
        return 0x80004005;
    }
    blank = Alloc(p->dest->width << 4);
    if (blank == 0) {
        fn_8265C990(row, 0x24810000);
        return 0x80004005;
    }
    memset(row, 0, width << 4);
    memset(blank, 0, p->dest->width << 4);
    if (p->dest->f10 != 0 && p->source->f10 != 0) {
        p->dest->f10 = 0;
        p->source->f10 = 0;
    }
    for (y = 0; y < depth; y++) {
        for (x = 0; x < height; x++) {
            p->source->vtbl->get(p->source, x, y, row);
            p->dest->vtbl->set(p->dest, x, y, row);
        }
        for (x = height; x < p->dest->height; x++) {
            p->dest->vtbl->set(p->dest, x, y, blank);
        }
    }
    for (y = depth; y < p->dest->depth; y++) {
        for (x = 0; x < p->dest->height; x++) {
            p->dest->vtbl->set(p->dest, x, y, blank);
        }
    }
    fn_8265C990(row, 0x24810000);
    fn_8265C990(blank, 0x24810000);
    return 0;
}
