/* Halves a 32-bit image in both directions, averaging each 2x2 block (rounded). */
int fn_82920870(unsigned int *dst, unsigned char *src, unsigned int width, unsigned int height,
                unsigned int pitch, int dstPitch)
{
    unsigned char *end = src + height * pitch;

    if (src < end) {
        do {
            unsigned char *rowEnd = src + width * 4;
            unsigned int *out = dst;
            unsigned char *p;

            for (p = src; p < rowEnd; p += 8) {
                unsigned char *next = p + 4;
                unsigned int topRight = *(unsigned int *)next;
                unsigned int bottomRight = *(unsigned int *)(next + pitch);
                unsigned int bottomLeft = *(unsigned int *)(p + pitch);
                unsigned int topLeft = *(unsigned int *)p;
                unsigned int low;
                unsigned int high;

                /* red and blue sums, rounded */
                low = (topLeft & 0xff00ff) + (bottomLeft & 0xff00ff) + (bottomRight & 0xff00ff) +
                      (topRight & 0xff00ff) + 0x20002;
                /* green and alpha sums, already divided by four */
                high = ((topLeft >> 2) & 0x3fc03fc0) + ((bottomLeft >> 2) & 0x3fc03fc0) +
                       ((bottomRight >> 2) & 0x3fc03fc0) + ((topRight >> 2) & 0x3fc03fc0) + 0x800080;
                *out++ = ((low >> 2) & 0xff00ff) | (high & 0xff00ff00);
            }
            dst = (unsigned int *)((unsigned char *)dst + dstPitch);
            src += pitch * 2;
        } while (src < end);
    }
    return 0;
}
