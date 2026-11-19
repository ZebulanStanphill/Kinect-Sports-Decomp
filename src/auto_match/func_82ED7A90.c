typedef struct Row_82ED7A90 {
    unsigned char pixels[8];
} Row_82ED7A90;

void fn_82ED7A90(void *self, unsigned char *dst, const unsigned char *src, int dstStride, int srcStride)
{
    int row;

    for (row = 0; row < 8; row++) {
        *(Row_82ED7A90 *)dst = *(const Row_82ED7A90 *)src;
        dst += dstStride;
        src += srcStride;
    }
}
