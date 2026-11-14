void fn_82CF6988(unsigned char *dst, const unsigned char *src, unsigned int count)
{
    int i;
    for (i = count - 1; count >= 1; count--, i--) {
        dst[i] = src[i];
    }
}
