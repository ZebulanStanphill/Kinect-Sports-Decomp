typedef struct Block_82F0AB90 {
    short values[64];
} Block_82F0AB90;

extern void _blkmov(void *dst, const void *src, unsigned int size);
extern void fn_82F09EE0(short *block, int count, short *coefficients, int flags);

void fn_82F0AB90(const unsigned char *src, int stride, Block_82F0AB90 *out)
{
    short block[64];
    short coefficients[256];
    int row;
    int col;

    for (row = 0; row < 8; row++) {
        for (col = 0; col < 8; col++) {
            block[row * 8 + col] = src[col];
        }
        src += stride;
    }
    fn_82F09EE0(block, 8, coefficients, 0);
    _blkmov(out, coefficients, 0x80);
}
