typedef struct Buffer_826C8AB0 {
    void *data;
    int unk4;
    unsigned int size;
} Buffer_826C8AB0;

extern void *fn_8267BDA8(void *p, unsigned int size);
extern void fn_8267BE38(void *p);
extern void *fn_8267BED0(int heap, unsigned int size, int *flags);

void fn_826C8AB0(Buffer_826C8AB0 *buf, int heap, unsigned int size)
{
    unsigned int n;
    void *p;
    int flags;

    if (size == 0) {
        n = 0;
        if (buf->data != 0) {
            fn_8267BE38(buf->data);
            buf->data = 0;
        }
    }
    else {
        n = (size + 3) & ~3u;
        if (buf->data != 0) {
            p = fn_8267BDA8(buf->data, n);
        }
        else {
            flags = 2;
            p = fn_8267BED0(heap, n, &flags);
        }
        buf->data = p;
    }
    buf->size = n;
}
