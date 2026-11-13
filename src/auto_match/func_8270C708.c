typedef struct Stream_8270C708 Stream_8270C708;
typedef struct {
    void *f[9];
    int (*Read)(Stream_8270C708 *s, void *buf, int size);
    void *g[5];
    __int64 (*Seek)(Stream_8270C708 *s, __int64 offset, int origin);
} StreamVtbl_8270C708;
struct Stream_8270C708 { StreamVtbl_8270C708 *vt; };

typedef struct {
    int f0;
    int f4;
    Stream_8270C708 *stream;
    void *buffer;
    int mode;
    int count;
    int pos;
    int f1c;
    __int64 offset;
} Buffer_8270C708;

void fn_8270C708(Buffer_8270C708 *self)
{
    switch (self->mode) {
    case 1:
        if (self->pos - self->count != 0) {
            self->offset = self->stream->vt->Seek(self->stream, self->count - self->pos, 1);
        }
        self->pos = 0;
        self->count = 0;
        break;
    case 2: {
        int n = self->stream->vt->Read(self->stream, self->buffer, self->count);
        self->count = 0;
        self->offset += n;
        break;
    }
    }
}
