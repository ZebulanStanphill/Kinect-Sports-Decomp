typedef struct Buffer_82BF6FC0 {
    int pad0;
    int pad4;
    unsigned char *data;    // 0x08
    unsigned int used;      // 0x0c
    unsigned int capacity;  // 0x10
    unsigned int minSize;   // 0x14
    int growMode;           // 0x18
} Buffer_82BF6FC0;

extern void *memmove(void *dst, const void *src, unsigned int n);
extern void *memcpy(void *dst, const void *src, unsigned int n);
extern int fn_82BF6E50(Buffer_82BF6FC0 *buf, unsigned int size);
extern int fn_82BF6EE8(Buffer_82BF6FC0 *buf, unsigned int size);

static __forceinline int IsEmpty(Buffer_82BF6FC0 *buf)
{
    if (buf->data == 0 || buf->capacity == 0)
        return 1;
    return 0;
}

int fn_82BF6FC0(Buffer_82BF6FC0 *buf, unsigned int pos, const void *src, unsigned int size)
{
    unsigned int needed;

    if (src == 0 || size == 0)
        return 0;
    needed = buf->used + size;
    if (IsEmpty(buf)) {
        if (needed <= buf->minSize)
            needed = buf->minSize;
        if (!fn_82BF6E50(buf, needed))
            return 0;
    } else if (needed > buf->capacity) {
        if (!fn_82BF6EE8(buf, needed))
            return 0;
    }
    if (pos < buf->used) {
        memmove(buf->data + pos + size, buf->data + pos, buf->used - pos);
    }
    memcpy(buf->data + pos, src, size);
    buf->used += size;
    return 1;
}
