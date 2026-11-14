typedef struct Surface_82CA48A8 {
    char pad[0x5690];
    int pitchY;
    int pitchU;
    int pitchV;
} Surface_82CA48A8;

extern void *memcpy(void *dst, const void *src, unsigned int size);

void fn_82CA48A8(Surface_82CA48A8 *self, unsigned char *dstY, unsigned char *dstU, unsigned char *dstV,
                 const unsigned char *srcY, const unsigned char *srcU, const unsigned char *srcV,
                 int srcPitchY, int srcPitchUV, int unused10, int unused11, int width, int height)
{
    int lumaWidth = width & ~1;
    int chromaWidth = lumaWidth >> 1;
    int y;

    for (y = 0; y < height >> 1; y++) {
        memcpy(dstY, srcY, lumaWidth);
        srcY += srcPitchY;
        dstY += self->pitchY;
        memcpy(dstY, srcY, lumaWidth);
        srcY += srcPitchY;
        dstY += self->pitchY;
        memcpy(dstU, srcU, chromaWidth);
        srcU += srcPitchUV;
        dstU += self->pitchU;
        memcpy(dstV, srcV, chromaWidth);
        srcV += srcPitchUV;
        dstV += self->pitchV;
    }
}
