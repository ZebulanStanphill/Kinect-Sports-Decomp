typedef struct Buffer_82FE1178 {
    unsigned int *data;
    unsigned int mask;
    int pad8;
    unsigned short stride;
    unsigned short offset;
} Buffer_82FE1178;

extern void *XMemSet(void *dst, int value, unsigned int size);

static int CountBits(unsigned int mask)
{
    int n = 0;
    while (mask != 0) {
        n++;
        mask = (mask - 1) & mask;
    }
    return n;
}

void fn_82FE1178(void *self, Buffer_82FE1178 *buf, unsigned int count)
{
    unsigned int n = CountBits(buf->mask);
    unsigned int i;
    for (i = 0; i < n; i++) {
        XMemSet(buf->data + (buf->stride * i + buf->offset), 0, count * 4);
    }
}
