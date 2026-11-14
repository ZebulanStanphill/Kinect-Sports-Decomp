typedef struct Buffer_82F98E98 {
    unsigned int *data;
    unsigned int mask;
    int pad8;
    unsigned short stride;
    unsigned short offset;
} Buffer_82F98E98;

static int CountBits(unsigned int mask)
{
    int n = 0;
    while (mask != 0) {
        n++;
        mask = (mask - 1) & mask;
    }
    return n;
}

unsigned int *fn_82F98E98(Buffer_82F98E98 *buf)
{
    if (buf->mask & 8) {
        return buf->data + buf->stride * (CountBits(buf->mask) - 1);
    }
    return 0;
}
