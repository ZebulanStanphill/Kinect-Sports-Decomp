void fn_82F28920(const short *src, short *dst, int count)
{
    int i;
    for (i = 0; i < count; i++) {
        dst[i] = src[i] - 0x80;
    }
}
