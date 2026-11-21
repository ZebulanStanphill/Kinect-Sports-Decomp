extern const short lbl_82111130[88][2];

void fn_82CDB1B8(void *context, const unsigned char *src, int srcStride, unsigned char *dst, int dstStride,
                 unsigned int fracX, unsigned int fracY, int unused, int rounding, int height)
{
    const short *coefX = lbl_82111130[fracX & 3];
    const short *coefY = lbl_82111130[fracY & 3];
    int column;
    int row;
    int temp[33];

    if ((unsigned int)(height + 1) > 33) {
        return;
    }
    for (column = 0; column < 8; column++) {
        for (row = 0; row < height + 1; row++) {
            temp[row] = src[row * srcStride + 1] * coefX[1] + src[row * srcStride] * coefX[0];
        }
        for (row = 0; row < height; row++) {
            int value = (coefY[1] * temp[row + 1] + coefY[0] * temp[row] - rounding + 8) >> 4;
            if (value < 0) {
                value = 0;
            } else if (value > 0xff) {
                value = 0xff;
            }
            dst[row * dstStride] = (unsigned char)value;
        }
        src++;
        dst++;
    }
}
