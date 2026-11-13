extern int fn_82C3C340(unsigned int width, int format, int a, int b);
extern unsigned short fn_82E38C18(unsigned int width, int height, int format, int depth, int a, int b);

unsigned int fn_82E38D58(unsigned int width, int height, int format, int depth, int a, int b)
{
    __int64 blockSize = (unsigned int)(fn_82C3C340(width, format, a, b) * depth);
    unsigned int bits = fn_82E38C18(width, height, format, depth, a, b) * 8;
    return (unsigned int)(((__int64)bits * width + blockSize - 1) / blockSize);
}
