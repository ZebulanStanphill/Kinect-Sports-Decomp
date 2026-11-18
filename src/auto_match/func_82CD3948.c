void *memcpy(void *, const void *, unsigned int);

typedef struct Image_82CD3948 {
    char pad0[0x3890];
    int width; /* 0x3890 */
    int unused3894;
    int chromaWidth; /* 0x3898 */
    char pad389c[0xc];
    unsigned int dstY; /* 0x38a8 */
    unsigned int dstU; /* 0x38ac */
    unsigned int dstV; /* 0x38b0 */
    char pad38b4[0x18];
    unsigned int srcY; /* 0x38cc */
    unsigned int srcU; /* 0x38d0 */
    unsigned int srcV; /* 0x38d4 */
    char pad38d8[0x24];
    int srcStride; /* 0x38fc */
    int unused3900;
    int dstStride; /* 0x3904 */
    char pad3908[0x2c];
    int srcChroma; /* 0x3934 */
    int dstChroma; /* 0x3938 */
} Image_82CD3948;

void fn_82CD3948(unsigned char *srcY, unsigned char *srcU, unsigned char *srcV, unsigned char *dstY,
                 unsigned char *dstU, unsigned char *dstV, int first, int last, Image_82CD3948 *image)
{
    int count = last - first;
    int srcOffset = image->srcStride * first;
    int dstOffset = image->dstStride * first;
    int i;
    srcY += image->srcY + srcOffset;
    srcU += image->srcU + srcOffset / 4;
    srcV += image->srcV + srcOffset / 4;
    dstY += image->dstY + dstOffset;
    dstU += image->dstU + dstOffset / 4;
    dstV += image->dstV + dstOffset / 4;
    for (i = 0; i < count; i++) {
        memcpy(dstY, srcY, image->width);
        dstY += image->dstStride;
        srcY += image->srcStride;
    }
    for (i = 0; i < count; i += 2) {
        int x;
        for (x = 0; x < image->chromaWidth; x += 2) {
            unsigned char value = srcU[x >> 1];
            dstU[x + 1] = value;
            dstU[x] = value;
            value = srcV[x >> 1];
            dstV[x + 1] = value;
            dstV[x] = value;
        }
        dstU += image->dstChroma;
        dstV += image->dstChroma;
        srcU += image->srcChroma * 2;
        srcV += image->srcChroma * 2;
    }
}
