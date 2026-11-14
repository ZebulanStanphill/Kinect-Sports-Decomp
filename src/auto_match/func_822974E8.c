void *memmove(void *dst, const void *src, unsigned int n);

void *fn_822974E8(unsigned short *dst, const unsigned short *src, unsigned int count)
{
    return memmove(dst, src, count * 2);
}
