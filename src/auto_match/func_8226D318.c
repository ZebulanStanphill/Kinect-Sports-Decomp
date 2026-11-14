unsigned int fn_8226D318(unsigned int width, unsigned int height, unsigned int format, int mode)
{
    int fmt = format & 0x3f;
    unsigned int bytes = 4;
    unsigned int w = width;
    unsigned int h = height;
    unsigned int alignedW, alignedH;
    if (mode >= 1)
        h = height * 2;
    if (mode == 2)
        w = width * 2;
    alignedW = (w + 0x4f) / 0x50 * 0x50;
    alignedH = (h + 15) & ~15;
    if (fmt == 0x15 || fmt == 0x20 || fmt == 0x25)
        bytes = 8;
    return alignedH * alignedW * bytes / 0x1400;
}
