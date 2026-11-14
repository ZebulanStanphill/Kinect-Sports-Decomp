typedef struct Buffer_8278FD68 {
    unsigned short *data;
    unsigned int count;
} Buffer_8278FD68;

static __forceinline unsigned short *At_8278FD68(Buffer_8278FD68 *buf, unsigned int index)
{
    if (buf->data != 0 && index < buf->count)
        return &buf->data[index];
    return 0;
}

unsigned char fn_8278FD68(Buffer_8278FD68 *buf)
{
    unsigned int n = buf->count;
    if (n != 0) {
        unsigned short c = *At_8278FD68(buf, n - 1);
        return c == 13 || c == 10;
    }
    return 0;
}
