#include <stdlib.h>

typedef struct Surface_82CD2FA8 {
    int pad0;
    int width;  /* 0x04 */
    int height; /* 0x08 */
    int padc;
    unsigned int format; /* 0x10 */
} Surface_82CD2FA8;

typedef struct Blit_82CD2FA8 {
    Surface_82CD2FA8 *source; /* 0x0000 */
    Surface_82CD2FA8 *dest;   /* 0x0004 */
    char pad8[0x38e4 - 0x8];
    int left;    /* 0x38e4 */
    int top;     /* 0x38e8 */
    int right;   /* 0x38ec */
    int bottom;  /* 0x38f0 */
    int useRect; /* 0x38f4 */
} Blit_82CD2FA8;

static __forceinline int IsPackedYuv(unsigned int format)
{
    return format == 0x32595559 || format == 0x59565955 || format == 0x55595659 || format == 0x56555949 ||
           format == 0x30323449 || format == 0x32323450;
}

static __forceinline int IsPlanar(unsigned int format)
{
    return format == 0x56555949 || format == 0x30323449;
}

int fn_82CD2FA8(Blit_82CD2FA8 *self)
{
    Surface_82CD2FA8 *source = self->source;
    Surface_82CD2FA8 *dest;
    unsigned int sourceFormat;
    unsigned int destFormat;

    if (source->width <= 0) {
        return 6;
    }
    dest = self->dest;
    if (dest->width <= 0) {
        return 6;
    }
    sourceFormat = source->format;
    if ((sourceFormat == 0 || sourceFormat == 3) && (dest->format == 0 || dest->format == 3)) {
        return 0;
    }
    if (self->useRect != 0) {
        if (dest->width != self->right - self->left || abs(dest->height) != self->bottom - self->top) {
            return 6;
        }
    } else {
        if (source->width != dest->width || abs(source->height) != abs(dest->height)) {
            return 6;
        }
    }
    if (sourceFormat == 0x31313450 && source->width % 4 != 0) {
        return 6;
    }
    destFormat = dest->format;
    if (destFormat == 0x31313450 && dest->width % 4 != 0) {
        return 6;
    }
    if (IsPackedYuv(sourceFormat) && (source->width & 1) != 0) {
        return 6;
    }
    if (IsPackedYuv(destFormat) && (dest->width & 1) != 0) {
        return 6;
    }
    if (IsPlanar(sourceFormat) && (source->height & 1) != 0) {
        return 6;
    }
    if (IsPlanar(destFormat) && (dest->height & 1) != 0) {
        return 6;
    }
    return 0;
}
