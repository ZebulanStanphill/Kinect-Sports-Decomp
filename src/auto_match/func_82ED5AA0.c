typedef unsigned int size_t;
void *memcpy(void *dst, const void *src, size_t size);

static __forceinline void CopyPlane(unsigned char *dst, const unsigned char *src, unsigned int width,
                                    int stride, int height)
{
    int row;
    for (row = 0; row < height; row++) {
        memcpy(dst, src, width);
        src += stride;
        dst += width;
    }
}

static __forceinline void MirrorPlane(unsigned char *dst, const unsigned char *src, unsigned int width,
                                      int stride, int height)
{
    unsigned char *last = dst + width - 1;
    int row;
    for (row = 0; row < height; row++) {
        const unsigned char *in = src;
        unsigned char *out = last;
        unsigned int count;
        for (count = width; count != 0; count--) {
            *out-- = *in++;
        }
        src += stride;
        last += width;
    }
}

/* Copies the three planes of a YUV image row by row, mirrored horizontally when asked. */
void fn_82ED5AA0(void *context, unsigned char *dstY, unsigned char *dstU, unsigned char *dstV,
                 const unsigned char *srcY, const unsigned char *srcU, const unsigned char *srcV,
                 unsigned int widthY, int unused9, unsigned int widthUV, int unused11, int strideY,
                 int heightY, int strideUV, int heightUV, int mirror)
{
    if (mirror == 0) {
        CopyPlane(dstY, srcY, widthY, strideY, heightY);
        CopyPlane(dstU, srcU, widthUV, strideUV, heightUV);
        CopyPlane(dstV, srcV, widthUV, strideUV, heightUV);
    } else {
        MirrorPlane(dstY, srcY, widthY, strideY, heightY);
        MirrorPlane(dstU, srcU, widthUV, strideUV, heightUV);
        MirrorPlane(dstV, srcV, widthUV, strideUV, heightUV);
    }
}
