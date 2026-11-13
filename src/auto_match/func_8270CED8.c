typedef struct Stream_8270CED8 Stream_8270CED8;
typedef struct {
    void *slots[3];
    unsigned char (*canSeek)(Stream_8270CED8 *self);
} StreamVt_8270CED8;
struct Stream_8270CED8 { StreamVt_8270CED8 *vt; };

typedef struct {
    char pad0[8];
    Stream_8270CED8 *stream;
    void *handle;
    int mode;
    int pos;
    int len;
} File_8270CED8;

extern void fn_8270C708(File_8270CED8 *self);

int fn_8270CED8(File_8270CED8 *self, int mode)
{
    if (self->handle == 0) return 0;
    if (mode != self->mode) {
        fn_8270C708(self);
        if (mode == 2) {
            if ((int)self->stream == 0) return 0;
            if (!self->stream->vt->canSeek(self->stream)) return 0;
        }
        self->mode = mode;
        self->pos = 0;
        self->len = 0;
    }
    return 1;
}
