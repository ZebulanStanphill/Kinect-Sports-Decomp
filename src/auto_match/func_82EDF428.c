void *memcpy(void *, const void *, unsigned int);

typedef struct Image_82EDF428 {
    char pad0[0x388c];
    int width; /* 0x388c */
    int unused3890;
    int chromaWidth; /* 0x3894 */
    char pad3898[0xc];
    unsigned int dstY; /* 0x38a4 */
    unsigned int dstU;
    unsigned int dstV;
    char pad38b0[0x18];
    unsigned int srcY; /* 0x38c8 */
    unsigned int srcU;
    unsigned int srcV;
    char pad38d4[0x48];
    int srcStride; /* 0x391c */
    int unused3920;
    int dstStride; /* 0x3924 */
    char pad3928[0x2c];
    int srcChroma; /* 0x3954 */
    int dstChroma;
} Image_82EDF428;

void fn_82EDF428(char *srcY, char *srcU, char *srcV, char *dstY, char *dstU, char *dstV, int first, int last,
                 Image_82EDF428 *image)
{
    int count = last - first;
    int srcOffset = image->srcStride * first;
    int dstOffset = image->dstStride * first;
    int srcQuarter = srcOffset / 4;
    int dstQuarter = (image->dstStride * first) / 4;
    int i;
    srcY += image->srcY + srcOffset;
    srcU += image->srcU + srcQuarter;
    srcV += image->srcV + srcQuarter;
    dstY += image->dstY + dstOffset;
    dstU += image->dstU + dstQuarter;
    dstV += image->dstV + dstQuarter;
    for (i = 0; i < count; i++) {
        memcpy(dstY, srcY, image->width);
        dstY += image->dstStride;
        srcY += image->srcStride;
    }
    for (i = 0; i < count; i += 2) {
        memcpy(dstU, srcU, image->chromaWidth);
        dstU += image->dstChroma;
        srcU += image->srcChroma;
    }
    for (i = 0; i < count; i += 2) {
        memcpy(dstV, srcV, image->chromaWidth);
        dstV += image->dstChroma;
        srcV += image->srcChroma;
    }
}
