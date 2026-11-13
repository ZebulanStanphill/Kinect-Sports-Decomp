extern int fn_82A751F8(unsigned int width, int format, int a, int b);
extern unsigned short fn_82A58520(unsigned int width, int height, int format, int depth, int a, int b);

unsigned int fn_82A58620(unsigned int width, int height, int format, int depth, int a, int b)
{
    __int64 blockSize = (unsigned int)(fn_82A751F8(width, format, a, b) * depth);
    unsigned int bits = fn_82A58520(width, height, format, depth, a, b) * 8;
    unsigned int blocks = (unsigned int)(((__int64)bits * width + blockSize - 1) / blockSize);
    return (blocks + 7) >> 3;
}
