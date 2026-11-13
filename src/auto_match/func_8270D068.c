typedef struct Stream_8270D068 Stream_8270D068;
typedef struct StreamVt_8270D068 {
    void *slots[10];
    int (*read)(Stream_8270D068 *self, void *buf, int n);
} StreamVt_8270D068;
struct Stream_8270D068 {
    StreamVt_8270D068 *vt;
};

typedef struct Buffered_8270D068 {
    int f0;
    int f4;
    Stream_8270D068 *stream;
    char *data;
    int mode;
    int cur;
    int end;
    int f1c;
    __int64 pos;
} Buffered_8270D068;

extern unsigned char fn_8270CED8(Buffered_8270D068 *self, int mode);
extern void fn_8270C7C0(Buffered_8270D068 *self);
extern void *memcpy(void *, const void *, unsigned int);

int fn_8270D068(Buffered_8270D068 *self, char *buf, int n)
{
    int avail;

    if (self->mode != 1 && fn_8270CED8(self, 1) == 0) {
        n = self->stream->vt->read(self->stream, buf, n);
        if (n > 0) {
            self->pos += n;
        }
        return n;
    }
    if (self->end - self->cur >= n) {
        memcpy(buf, self->data + self->cur, n);
        self->cur += n;
        return n;
    }
    avail = self->end - self->cur;
    memcpy(buf, self->cur + self->data, avail);
    n -= avail;
    buf += avail;
    self->cur = self->end;
    if (n > 0x1000) {
        n = self->stream->vt->read(self->stream, buf, n);
        if (n > 0) {
            self->cur = self->end = 0;
            self->pos += n;
        }
        return avail + (n == -1 ? 0 : n);
    }
    fn_8270C7C0(self);
    if (self->end - self->cur < n) {
        n = self->end - self->cur;
    }
    memcpy(buf, self->cur + self->data, n);
    self->cur += n;
    return n + avail;
}
