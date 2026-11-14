unsigned short _byteswap_ushort(unsigned short v);
typedef struct Writer_82E57888 {
    unsigned char *cur;
} Writer_82E57888;

void fn_82E57888(Writer_82E57888 *w, const unsigned short *src, unsigned int size)
{
    unsigned int n = size >> 1;
    unsigned int odd = size & 1;

    for (; n != 0; n--) {
        unsigned short v = *src++;
        *(unsigned short *)w->cur = _byteswap_ushort(v);
        w->cur += 2;
    }
    if (odd) {
        *w->cur = *(const unsigned char *)src;
        w->cur += 1;
    }
}
