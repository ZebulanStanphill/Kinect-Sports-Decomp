typedef struct Slice_82E854B8 {
    unsigned int left;   /* 0x00 */
    unsigned int right;  /* 0x04 */
    unsigned int top;    /* 0x08 */
    unsigned int bottom; /* 0x0c */
    char pad10[0x3b8];
} Slice_82E854B8;

typedef struct Decoder_82E854B8 {
    char pad0[0x550];
    int width; /* 0x550 */
    char pad554[8];
    int height; /* 0x55c */
    char pad560[4];
    int strideX; /* 0x564 */
    int strideY; /* 0x568 */
    char pad56c[0xec];
    unsigned int threadCount; /* 0x658 */
    char pad65c[0x574];
    Slice_82E854B8 slices[4]; /* 0xbd0 */
} Decoder_82E854B8;

void fn_82E854B8(Decoder_82E854B8 *self, int interlaced)
{
    unsigned int width;
    unsigned int height;
    unsigned int sliceWidth;
    unsigned int sliceHeight;

    if (interlaced != 0) {
        width = self->width >> 1;
        self->strideX = self->strideX << 1;
        height = self->height >> 1;
        self->strideY = self->strideY << 1;
    } else {
        width = self->width;
        height = self->height;
        self->strideX = self->strideX >> 1;
        self->strideY = self->strideY >> 1;
    }
    sliceWidth = width / self->threadCount;
    sliceHeight = height / self->threadCount;
    self->slices[0].right = sliceWidth;
    self->slices[0].bottom = sliceHeight;
    if (self->threadCount < 2) {
        return;
    }
    self->slices[1].left = sliceWidth;
    self->slices[1].right = sliceWidth * 2;
    self->slices[1].top = sliceHeight;
    self->slices[1].bottom = sliceHeight * 2;
    if (self->threadCount != 4) {
        return;
    }
    self->slices[2].left = sliceWidth * 2;
    self->slices[2].right = sliceWidth * 3;
    self->slices[2].top = sliceHeight * 2;
    self->slices[2].bottom = sliceHeight * 3;
    self->slices[3].left = sliceWidth * 3;
    self->slices[3].right = width;
    self->slices[3].top = sliceHeight * 3;
    self->slices[3].bottom = height;
}
