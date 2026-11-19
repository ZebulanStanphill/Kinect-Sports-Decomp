typedef struct Row_82CBB088 {
    unsigned char pixels[8];
} Row_82CBB088;

void fn_82CBB088(const unsigned char *src, int srcStride, unsigned char *dst, int dstStride)
{
    int row;

    for (row = 0; row < 8; row++) {
        *(Row_82CBB088 *)dst = *(const Row_82CBB088 *)src;
        dst += dstStride;
        src += srcStride;
    }
}
