void fn_82AAC3E8(unsigned short **planes, unsigned short *dst, int pitch, int width, int rows)
{
    int y;
    int x;
    int c;
    unsigned short *p;
    unsigned short *row = dst;

    for (y = 0; y < rows; y++) {
        p = row;
        for (x = 0; x < width; x++) {
            p[0] = 0xffff;
            for (c = 0; c < 3; c++)
                p[c + 1] = planes[c][x] + 0x8000;
            p += 7;
        }
        for (c = 0; c < 3; c++)
            planes[c] += width;
        row = (unsigned short *)((char *)row + pitch);
    }
}
