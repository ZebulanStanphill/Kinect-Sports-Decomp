typedef struct Buffer_82E491E0 {
    void *vt;
    unsigned int capacity;      /* 0x04 */
    unsigned char *begin;       /* 0x08 */
    unsigned char *end;         /* 0x0c */
    unsigned char *cur;         /* 0x10 */
} Buffer_82E491E0;

extern void fn_82A1DDC0(void *dst, const void *src, unsigned int size);

int fn_82E491E0(Buffer_82E491E0 *self, void *data, unsigned int size, unsigned int *read)
{
    int hr = 0;

    if (data == 0) {
        hr = 0x80004003;
        goto done;
    }
    if (read == 0) {
        hr = 0x80004003;
        goto done;
    }
    if (data == self->begin) {
        hr = 0;
        *read = self->end - self->begin;
        goto done;
    }
    if (self->cur < self->begin || self->cur > self->end)
        self->cur = self->begin;
    if (self->cur + size > self->end)
        size = self->end - self->cur;
    *read = size;
    fn_82A1DDC0(data, self->cur, size);
    self->cur += size;
done:
    return hr;
}
