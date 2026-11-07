void fn_82CBB438(unsigned char *dst, int unused, short *src, int stride)
{
    int i;

    for (i = 0; i < 8; i++) {
        int a, b, c, d;

        a = src[0] + 128;
        b = src[1] + 128;
        c = src[2] + 128;
        d = src[3] + 128;
        if ((unsigned int)a > 255) a = (a < 0) ? 0 : 255;
        if ((unsigned int)b > 255) b = (b < 0) ? 0 : 255;
        if ((unsigned int)c > 255) c = (c < 0) ? 0 : 255;
        if ((unsigned int)d > 255) d = (d < 0) ? 0 : 255;
        dst[0] = (unsigned char)a;
        dst[1] = (unsigned char)b;
        dst[2] = (unsigned char)c;
        dst[3] = (unsigned char)d;

        a = src[4] + 128;
        b = src[5] + 128;
        c = src[6] + 128;
        d = src[7] + 128;
        if ((unsigned int)a > 255) a = (a < 0) ? 0 : 255;
        if ((unsigned int)b > 255) b = (b < 0) ? 0 : 255;
        if ((unsigned int)c > 255) c = (c < 0) ? 0 : 255;
        if ((unsigned int)d > 255) d = (d < 0) ? 0 : 255;
        dst[4] = (unsigned char)a;
        dst[5] = (unsigned char)b;
        dst[6] = (unsigned char)c;
        dst[7] = (unsigned char)d;

        src += 8;
        dst += stride;
    }
}
