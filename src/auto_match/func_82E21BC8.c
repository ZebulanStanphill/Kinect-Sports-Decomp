extern int compress(unsigned char *dest, unsigned long *destLen, const unsigned char *source, unsigned long sourceLen);

unsigned long fn_82E21BC8(void *self, const unsigned char *src, unsigned long srcLen, unsigned long *dst, unsigned long dstLen)
{
    compress((unsigned char *)(dst + 1), &dstLen, src, srcLen);
    *dst = dstLen;
    return dstLen + 4;
}
