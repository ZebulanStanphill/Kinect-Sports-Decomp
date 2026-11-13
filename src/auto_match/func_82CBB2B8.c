void fn_82CBB2B8(unsigned char *dst, unsigned char *pred, short *src, int stride)
{
    int i;

    for (i = 0; i < 8; i++) {
        int a, b, c, d;

        a = pred[0] + src[0];
        b = pred[1] + src[1];
        c = pred[2] + src[2];
        d = pred[3] + src[3];
        if ((unsigned int)a > 255) a = (a < 0) ? 0 : 255;
        if ((unsigned int)b > 255) b = (b < 0) ? 0 : 255;
        if ((unsigned int)c > 255) c = (c < 0) ? 0 : 255;
        if ((unsigned int)d > 255) d = (d < 0) ? 0 : 255;
        dst[3] = (unsigned char)d;
        dst[0] = (unsigned char)a;
        dst[2] = (unsigned char)c;
        dst[1] = (unsigned char)b;

        a = pred[4] + src[4];
        b = pred[5] + src[5];
        c = pred[6] + src[6];
        d = pred[7] + src[7];
        if ((unsigned int)a > 255) a = (a < 0) ? 0 : 255;
        if ((unsigned int)b > 255) b = (b < 0) ? 0 : 255;
        if ((unsigned int)c > 255) c = (c < 0) ? 0 : 255;
        if ((unsigned int)d > 255) d = (d < 0) ? 0 : 255;
        dst[4] = (unsigned char)a;
        dst[5] = (unsigned char)b;
        dst[6] = (unsigned char)c;
        dst[7] = (unsigned char)d;

        pred += stride;
        src += 8;
        dst += stride;
    }
}
