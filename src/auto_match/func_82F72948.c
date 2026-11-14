typedef struct Source_82F72948 Source_82F72948;
typedef struct SourceVtbl_82F72948 {
    int (*length)(Source_82F72948 *self);
    void *s4;
    char *(*copy)(Source_82F72948 *self, char *dst, char *last);
} SourceVtbl_82F72948;
struct Source_82F72948 { SourceVtbl_82F72948 *vt; };

typedef struct Holder_82F72948 {
    Source_82F72948 *source;
} Holder_82F72948;

extern char *fn_82F72318(void *heap, int size, int flags);
extern char lbl_832635A0[];

char *fn_82F72948(Holder_82F72948 *self, char *buf, int size)
{
    if (self->source != 0) {
        char *end;
        if (buf == 0) {
            size = self->source->vt->length(self->source) + 1;
            buf = fn_82F72318(lbl_832635A0, size, 0);
        }
        if (buf != 0) {
            if (self->source == 0) {
                end = buf;
            } else {
                end = self->source->vt->copy(self->source, buf, buf + size - 1);
            }
            *end = 0;
        }
    } else if (buf != 0) {
        *buf = 0;
    }
    return buf;
}
