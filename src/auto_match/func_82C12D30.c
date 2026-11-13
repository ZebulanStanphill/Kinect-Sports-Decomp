extern void *memset(void *dst, int c, unsigned int n);
extern void fn_82F6FDB0(unsigned short *dst, const unsigned short *src, unsigned int count);

void fn_82C12D30(void *self, const unsigned short *src, unsigned int len, unsigned int size, unsigned short *dst)
{
    memset(dst, 0, size);
    if (len > size - 1) {
        len = size - 1;
    }
    fn_82F6FDB0(dst, src, len);
    dst[len] = 0;
}
