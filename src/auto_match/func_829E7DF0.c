typedef struct Buffer_829E7DF0 {
    int width;
    int height;
    unsigned int capacity;
    unsigned int aligned;
    unsigned int raw;
} Buffer_829E7DF0;

extern void fn_829E7DA0(Buffer_829E7DF0 *buf);
extern unsigned int fn_82A28568(unsigned int heap, int flags, unsigned int size);
extern unsigned int lbl_832179FC;

int fn_829E7DF0(Buffer_829E7DF0 *buf, int width, int height)
{
    unsigned int size;
    unsigned int raw;

    size = (unsigned int)(width * height) * 8;
    if (size > 0xa0000) {
        return 0;
    }
    if (buf->capacity < size) {
        if (buf->raw != 0 && buf->capacity != 0) {
            fn_829E7DA0(buf);
        }
        raw = fn_82A28568(*(unsigned int *)(lbl_832179FC + 0x8f4cc), 0, size + 0x1f);
        buf->raw = raw;
        if (raw == 0) {
            return 0;
        }
        buf->capacity = size;
        buf->width = width;
        buf->height = height;
        buf->aligned = (raw + 0x1f) & ~0x1fU;
    }
    return 1;
}
