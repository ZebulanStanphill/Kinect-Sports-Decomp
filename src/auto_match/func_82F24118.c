typedef struct Decoder_82F24118 {
    char pad000[0x564];
    int lumaStride;
    int chromaStride;
    char pad56c[0x588 - 0x56c];
    void *table;
} Decoder_82F24118;

extern void fn_82F20F70(Decoder_82F24118 *d, unsigned char *dst, unsigned int code, int stride, void *table);

void fn_82F24118(Decoder_82F24118 *d, unsigned char *y, unsigned char *u, unsigned char *v, int rows, int width,
                 const unsigned char *codesY, const unsigned char *codesU, const unsigned char *codesV)
{
    int i;
    int j;
    unsigned char *dst;
    unsigned int code;
    const unsigned char *src;

    y -= 5;
    u -= 5;
    v -= 5;
    src = codesY;
    for (i = 0; i < rows; i++) {
        dst = y + i * 8;
        for (j = 0; j < (width + 31) >> 5; j++) {
            code = *src++;
            fn_82F20F70(d, dst, code >> 4, d->lumaStride, d->table);
            fn_82F20F70(d, dst + d->lumaStride * 16, code & 0xf, d->lumaStride, d->table);
            dst += d->lumaStride * 32;
        }
    }
    rows >>= 1;
    src = codesU;
    for (i = 0; i < rows; i++) {
        dst = u + i * 8;
        for (j = 0; j < ((width >> 1) + 31) >> 5; j++) {
            code = *src++;
            fn_82F20F70(d, dst, code >> 4, d->chromaStride, d->table);
            fn_82F20F70(d, dst + d->chromaStride * 16, code & 0xf, d->chromaStride, d->table);
            dst += d->chromaStride * 32;
        }
    }
    src = codesV;
    for (i = 0; i < rows; i++) {
        dst = v + i * 8;
        for (j = 0; j < ((width >> 1) + 31) >> 5; j++) {
            code = *src++;
            fn_82F20F70(d, dst, code >> 4, d->chromaStride, d->table);
            fn_82F20F70(d, dst + d->chromaStride * 16, code & 0xf, d->chromaStride, d->table);
            dst += d->chromaStride * 32;
        }
    }
}
