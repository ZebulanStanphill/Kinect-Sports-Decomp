typedef struct Buffer_82E49378 Buffer_82E49378;
typedef struct BufferVT_82E49378 {
    void *pad[5];
    int (*reserve)(Buffer_82E49378 *self, unsigned __int64 size);   /* 0x14 */
} BufferVT_82E49378;
struct Buffer_82E49378 {
    BufferVT_82E49378 *vt;
    unsigned int capacity;      /* 0x04 */
    unsigned char *begin;       /* 0x08 */
    unsigned char *end;         /* 0x0c */
    unsigned char *cur;         /* 0x10 */
};

extern void fn_82A1DDC0(void *dst, const void *src, unsigned int size);
int fn_82E49378(Buffer_82E49378 *self, const void *data, unsigned int size, unsigned int *written)
{
    int hr = 0;

    if (data == 0) {
        hr = 0x80004003;
        goto done;
    }
    if (written == 0) {
        hr = 0x80004003;
        goto done;
    }
    {
        if (self->cur < self->begin || self->cur > self->end)
            self->cur = self->begin;
        if (self->cur + size > self->begin + self->capacity)
            size = self->capacity;
        *written = hr;
        if ((unsigned int)(self->cur - self->begin) + size <= (unsigned int)(self->end - self->begin)
            || (hr = self->vt->reserve(self, (unsigned int)(self->cur - self->begin) + size)) >= 0) {
            fn_82A1DDC0(self->cur, data, size);
            self->cur += size;
        }
    }
done:
    return hr;
}
