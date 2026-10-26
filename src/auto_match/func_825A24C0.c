typedef struct {
    unsigned short skip;
    unsigned short pad;
    int pad2;
    unsigned int len;
} Buf;

extern void *memmove(void *dst, const void *src, unsigned int n);

void fn_825A24C0(Buf *b, char *data)
{
    unsigned int n = b->len - b->skip;

    if ((unsigned int)data < n) {
        memmove(data, data + b->skip, n - (unsigned int)data);
    }
    b->len = b->len - b->skip;
}
