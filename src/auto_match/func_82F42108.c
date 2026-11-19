typedef void (*CopyRows_82F42108)(unsigned char *dst, int dstPitch, int dstStride, const unsigned char *src,
                                  int srcStride, int rows);

typedef struct Decoder_82F42108 {
    char pad0[0x14];
    unsigned char *lumaOut; /* 0x14 */
    char pad18[0x2b8];
    int widthInWords;     /* 0x2d0 */
    unsigned int lastRow; /* 0x2d4 */
    char pad2d8[0x44];
    int chromaPitch; /* 0x31c */
    int chromaRows;  /* 0x320 */
    char pad324[0x240];
    int lumaPitch; /* 0x564 */
    char pad568[0x588];
    int outputMode; /* 0xaf0 */
    char padaf4[0xf9c];
    unsigned char *chromaIn; /* 0x1a90 */
    unsigned char *lumaIn;   /* 0x1a94 */
    unsigned char *alphaIn;  /* 0x1a98 */
    char pad1a9c[0x20];
    unsigned char *chromaOut; /* 0x1abc */
    char pad1ac0[0xec];
    CopyRows_82F42108 copyRows; /* 0x1bac */
    char pad1bb0[0x2cc];
    unsigned char *alphaOut; /* 0x1e7c */
} Decoder_82F42108;

void fn_82F42108(Decoder_82F42108 *self, int row, int endRow)
{
    int chromaStride = self->widthInWords * 4;
    int lumaStride = chromaStride + 16;
    int lumaHeight = (endRow - row) * 16;
    int chromaHeight;
    unsigned char *lumaOut = self->lumaOut + self->lumaPitch * row * 16;
    unsigned char *lumaIn = self->lumaIn + lumaStride * row * 4;
    unsigned char *alphaOut = self->alphaOut + self->lumaPitch * row * 16;
    unsigned char *alphaIn = self->alphaIn + lumaStride * row * 4;

    chromaHeight = lumaHeight;
    if (row == 0) {
        lumaHeight += 32;
    } else {
        lumaIn += lumaStride * 8;
        lumaOut += self->lumaPitch * 32;
        alphaOut += self->lumaPitch * 32;
        alphaIn += lumaStride * 8;
    }
    if (endRow == self->lastRow) {
        lumaHeight += 32;
        chromaHeight += self->chromaRows - endRow * 16;
    }
    lumaHeight >>= 1;
    chromaHeight = (chromaHeight >> 1) & ~1;
    self->copyRows(lumaOut, self->lumaPitch, self->lumaPitch * 2, lumaIn, lumaStride * 2, lumaHeight);
    self->copyRows(self->chromaOut + self->chromaPitch * row * 16, self->chromaPitch, self->chromaPitch * 2,
                   self->chromaIn + chromaStride * row * 4, chromaStride * 2, chromaHeight);
    if (self->outputMode == 2) {
        self->copyRows(alphaOut, self->lumaPitch, self->lumaPitch * 2, alphaIn, lumaStride * 2, lumaHeight);
    }
    alphaOut += self->lumaPitch;
    self->copyRows(lumaOut + self->lumaPitch, self->lumaPitch, self->lumaPitch * 2, lumaIn + lumaStride,
                   lumaStride * 2, lumaHeight);
    self->copyRows(self->chromaOut + self->chromaPitch * (row * 16 + 1), self->chromaPitch,
                   self->chromaPitch * 2, self->chromaIn + chromaStride * (row * 4 + 1), chromaStride * 2,
                   chromaHeight);
    if (self->outputMode == 2) {
        self->copyRows(alphaOut, self->lumaPitch, self->lumaPitch * 2, alphaIn + lumaStride, lumaStride * 2,
                       lumaHeight);
    }
}
