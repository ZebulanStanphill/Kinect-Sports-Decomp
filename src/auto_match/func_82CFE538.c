struct Stream_82CFE538;
struct StreamVtbl_82CFE538 {
    void *slots[4];
    int (*write)(struct Stream_82CFE538 *self, const void *data, int size);
};
struct Stream_82CFE538 { struct StreamVtbl_82CFE538 *vt; };
struct Writer_82CFE538 { void *vt; int pad; struct Stream_82CFE538 *stream; unsigned char swap; };

extern void fn_82CFC050(void *dst, const void *src, int size);

void fn_82CFE538(struct Writer_82CFE538 *self, const unsigned char *data, int size)
{
    unsigned char buffer[0x200];
    int chunk;
    int last;
    int left;
    const unsigned char *p;

    if (!self->swap) {
        self->stream->vt->write(self->stream, data, size);
        return;
    }
    last = size % 0x200;
    p = data;
    left = size;
    chunk = 0x200;
    for (; left > 0; left -= chunk) {
        if (left < 0x200) {
            chunk = last;
        }
        fn_82CFC050(buffer, p, chunk);
        self->stream->vt->write(self->stream, buffer, chunk);
        p += chunk;
    }
}
