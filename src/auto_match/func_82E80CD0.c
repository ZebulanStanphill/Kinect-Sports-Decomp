typedef struct Chunk_82E80CD0 {
    unsigned int size;
    unsigned int offset;
    int f8;
    struct Chunk_82E80CD0 *next;
} Chunk_82E80CD0;

typedef struct Stream_82E80CD0 {
    void *vt;
    unsigned int size;
    unsigned int pos;
    int fc;
    Chunk_82E80CD0 *last;
    Chunk_82E80CD0 *cur;
} Stream_82E80CD0;

extern void fn_82E80A68(Stream_82E80CD0 *self);
extern unsigned int fn_82E80A08(Chunk_82E80CD0 *chunk, unsigned char *dst, unsigned int offset, unsigned int size);

int fn_82E80CD0(Stream_82E80CD0 *self, unsigned char *buffer, unsigned int size, unsigned int *read)
{
    int hr = 0;

    if (buffer == 0) {
        hr = 0x80004003;
        goto done;
    }
    if (read == 0) {
        hr = 0x80004003;
        goto done;
    }
    if (self->cur == 0 && self->last != 0)
        fn_82E80A68(self);
    if (self->pos + size > self->size)
        size = self->size - self->pos;
    *read = hr;
    while (size != 0) {
        unsigned int n = fn_82E80A08(self->cur, buffer, self->pos - self->cur->offset, size);
        size -= n;
        buffer += n;
        self->pos += n;
        *read += n;
        if (self->pos >= self->cur->offset + self->cur->size && self->cur != self->last)
            self->cur = self->cur->next;
    }
done:
    return hr;
}
