#include "xdk/vectorintrinsics.h"

typedef struct Source_824A1C90 Source_824A1C90;

typedef struct SourceVtbl_824A1C90 {
    void *slots[10];
    void *(*getStream)(Source_824A1C90 *self); /* 0x28 */
} SourceVtbl_824A1C90;

struct Source_824A1C90 {
    SourceVtbl_824A1C90 *vt;
};

typedef struct Reader_824A1C90 {
    void *vt; /* 0x00 */
    char pad4[0x1c];
    char buffer[0x94];       /* 0x20 */
    Source_824A1C90 *source; /* 0xb4 */
    int mode;                /* 0xb8 */
    char padbc[0xc0 - 0xbc];
    __vector4 position; /* 0xc0 */
    int fd0;            /* 0xd0 */
    int fd4;            /* 0xd4 */
    int fd8;            /* 0xd8 */
    float scale;        /* 0xdc */
} Reader_824A1C90;

extern char lbl_821BF540[];
extern const float lbl_821CA45C[2];
extern void *fn_827F4248(void *self, void *buffer, void *name, int a, int b);
extern void fn_827F3770(void *buffer, void *stream);

Reader_824A1C90 *fn_824A1C90(Reader_824A1C90 *self, Source_824A1C90 *source, int mode)
{
    fn_827F4248(self, self->buffer, 0, 0, 0);
    self->vt = lbl_821BF540;
    fn_827F3770(self->buffer, source->vt->getStream(source));
    self->source = source;
    self->mode = mode;
    self->fd0 = 0;
    self->position = __VMXGetReg(77);
    self->fd4 = 0;
    self->scale = lbl_821CA45C[1];
    self->fd8 = 1;
    return self;
}
