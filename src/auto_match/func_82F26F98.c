typedef struct Row_82F26F98 {
    unsigned char pixels[8];
} Row_82F26F98;

typedef void (*Interpolate_82F26F98)(const unsigned char *src, int srcStride, unsigned char *dst,
                                     int dstStride, int fracX, int fracY, int rounding);

typedef struct Decoder_82F26F98 {
    char reserved000[0x618];
    int rounding; /* 0x618 */
    char reserved61C[0x440];
    Interpolate_82F26F98 interpolateA; /* 0xa5c */
    Interpolate_82F26F98 interpolateB; /* 0xa60 */
} Decoder_82F26F98;

void fn_82F26F98(Decoder_82F26F98 *self, const unsigned char *ref, int refStride, unsigned char *dst,
                 int dstStride, int mvX, int mvY, int mode)
{
    int fracX;
    int fracY;
    int row;

    ref = (mvY >> 2) * refStride + (mvX >> 2) + ref;
    fracX = mvX & 3;
    fracY = mvY & 3;
    if (fracX == 0 && fracY == 0) {
        for (row = 0; row < 8; row++) {
            *(Row_82F26F98 *)dst = *(const Row_82F26F98 *)ref;
            dst += dstStride;
            ref += refStride;
        }
        return;
    }
    if (mode == 1) {
        self->interpolateA(ref, refStride, dst, dstStride, fracX, fracY, self->rounding);
    } else {
        self->interpolateB(ref, refStride, dst, dstStride, fracX, fracY, self->rounding);
    }
}
