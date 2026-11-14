typedef struct Buffer_82BE6148 Buffer_82BE6148;
typedef struct {
    void *f0;
    void *f4;
    void *f8;
    int (*maxSize)(Buffer_82BE6148 *);
} BufferVt_82BE6148;

struct Buffer_82BE6148 {
    BufferVt_82BE6148 *vt;
    char pad4[0x14];
    int growMode;
    void *data;
    int pad20;
    unsigned int used;
    int capacity;
};

extern void *(*lbl_831751D0)(int size);
extern void (*lbl_831751CC)(void *p);
extern void *memcpy(void *dst, const void *src, unsigned int n);
extern int fn_82BE6050(Buffer_82BE6148 *buf, int size);
extern void fn_82BE5240(Buffer_82BE6148 *buf, int code, const char *message);

static __forceinline int IsEmpty(Buffer_82BE6148 *b)
{
    if (b->data == 0 || b->capacity <= 0)
        return 1;
    return 0;
}

int fn_82BE6148(Buffer_82BE6148 *buf, int size, int extra)
{
    const char *message;
    void *data;

    if (size <= 0) {
        message = "Can't reallocate buffer where new size is 0 or negative size.";
    } else {
        if (IsEmpty(buf))
            return fn_82BE6050(buf, size);
        if (extra > 0 && fn_82BE6148(buf, size + extra, 0) != 0)
            return 1;
        if (buf->growMode == 1 && size > buf->vt->maxSize(buf)) {
            message = "Requested buffer size will exceed request maximum.";
        } else {
            data = lbl_831751D0(size);
            if (data != 0) {
                memcpy(data, buf->data, buf->used);
                lbl_831751CC(buf->data);
                buf->data = data;
                buf->capacity = size;
                return 1;
            }
            message = "Could not reallocate buffer, leaving old buffer untouched.";
        }
    }
    fn_82BE5240(buf, 0x65, message);
    return 0;
}
