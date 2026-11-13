int fn_82690288(unsigned char *p, unsigned int size, unsigned int shift, unsigned int align)
{
    unsigned int start;
    unsigned int d;
    unsigned int n;
    unsigned int bytes;

    bytes = size << shift;
    start = ((unsigned int)p + align) & ~align;
    d = start - (unsigned int)p;
    while (d != 0 && d < 0x10) {
        d += align + 1;
        start += align + 1;
    }
    n = *(unsigned short *)(p + 0xc);
    if (n >= 0x21) {
        n = *(unsigned int *)(p + 0x10);
    }
    return (unsigned int)p + (n << shift) >= start + bytes;
}
