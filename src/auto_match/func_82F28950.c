void fn_82F28950(const unsigned char *src, short *dst, int n)
{
    int i;

    for (i = 0; i < n; i++) {
        dst[i] = src[i] - 0x80;
    }
}
