typedef struct Decoder_82F0F4E8 {
    char pad0[0x2d0];
    int rows; /* 0x2d0 */
    char pad2d4[0x290];
    int lumaStride;   /* 0x564 */
    int chromaStride; /* 0x568 */
    char pad56c[0x4528];
    unsigned char *planeY; /* 0x4a94 */
    unsigned char *planeU; /* 0x4a98 */
    unsigned char *planeV; /* 0x4a9c */
    char pad4aa0[0x2344];
    int pad; /* 0x6de4 */
} Decoder_82F0F4E8;

typedef struct Slice_82F0F4E8 {
    char pad0[0xec];
    const unsigned char *codesY; /* 0xec */
    int padf0;
    const unsigned char *codesU; /* 0xf4 */
    int padf8;
    const unsigned char *codesV; /* 0xfc */
    char pad100[8];
    unsigned int first; /* 0x108 */
    int last;           /* 0x10c */
} Slice_82F0F4E8;

extern void fn_82F24118(Decoder_82F0F4E8 *d, unsigned char *y, unsigned char *u, unsigned char *v, int rows,
                        int width, const unsigned char *codesY, const unsigned char *codesU,
                        const unsigned char *codesV);

void fn_82F0F4E8(Decoder_82F0F4E8 *d, Slice_82F0F4E8 *slice)
{
    fn_82F24118(d, d->planeY + ((d->lumaStride >> 1) * d->pad + d->lumaStride * slice->first * 16) + 4,
                d->planeU + ((d->chromaStride >> 1) * d->pad + d->chromaStride * slice->first * 8) + 4,
                d->planeV + ((d->chromaStride >> 1) * d->pad + d->chromaStride * slice->first * 8) + 4,
                d->rows * 2, (slice->last - slice->first) * 16, slice->codesY, slice->codesU, slice->codesV);
}
