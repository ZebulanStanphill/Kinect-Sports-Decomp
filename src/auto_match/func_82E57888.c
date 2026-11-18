unsigned short _byteswap_ushort(unsigned short v);

typedef struct Writer_82E57888 {
    unsigned char *cur;
} Writer_82E57888;

/* An inline function in the original (its callers know it keeps no pointer to the writer but not
   which registers it leaves alone): the out-of-line copy is this unit. */
extern __inline void fn_82E57888(Writer_82E57888 *w, const unsigned short *src, unsigned int size)
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
