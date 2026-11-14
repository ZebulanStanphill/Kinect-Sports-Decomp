void fn_82EFDF68(const unsigned char *src, int srcPitch, const unsigned char *pred, int predPitch,
                 short *out, int width, int height)
{
    int x, y;
    for (y = 0; y < height; y++) {
        for (x = 0; x < width; x++)
            *out++ = (short)(src[x] - pred[x]);
        src += srcPitch;
        pred += predPitch;
    }
}
