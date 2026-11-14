void fn_82AAC550(unsigned short **planes, unsigned short *dst, int pitch, int width, int rows)
{
    int y;
    int x;
    int c;
    unsigned short *p;
    unsigned short *row = dst;

    for (y = 0; y < rows; y++) {
        p = row;
        for (x = 0; x < width; x++) {
            for (c = 0; c < 4; c++)
                p[c] = planes[c][x] + 0x8000;
            p += 4;
        }
        for (c = 0; c < 4; c++)
            planes[c] += width;
        row = (unsigned short *)((char *)row + pitch);
    }
}
