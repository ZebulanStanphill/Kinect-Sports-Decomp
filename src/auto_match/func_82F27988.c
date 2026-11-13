void fn_82F27988(unsigned int *dst, unsigned char *pred, short *src, int stride, unsigned char *lut)
{
    int i;

    for (i = 0; i < 8; i++) {
        int a, b, c, d;
        unsigned int lo, hi;

        a = pred[0] + src[0];
        b = pred[1] + src[1];
        c = pred[2] + src[2];
        d = pred[3] + src[3];
        if ((unsigned int)a > 255) a = (a < 0) ? 0 : 255;
        if ((unsigned int)b > 255) b = (b < 0) ? 0 : 255;
        if ((unsigned int)c > 255) c = (c < 0) ? 0 : 255;
        if ((unsigned int)d > 255) d = (d < 0) ? 0 : 255;
        lo = (c << 16) | a;
        hi = (d << 16) | b;
        if (((hi | lo) & 0xff00ff00) == 0) {
            dst[0] = (hi << 8) | lo;
        } else {
            dst[0] = (((((lut[a] << 8) | lut[b]) << 8) | lut[c]) << 8) | lut[d];
        }

        a = pred[4] + src[4];
        b = pred[5] + src[5];
        c = pred[6] + src[6];
        d = pred[7] + src[7];
        if ((unsigned int)a > 255) a = (a < 0) ? 0 : 255;
        if ((unsigned int)b > 255) b = (b < 0) ? 0 : 255;
        if ((unsigned int)c > 255) c = (c < 0) ? 0 : 255;
        if ((unsigned int)d > 255) d = (d < 0) ? 0 : 255;
        lo = (c << 16) | a;
        hi = (d << 16) | b;
        if (((hi | lo) & 0xff00ff00) == 0) {
            dst[1] = (hi << 8) | lo;
        } else {
            dst[1] = (((((lut[a] << 8) | lut[b]) << 8) | lut[c]) << 8) | lut[d];
        }

        pred += stride;
        src += 8;
        dst = (unsigned int *)((char *)dst + stride);
    }
}
