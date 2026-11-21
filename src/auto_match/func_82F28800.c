void fn_82F28800(short *coefficients, unsigned char *dst, int stride)
{
    int row;
    int column;

    for (row = 0; row < 8; row++) {
        for (column = 0; column < 8; column++) {
            short sum = coefficients[column] + dst[column];
            int value;

            if ((unsigned short)sum > 255)
                value = (sum < 0) ? 0 : 255;
            else
                value = sum;
            dst[column] = (unsigned char)value;
        }
        coefficients += 8;
        dst += stride;
    }
}
