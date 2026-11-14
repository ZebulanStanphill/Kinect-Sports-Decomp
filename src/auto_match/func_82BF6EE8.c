typedef struct Buffer_82BF6EE8 {
    int pad0;
    int pad4;
    void *data;             // 0x08
    unsigned int used;      // 0x0c
    unsigned int capacity;  // 0x10
    int pad14;
    int growMode;           // 0x18
} Buffer_82BF6EE8;

extern void *(*lbl_831751D0)(unsigned int size);
extern void (*lbl_831751CC)(void *p);
extern void *memcpy(void *dst, const void *src, unsigned int n);
extern int fn_82BF6E50(Buffer_82BF6EE8 *buf, unsigned int size);

static __forceinline int IsEmpty(Buffer_82BF6EE8 *buf)
{
    if (buf->data == 0 || buf->capacity == 0)
        return 1;
    return 0;
}

int fn_82BF6EE8(Buffer_82BF6EE8 *buf, unsigned int size)
{
    unsigned int capacity;
    unsigned int prev;
    void *data;

    if (size != 0) {
        if (IsEmpty(buf))
            return fn_82BF6E50(buf, size);
        if (buf->growMode == 0) {
            capacity = size;
        } else if (buf->growMode == 1) {
            capacity = buf->capacity * 2;
            while (capacity < size) {
                prev = capacity;
                capacity *= 2;
                if (capacity < prev)
                    return 0;
            }
        } else {
            return 0;
        }
        data = lbl_831751D0(capacity);
        if (data != 0) {
            memcpy(data, buf->data, buf->used);
            lbl_831751CC(buf->data);
            buf->data = data;
            buf->capacity = capacity;
            return 1;
        }
    }
    return 0;
}
