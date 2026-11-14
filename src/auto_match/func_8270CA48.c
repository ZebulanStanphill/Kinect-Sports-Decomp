typedef struct Source_8270CA48 Source_8270CA48;

typedef struct SourceVt_8270CA48 {
    void *slots[11];
    int (*read)(Source_8270CA48 *self, int count);  /* 0x2c */
} SourceVt_8270CA48;

struct Source_8270CA48 {
    SourceVt_8270CA48 *vt;
};

typedef struct Stream_8270CA48 {
    char pad0[8];
    Source_8270CA48 *source;    /* 0x08 */
    int padc;
    int mode;                   /* 0x10 */
    int pos;                    /* 0x14 */
    int end;                    /* 0x18 */
    int pad1c;
    __int64 total;              /* 0x20 */
} Stream_8270CA48;

int fn_8270CA48(Stream_8270CA48 *self, int count)
{
    int done = 0;

    if (self->mode == 1) {
        done = self->end - self->pos;
        if (done >= count)
            done = count;
        count -= done;
        self->pos += done;
    }
    if (count != 0) {
        count = self->source->vt->read(self->source, count);
        if (count != -1) {
            self->end = 0;
            done = done + count;
            self->pos = 0;
            self->total += count;
        } else if (done <= 0) {
            done = -1;
        }
    }
    return done;
}
