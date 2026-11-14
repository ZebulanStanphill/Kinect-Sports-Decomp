extern int fn_82A93C18(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8,
                       int a9, void *a10, void *a11, void *a12);

unsigned int fn_82A863D0(int format, unsigned int width, unsigned int height, unsigned int levels)
{
    unsigned int size;
    int align;
    unsigned int w = width >> 1;
    unsigned int h = height >> 1;
    unsigned int i;

    for (i = 1; i < levels; i++) {
        if (w == 0 && h == 0) {
            levels = i;
            break;
        }
        w >>= 1;
        h >>= 1;
    }
    fn_82A93C18(width, height, levels, 0, format, 0, 0, 0, 0, 0, &align, &size);
    return (size + 0xfff) & ~0xfff;
}
