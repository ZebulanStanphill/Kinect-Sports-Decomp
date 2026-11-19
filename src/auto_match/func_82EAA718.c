/* Doubles two planes of 16-bit samples in both directions: each input sample fills a 2x2 block. */

typedef struct Upsampler_82EAA718 {
    char pad0[0x2d0];
    unsigned int width;  /* 0x2d0 */
    unsigned int height; /* 0x2d4 */
    char pad2d8[0x6b8];
    unsigned short *outU; /* 0x990 */
    unsigned short *outV; /* 0x994 */
    char pad998[0x13d4];
    unsigned short *inU; /* 0x1d6c */
    unsigned short *inV; /* 0x1d70 */
} Upsampler_82EAA718;

void fn_82EAA718(Upsampler_82EAA718 *self)
{
    unsigned int y;
    unsigned int x;
    unsigned int src;
    unsigned int top;
    unsigned int bottom;

    for (y = 0; y < self->height; y++) {
        src = self->width * y;
        top = src * 4;
        bottom = (y * 4 + 2) * self->width;
        for (x = 0; x < self->width; x++) {
            self->outU[bottom + x * 2 + 1] = self->inU[src + x];
            self->outU[bottom + x * 2] = self->outU[bottom + x * 2 + 1];
            self->outU[top + x * 2 + 1] = self->outU[bottom + x * 2];
            self->outU[top + x * 2] = self->outU[top + x * 2 + 1];
            self->outV[bottom + x * 2 + 1] = self->inV[src + x];
            self->outV[bottom + x * 2] = self->outV[bottom + x * 2 + 1];
            self->outV[top + x * 2 + 1] = self->outV[bottom + x * 2];
            self->outV[top + x * 2] = self->outV[top + x * 2 + 1];
        }
    }
}
