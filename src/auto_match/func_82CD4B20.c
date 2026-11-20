typedef struct Image_82CD4B20 {
    char pad0[0x3890];
    int width; /* 0x3890 */
    char pad3894[0x8];
    int dstStride; /* 0x389c */
    int unused38a0;
    unsigned int dst; /* 0x38a4 */
    char pad38a8[0x54];
    int srcStride; /* 0x38fc */
    char pad3900[0xc];
    int srcOffset; /* 0x390c */
    int srcRow;    /* 0x3910 */
    char pad3914[0xc];
    int lumaStride;    /* 0x3920 */
    int chromaStrideU; /* 0x3924 */
    int chromaStrideV; /* 0x3928 */
} Image_82CD4B20;

void fn_82CD4B20(unsigned char *dst, unsigned char *srcY, unsigned char *srcU, unsigned char *srcV, int first,
                 int last, Image_82CD4B20 *image)
{
    int count = last - first;
    int lumaOffset;
    int chromaOffset;
    int lumaSkip;
    int chromaSkipU;
    int chromaSkipV;
    int rowOffset;
    int chromaBase;
    int i;

    if (image->lumaStride != 0) {
        lumaOffset = image->lumaStride * first;
        chromaOffset = image->chromaStrideU * first;
        lumaSkip = image->lumaStride - image->width;
        chromaSkipU = image->chromaStrideU - image->width / 4;
        chromaSkipV = image->chromaStrideV - image->width / 4;
    } else {
        lumaOffset = image->srcStride * first;
        chromaOffset = lumaOffset >> 2;
        lumaSkip = image->srcStride - image->width;
        chromaSkipU = lumaSkip / 4;
        chromaSkipV = chromaSkipU;
    }
    rowOffset = image->srcRow * image->srcStride;
    chromaBase = image->srcOffset / 4 + rowOffset / 4 + chromaOffset;
    srcY += image->srcOffset + rowOffset + lumaOffset;
    srcU += chromaBase;
    srcV += chromaBase;
    dst += image->dstStride * first + image->dst;
    for (i = 0; i < count; i++) {
        unsigned char *out = dst;
        int x;
        for (x = 0; x < image->width; x += 4) {
            out[0] = srcY[0];
            out[2] = srcY[1];
            out[4] = srcY[2];
            out[6] = srcY[3];
            srcY += 4;
            out[1] = out[5] = *srcU++;
            out[3] = out[7] = *srcV++;
            out += 8;
        }
        srcY += lumaSkip;
        srcU += chromaSkipU;
        srcV += chromaSkipV;
        dst += image->dstStride;
    }
}
