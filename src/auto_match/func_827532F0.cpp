#include "game/String_8268C510.h"

// Indented line writer: appends `depth` copies of a three-space indent, the
// line and a newline to a Scaleform string buffer.
struct StrBuf_827532F0 {
    void *data;
};

extern "C" void fn_8268B1F0(StrBuf_827532F0 *sb, const char *s, int n);

struct Writer_827532F0 {
    int depth;
    StrBuf_827532F0 buf;
};

extern "C" void fn_827532F0(Writer_827532F0 *self, const char *line)
{
    if (self != 0) {
        String_8268C510 indent("   ");
        int i;
        for (i = 0; i < self->depth; i++) {
            StringData_8268C510 *d = indent.Data();
            fn_8268B1F0(&self->buf, d->text, d->size & 0x7fffffff);
        }
        fn_8268B1F0(&self->buf, line, -1);
        fn_8268B1F0(&self->buf, "\n", -1);
    }
}
