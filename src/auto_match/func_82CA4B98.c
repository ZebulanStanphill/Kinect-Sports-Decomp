#include <string.h>

typedef struct Decoder_82CA4B98 {
    char pad0[0x98];
    int direct;                     /* 0x98 */
    char pad9c[0x3d44 - 0x9c];
    int pitch;                      /* 0x3d44 */
} Decoder_82CA4B98;

extern void fn_82CA3A98(Decoder_82CA4B98 *dec, unsigned char *dst, unsigned char *src,
                        unsigned char *u, unsigned char *v, int srcStride, int chromaStride,
                        int dstStride);

void fn_82CA4B98(Decoder_82CA4B98 *dec, unsigned char *dst, unsigned char *src,
                 unsigned char *u, unsigned char *v, int srcStride, int chromaStride,
                 unsigned int width, int rows)
{
    unsigned char buffer[16][0x20];
    unsigned char *row;
    int i;
    unsigned int even = width & ~1;

    if (dec->direct != 0) {
        fn_82CA3A98(dec, dst, src, u, v, srcStride, chromaStride, dec->pitch);
        return;
    }
    fn_82CA3A98(dec, buffer[0], src, u, v, srcStride, chromaStride, 0x20);
    row = buffer[0];
    for (i = 0; i < rows; i++) {
        memcpy(dst, row, even * 2);
        row += 0x20;
        dst += dec->pitch;
    }
}
