typedef struct Codec_82C939D8 Codec_82C939D8;

typedef void (*BlockFn_82C939D8)(Codec_82C939D8 *codec, unsigned char *src, int srcStride, unsigned char *dst,
                                 int dstStride, int fracX, int fracY, int filter, int rounding, int size);
typedef void (*Block8Fn_82C939D8)(unsigned char *src, int srcStride, unsigned char *dst, int dstStride,
                                  int fracX, int fracY, int rounding);

struct Codec_82C939D8 {
    char pad0[0x1cc];
    int filter; /* 0x1cc */
    char pad1d0[0xc60 - 0x1d0];
    BlockFn_82C939D8 interpolate16; /* 0xc60 */
    char padc64[0x8];
    Block8Fn_82C939D8 interpolate8; /* 0xc6c */
    char padc70[0xf78 - 0xc70];
    int rounding; /* 0xf78 */
};

extern void *memcpy(void *dst, const void *src, unsigned int size);

/* Motion compensation of a 16x16 block with a quarter-pel motion vector (mvX, mvY). */
void fn_82C939D8(Codec_82C939D8 *codec, unsigned char *src, int srcStride, unsigned char *dst, int dstStride,
                 int mvX, int mvY, int mode)
{
    unsigned char *out = dst;
    int fracX;
    int fracY;
    int row;

    src += (mvY >> 2) * srcStride + (mvX >> 2);
    fracX = mvX & 3;
    fracY = mvY & 3;
    if (fracX == 0 && fracY == 0) {
        for (row = 16; row != 0; row--) {
            memcpy(out, src, 16);
            out += dstStride;
            src += srcStride;
        }
    } else if (mode == 1) {
        codec->interpolate16(codec, src, srcStride, out, dstStride, fracX, fracY, codec->filter,
                             codec->rounding, 16);
    } else {
        codec->interpolate8(src, srcStride, out, dstStride, fracX, fracY, codec->rounding);
        codec->interpolate8(src + 8, srcStride, out + 8, dstStride, fracX, fracY, codec->rounding);
        out += dstStride * 8;
        src += srcStride * 8;
        codec->interpolate8(src, srcStride, out, dstStride, fracX, fracY, codec->rounding);
        codec->interpolate8(src + 8, srcStride, out + 8, dstStride, fracX, fracY, codec->rounding);
    }
}
