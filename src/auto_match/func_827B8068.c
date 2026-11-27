typedef struct ScratchInfo_827B8068 {
    unsigned int size; /* 0x00 */
    void *heap;        /* 0x04 */
    int unk08;         /* 0x08 */
    int unk0C;         /* 0x0c */
    int unk10;         /* 0x10 */
} ScratchInfo_827B8068;

typedef struct Cache_827B8068 {
    unsigned int width;               /* 0x000: a power of two, at least 64 */
    unsigned int height;              /* 0x004 */
    unsigned int maxCount;            /* 0x008: at most 32 */
    unsigned int unk00C;              /* 0x00c */
    unsigned int unk010;              /* 0x010 */
    float scaleU;                     /* 0x014: 1 / width */
    float scaleV;                     /* 0x018: 1 / height */
    char pad01C[0x29c];               /* 0x01c */
    void *scratch;                    /* 0x2b8 */
    ScratchInfo_827B8068 scratchInfo; /* 0x2bc */
    char pad2D0[0x440];               /* 0x2d0 */
    char queue[4];                    /* 0x710 */
} Cache_827B8068;

extern void fn_827B8018(Cache_827B8068 *self);
extern void *fn_8267BED0(void *owner, unsigned int size, int *statId);
extern void *fn_826809F0(void *memory, int kind, unsigned int size, void *heap);
extern void fn_8267C498(void *object);
extern void fn_827B6F18(void *queue, int first, unsigned int count, unsigned int width, unsigned int height,
                        unsigned int arg);

void fn_827B8068(Cache_827B8068 *self, unsigned int width, unsigned int height, unsigned int maxCount,
                 unsigned int arg7, unsigned int arg8, unsigned int scratchSize, void *heap)
{
    ScratchInfo_827B8068 info;
    unsigned int w;
    unsigned int h;
    unsigned int widthBits;
    unsigned int heightBits;
    int statId;
    void *memory;
    void *scratch;

    fn_827B8018(self);
    w = width < 0x40 ? 0x3f : width - 1;
    h = height < 0x40 ? 0x3f : height - 1;
    widthBits = 0;
    heightBits = 0;
    while (w != 0) {
        w >>= 1;
        widthBits++;
    }
    while (h != 0) {
        h >>= 1;
        heightBits++;
    }
    if (maxCount > 0x20) {
        maxCount = 0x20;
    }
    self->maxCount = maxCount;
    self->unk00C = arg7;
    self->unk010 = arg8;
    self->height = 1 << heightBits;
    self->width = 1 << widthBits;
    self->scaleU = 1.0f / (float)self->width;
    self->scaleV = 1.0f / (float)self->height;
    statId = 3;
    memory = fn_8267BED0(self, 0x30, &statId);
    scratch = memory != 0 ? fn_826809F0(memory, 9, (scratchSize + 3) & ~3, heap) : 0;
    if (self->scratch != 0) {
        fn_8267C498(self->scratch);
    }
    self->scratch = scratch;
    info.size = scratchSize;
    info.heap = heap;
    info.unk08 = 0;
    info.unk0C = 0;
    info.unk10 = 0;
    self->scratchInfo = info;
    fn_827B6F18(self->queue, 0, maxCount, width, height, arg7);
}
