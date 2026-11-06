typedef struct Buffer_826C8988 {
    void *data;
    unsigned int unk4;
    unsigned int size;
} Buffer_826C8988;

extern void *fn_8267B890(unsigned int heap, unsigned int size, int *flags);
extern void *fn_8267BDA8(void *ptr, unsigned int size);
extern void fn_8267BE38(void *ptr);
extern unsigned int lbl_831E7E64;

void fn_826C8988(Buffer_826C8988 *buf, int unused, unsigned int size)
{
    unsigned int rounded;
    int flags;

    if (size == 0) {
        rounded = 0;
        if (buf->data != 0) {
            fn_8267BE38(buf->data);
            buf->data = 0;
        }
    } else {
        rounded = (size + 3) & ~3u;
        if (buf->data != 0) {
            buf->data = fn_8267BDA8(buf->data, rounded);
        } else {
            flags = 2;
            buf->data = fn_8267B890(lbl_831E7E64, rounded, &flags);
        }
    }
    buf->size = rounded;
}
