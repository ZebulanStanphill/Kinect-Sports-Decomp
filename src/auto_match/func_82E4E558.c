void *memcpy(void *, const void *, unsigned int);

typedef struct Image_82E4E558 {
    char pad[0x388c];
    int dstStride;
    int pad3890;
    int dstChroma;
    char gap[0x18];
    int srcStride;
    int pad38b4;
    int srcChroma;
} Image_82E4E558;

void fn_82E4E558(char *srcY, char *srcU, char *srcV, char *dstY, char *dstU, char *dstV, int first, int last,
                 Image_82E4E558 *image)
{
    int dstOffset = first * image->dstStride;
    int srcOffset = image->srcStride * first;
    int dstQuarter = dstOffset / 4;
    int srcQuarter = srcOffset / 4;
    srcY += (image->srcStride * first);
    srcU += srcQuarter;
    srcV += srcQuarter;
    dstY += dstOffset;
    dstU += dstQuarter;
    dstV += dstQuarter;
    first /= 2;
    last /= 2;
    if (first < last) {
        int count = last - first;
        do {
            memcpy(dstY, srcY, image->dstStride);
            dstY += image->dstStride;
            srcY += image->srcStride;
            memcpy(dstY, srcY, image->dstStride);
            srcY += image->srcStride;
            dstY += image->dstStride;
            memcpy(dstU, srcU, image->dstChroma);
            memcpy(dstV, srcV, image->dstChroma);
            srcU += image->srcChroma;
            srcV += image->srcChroma;
            dstU += image->dstChroma;
            dstV += image->dstChroma;
        } while (--count != 0);
    }
}
