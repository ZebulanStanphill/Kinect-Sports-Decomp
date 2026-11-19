int abs(int value);

extern unsigned int fn_82A1F248(const void *address);
extern void fn_82AA75B8(char *dst, const char *src, unsigned int size);
extern void fn_82AA7718(char *dst, const char *src, unsigned int size, int pitch, unsigned int rows);
extern void fn_82AA79C0(char *dst, unsigned int size, int pitch, unsigned int rows);

void fn_82AA7C38(char *dst, const char *src, unsigned int size, int pitch, unsigned int rows)
{
    unsigned int absPitch = abs(pitch);
    unsigned int width = size >> 16;
    char *to;
    const char *from;
    int step;
    int dstCached;
    int srcCached;
    unsigned int flags;
    unsigned int i;

    if (rows == 0) {
        return;
    }
    if ((size & 0xffff) == 0 && dst == src) {
        return;
    }
    if (((dst - src) ^ pitch) < 0) {
        to = dst;
        from = src;
        step = pitch;
    } else {
        int offset = (rows - 1) * pitch;

        step = -pitch;
        to = dst + offset;
        from = src + offset;
    }
    flags = fn_82A1F248(dst);
    if (flags != 0 && (flags & 0x600) == 0) {
        dstCached = 1;
    } else {
        dstCached = 0;
    }
    flags = fn_82A1F248(src);
    if (flags != 0 && (flags & 0x600) == 0) {
        srcCached = 1;
    } else {
        srcCached = 0;
    }
    if (dstCached && srcCached && width <= 16 && width != 0 && (width & (width - 1)) == 0 &&
        absPitch == width && ((absPitch - 1) & (unsigned int)to) == 0 &&
        ((absPitch - 1) & (unsigned int)from) == 0) {
        if (to == from) {
            fn_82AA79C0(to, size, step, rows);
            return;
        }
        if (abs(to - from) >= 0x80 && (((unsigned int)from ^ (unsigned int)to) & 0xf) == 0) {
            fn_82AA7718(to, from, size, step, rows);
            return;
        }
    }
    for (i = 0; i < rows; i++) {
        fn_82AA75B8(to, from, size);
        to += step;
        from += step;
    }
}
