typedef void (*CopyLuma_82F0F6C0)(unsigned char *dst, unsigned char *src, int width, int stride, int isFirst,
                                  int isLast, int a, int b, int height, int isFrame);
typedef void (*CopyChroma_82F0F6C0)(unsigned char *dstU, unsigned char *dstV, unsigned char *src, int width,
                                    int stride, int isFirst, int isLast, int a, int b, int height,
                                    int isFrame);

typedef struct Slice_82F0F6C0 {
    int pad0;
    int index; /* 0x04 */
    char pad8[0xb0 - 8];
    unsigned char *luma;   /* 0xb0 */
    int lumaWidth;         /* 0xb4 */
    unsigned char *chroma; /* 0xb8 */
    int chromaWidth;       /* 0xbc */
    char padC0[0xc8 - 0xc0];
    int lumaStride;   /* 0xc8 */
    int chromaStride; /* 0xcc */
} Slice_82F0F6C0;

typedef struct Decoder_82F0F6C0 {
    char pad0[0x330];
    int lumaParam;      /* 0x330 */
    int chromaParam;    /* 0x334 */
    int maxLumaWidth;   /* 0x338 */
    int maxChromaWidth; /* 0x33c */
    char pad340[4];
    int hasChroma; /* 0x344 */
    char pad348[0x54c - 0x348];
    int lumaParam2; /* 0x54c */
    char pad550[0x558 - 0x550];
    int chromaParam2; /* 0x558 */
    char pad55C[0x564 - 0x55c];
    int lumaHeight;   /* 0x564 */
    int chromaHeight; /* 0x568 */
    char pad56C[0x658 - 0x56c];
    int sliceCount; /* 0x658 */
    char pad65C[0xa0c - 0x65c];
    int clampWidth; /* 0xa0c */
    char padA10[0x1ffc - 0xa10];
    CopyLuma_82F0F6C0 copyLuma;     /* 0x1ffc */
    CopyChroma_82F0F6C0 copyChroma; /* 0x2000 */
    char pad2004[0x4ed8 - 0x2004];
    unsigned char *dstY; /* 0x4ed8 */
    unsigned char *dstU; /* 0x4edc */
    unsigned char *dstV; /* 0x4ee0 */
    char pad4EE4[0x6d54 - 0x4ee4];
    int interlaced; /* 0x6d54 */
    char pad6D58[0x7b38 - 0x6d58];
    int fieldMode; /* 0x7b38 */
} Decoder_82F0F6C0;

void fn_82F0F6C0(Decoder_82F0F6C0 *dec, Slice_82F0F6C0 *slice)
{
    int lumaWidth = slice->lumaWidth;
    int chromaWidth = slice->chromaWidth;

    if (dec->clampWidth != 0) {
        if (dec->interlaced != 0 && dec->fieldMode == 0) {
            if (lumaWidth * 2 > dec->maxLumaWidth) {
                lumaWidth = dec->maxLumaWidth >> 1;
                chromaWidth = dec->maxChromaWidth >> 1;
            }
        } else {
            if (lumaWidth > dec->maxLumaWidth) {
                lumaWidth = dec->maxLumaWidth;
                chromaWidth = dec->maxChromaWidth;
            }
        }
    }
    dec->copyLuma(dec->dstY, slice->luma, lumaWidth, slice->lumaStride, slice->index == 0,
                  dec->sliceCount == slice->index + 1, dec->lumaParam, dec->lumaParam2, dec->lumaHeight,
                  dec->interlaced == 0);
    if (dec->hasChroma != 0) {
        dec->copyChroma(dec->dstU, dec->dstV, slice->chroma, chromaWidth, slice->chromaStride,
                        slice->index == 0, dec->sliceCount == slice->index + 1, dec->chromaParam,
                        dec->chromaParam2, dec->chromaHeight, dec->interlaced == 0);
    }
    if (dec->interlaced != 0 && dec->fieldMode == 0) {
        dec->copyLuma(dec->dstY + (dec->lumaHeight >> 1), slice->luma, lumaWidth, slice->lumaStride,
                      slice->index == 0, dec->sliceCount == slice->index + 1, dec->lumaParam, dec->lumaParam2,
                      dec->lumaHeight, 0);
        if (dec->hasChroma != 0) {
            dec->copyChroma(dec->dstU + (dec->chromaHeight >> 1), dec->dstV + (dec->chromaHeight >> 1),
                            slice->chroma, chromaWidth, slice->chromaStride, slice->index == 0,
                            dec->sliceCount == slice->index + 1, dec->chromaParam, dec->chromaParam2,
                            dec->chromaHeight, dec->interlaced == 0);
        }
    }
}
