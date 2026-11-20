typedef struct Image_82CD50D0 {
    char pad0[0x3890];
    int width; /* 0x3890 */
    char pad3894[0x8];
    int dstStride; /* 0x389c */
    int unused38a0;
    unsigned int dst; /* 0x38a4 */
    char pad38a8[0x24];
    unsigned int srcY; /* 0x38cc */
    unsigned int srcU; /* 0x38d0 */
    unsigned int srcV; /* 0x38d4 */
    char pad38d8[0x24];
    int srcStride; /* 0x38fc */
    char pad3900[0x20];
    int lumaStride;    /* 0x3920 */
    int chromaStrideU; /* 0x3924 */
    int chromaStrideV; /* 0x3928 */
} Image_82CD50D0;

void fn_82CD50D0(unsigned char *dst, unsigned char *srcY, unsigned char *srcU, unsigned char *srcV, int first,
                 int last, Image_82CD50D0 *image)
{
    int count = last - first;
    int lumaOffset;
    int chromaOffset;
    int lumaSkip;
    int chromaSkipU;
    int chromaSkipV;
    int i;

    if (image->lumaStride != 0) {
        lumaOffset = image->lumaStride * first;
        chromaOffset = image->chromaStrideU * first;
        lumaSkip = image->lumaStride - image->width;
        chromaSkipU = image->chromaStrideU - image->width / 2;
        chromaSkipV = image->chromaStrideV - image->width / 2;
    } else {
        lumaOffset = image->srcStride * first;
        chromaOffset = lumaOffset >> 1;
        lumaSkip = image->srcStride - image->width;
        chromaSkipU = lumaSkip / 2;
        chromaSkipV = chromaSkipU;
    }
    srcY += image->srcY + lumaOffset;
    srcU += image->srcU + chromaOffset;
    srcV += image->srcV + chromaOffset;
    dst += image->dstStride * first + image->dst;
    for (i = 0; i < count; i++) {
        unsigned char *out = dst;
        int x;
        for (x = 0; x < image->width; x += 2) {
            out[0] = srcY[0];
            out[2] = srcY[1];
            srcY += 2;
            out[1] = *srcU++;
            out[3] = *srcV++;
            out += 4;
        }
        srcY += lumaSkip;
        srcU += chromaSkipU;
        srcV += chromaSkipV;
        dst += image->dstStride;
    }
}
