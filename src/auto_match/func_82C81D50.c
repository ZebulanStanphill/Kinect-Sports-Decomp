void *memcpy(void *d, const void *s, unsigned int n);

void fn_82C81D50(unsigned char *dst, unsigned char *src, int srcStride, int dstStride)
{
    int i = 16;
    do {
        memcpy(dst, src, 16);
        src += srcStride;
        dst += dstStride;
    } while (--i != 0);
}
