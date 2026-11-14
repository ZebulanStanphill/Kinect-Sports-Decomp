typedef struct Converter_82CA3F80 Converter_82CA3F80;

typedef void (*CopyPlanes_82CA3F80)(Converter_82CA3F80 *self, unsigned char *dstY, unsigned char *dstU,
                                    unsigned char *dstV, const unsigned char *srcY,
                                    const unsigned char *srcU, const unsigned char *srcV, int srcPitchY,
                                    int srcPitchUV, int dstPitchY, int dstPitchUV);

struct Converter_82CA3F80 {
    char pad0[0x98];
    int custom;                     /* 0x98 */
    char pad9c[0x3e4c - 0x9c];
    CopyPlanes_82CA3F80 copyPlanes; /* 0x3e4c */
};

extern void *memcpy(void *dst, const void *src, unsigned int size);

/* copies a YUV 4:2:0 frame plane by plane, two luma rows per chroma row,
   unless a custom copy routine is installed */
void fn_82CA3F80(Converter_82CA3F80 *self, unsigned char *dstY, unsigned char *dstU, unsigned char *dstV,
                 const unsigned char *srcY, const unsigned char *srcU, const unsigned char *srcV,
                 int srcPitchY, int srcPitchUV, int dstPitchY, int dstPitchUV, int width, int height)
{
    int lumaWidth = width & ~1;
    int chromaWidth = lumaWidth >> 1;
    int rows = height >> 1;
    int y;

    if (self->custom != 0) {
        self->copyPlanes(self, dstY, dstU, dstV, srcY, srcU, srcV, srcPitchY, srcPitchUV, dstPitchY,
                         dstPitchUV);
        return;
    }
    for (y = 0; y < rows; y++) {
        memcpy(dstY, srcY, lumaWidth);
        srcY += srcPitchY;
        dstY += dstPitchY;
        memcpy(dstY, srcY, lumaWidth);
        srcY += srcPitchY;
        dstY += dstPitchY;
        memcpy(dstU, srcU, chromaWidth);
        srcU += srcPitchUV;
        dstU += dstPitchUV;
        memcpy(dstV, srcV, chromaWidth);
        srcV += srcPitchUV;
        dstV += dstPitchUV;
    }
}
