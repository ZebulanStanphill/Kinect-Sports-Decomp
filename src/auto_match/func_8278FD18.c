typedef struct Buffer_8278FD18 {
    unsigned short *data;
    unsigned int count;
} Buffer_8278FD18;

static __forceinline unsigned short *At_8278FD18(Buffer_8278FD18 *buf, unsigned int index)
{
    if (buf->data != 0 && index < buf->count)
        return &buf->data[index];
    return 0;
}

unsigned char fn_8278FD18(Buffer_8278FD18 *buf)
{
    unsigned int n = buf->count;
    return n != 0 && *At_8278FD18(buf, n - 1) == 0;
}
