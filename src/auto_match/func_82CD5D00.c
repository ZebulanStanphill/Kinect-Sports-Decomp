/* Scales an 8-bit image with 16.16 fixed-point steps, packing four source bytes per output word,
 * first byte highest, walking the output words backwards. */
void fn_82CD5D00(unsigned char *dst, const unsigned char *src, int srcPitch, int dstPitch, int width,
                 int height, int xStep, int yStep, int shift)
{
    int xEnd = (width << 16) + xStep / 16 - 0x8000;
    int yEnd = (height << 16) + yStep / 16 - 0x8000;
    int y;

    for (y = 0x8000; y < yEnd; y += yStep) {
        const unsigned char *row = src + (y >> shift) * srcPitch;
        unsigned int *out = (unsigned int *)dst;
        int x;

        for (x = 0x8000; x < xEnd;) {
            unsigned int word;

            word = row[x >> shift] << 24;
            x += xStep;
            word |= row[x >> shift] << 16;
            x += xStep;
            word |= row[x >> shift] << 8;
            x += xStep;
            word |= row[x >> shift];
            x += xStep;
            *out-- = word;
        }
        dst += dstPitch;
    }
}
