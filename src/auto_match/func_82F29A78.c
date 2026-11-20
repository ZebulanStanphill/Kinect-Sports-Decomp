extern short lbl_831B99D8[4][2];

void fn_82F29A78(const unsigned char *src, int srcStride, unsigned char *dst, int dstStride,
                 unsigned int fracX, unsigned int fracY, int unused, int rounding, int height)
{
    const short *coefX = lbl_831B99D8[fracX & 3];
    const short *coefY = lbl_831B99D8[fracY & 3];
    int rows = height + 1;
    int column;
    int row;
    int temp[33];

    for (column = 0; column < 16; column++) {
        for (row = 0; row < rows; row++) {
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
