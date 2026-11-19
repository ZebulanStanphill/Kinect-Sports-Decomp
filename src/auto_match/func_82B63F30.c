typedef struct Surface_82B63F30 {
    int reserved00;
    unsigned int format; /* 0x04 */
    char reserved08[0x18];
    unsigned int base; /* 0x20 */
    char reserved24[0x18];
    unsigned int left;   /* 0x3c */
    unsigned int top;    /* 0x40 */
    unsigned int width;  /* 0x44 */
    unsigned int height; /* 0x48 */
    int front;           /* 0x4c */
    char reserved50[0x10];
    unsigned int rowPitch;   /* 0x60 */
    unsigned int slicePitch; /* 0x64 */
    unsigned int copyWidth;  /* 0x68 */
    unsigned int copyHeight; /* 0x6c */
    unsigned int copyDepth;  /* 0x70 */
} Surface_82B63F30;

typedef struct Copy_82B63F30 {
    Surface_82B63F30 *source; /* 0x00 */
    Surface_82B63F30 *dest;   /* 0x04 */
} Copy_82B63F30;

extern void *memcpy(void *dst, const void *src, unsigned int size);

int fn_82B63F30(Copy_82B63F30 *copy)
{
    Surface_82B63F30 *source = copy->source;
    int blockSize;
    unsigned int destRow;
    unsigned int sourceRow;
    unsigned int destSlice;
    unsigned int sourceSlice;
    unsigned int slice;
    unsigned int row;
    unsigned int rowSize;

    if (((source->height | source->width | source->left | source->top) & 3) != 0) {
        return 0x80004005;
    }
    if (((copy->dest->height | copy->dest->width | copy->dest->top | copy->dest->left) & 3) != 0) {
        return 0x80004005;
    }
    switch (copy->dest->format & ~0x100) {
    case 0x1a200052:
        blockSize = 8;
        break;
    case 0x1a200053:
        blockSize = 16;
        break;
    case 0x1a200054:
        blockSize = 16;
        break;
    case 0x1a20007a:
        blockSize = 8;
        break;
    case 0x1a20007b:
        blockSize = 8;
        break;
    default:
        return 0x80004005;
    }
    rowSize = (copy->dest->copyWidth >> 2) * blockSize;
    destSlice = (copy->dest->top >> 2) * copy->dest->rowPitch + copy->dest->slicePitch * copy->dest->front +
                (copy->dest->left >> 2) * blockSize + copy->dest->base;
    sourceSlice = (source->top >> 2) * source->rowPitch + source->slicePitch * source->front +
                  (source->left >> 2) * blockSize + source->base;
    for (slice = 0; slice < copy->dest->copyDepth; slice++) {
        destRow = destSlice;
        sourceRow = sourceSlice;
        for (row = 0; row < copy->dest->copyHeight; row += 4) {
            memcpy((void *)destRow, (void *)sourceRow, rowSize);
            destRow += copy->dest->rowPitch;
            sourceRow += copy->source->rowPitch;
        }
        destSlice += copy->dest->slicePitch;
        sourceSlice += copy->source->slicePitch;
    }
    return 0;
}
