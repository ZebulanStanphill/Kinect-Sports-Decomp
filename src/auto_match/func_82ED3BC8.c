#include <string.h>

typedef struct Device_82ED3BC8 {
    char pad0[0x7b34];
    int level; /* 0x7b34 */
} Device_82ED3BC8;

typedef struct Frame_82ED3BC8 {
    char pad0[0xc];
    unsigned int width;  /* 0xc */
    unsigned int height; /* 0x10 */
    char pad14[0x38 - 0x14];
    Device_82ED3BC8 *device; /* 0x38 */
} Frame_82ED3BC8;

/* Shifts a plane down and right by pad pixels, repeating the left column and the top row. */
static __forceinline void ShiftPlane(unsigned char *plane, unsigned int width, int pad, int rows,
                                     unsigned int lastOffset, unsigned int srcOffset)
{
    unsigned char *dst = plane + lastOffset;
    unsigned char *src = plane + srcOffset;
    unsigned char *top;
    int i;

    for (i = 0; i < rows; i++) {
        memcpy(dst, src, width - pad);
        memset(dst - pad, *dst, pad);
        dst -= width;
        src -= width;
    }
    top = plane;
    src = plane + pad * width;
    for (i = 0; i < pad; i++) {
        memcpy(top, src, width);
        top += width;
    }
}

void fn_82ED3BC8(Frame_82ED3BC8 *frame, unsigned char *y, unsigned char *u, unsigned char *v)
{
    unsigned int width;
    unsigned int height;
    unsigned int halfWidth;
    unsigned int halfHeight;
    int pad;
    int halfPad;
    int rows;
    unsigned int lastOffset;
    unsigned int srcOffset;

    if (y == 0 || u == 0 || v == 0)
        return;
    width = frame->width;
    pad = 2;
    height = frame->height;
    halfWidth = width >> 1;
    halfHeight = height >> 1;
    if (frame->device != 0 && frame->device->level >= 4)
        pad = 4;
    rows = height - pad;
    ShiftPlane(y, width, pad, rows, (height - 1) * width + pad, (rows - 1) * width);
    halfPad = pad >> 1;
    rows = halfHeight - halfPad;
    lastOffset = (halfHeight - 1) * halfWidth + halfPad;
    srcOffset = (rows - 1) * halfWidth;
    ShiftPlane(u, halfWidth, halfPad, rows, lastOffset, srcOffset);
    ShiftPlane(v, halfWidth, halfPad, rows, lastOffset, srcOffset);
}
