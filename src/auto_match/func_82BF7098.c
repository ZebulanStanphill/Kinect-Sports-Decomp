extern void *memcpy(void *, const void *, unsigned int);
typedef struct Buf_82BF7098 { int p0; int p4; unsigned char *data; unsigned int size; } Buf_82BF7098;

int fn_82BF7098(Buf_82BF7098 *b, unsigned int off, const void *src, unsigned int n)
{
    unsigned int end = off + n;
    if (n > end || src == 0 || n == 0 || end > b->size) {
        return 0;
    }
    memcpy(b->data + off, src, n);
    return 1;
}
