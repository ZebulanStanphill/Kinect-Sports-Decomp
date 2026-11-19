typedef struct Row_82C81D98 {
    unsigned char pixels[8];
} Row_82C81D98;

void fn_82C81D98(unsigned char *dst, const unsigned char *src, int srcStride, int dstStride)
{
    int row;

    for (row = 0; row < 8; row++) {
        *(Row_82C81D98 *)dst = *(const Row_82C81D98 *)src;
        src += srcStride;
        dst += dstStride;
    }
}
