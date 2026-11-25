typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern unsigned int strlen(const char *s);

typedef struct Sink_828FA8D8 Sink_828FA8D8;

typedef struct SinkVtbl_828FA8D8 {
    int (*write)(Sink_828FA8D8 *self, char *buffer, unsigned int size); /* 0x00 */
} SinkVtbl_828FA8D8;

struct Sink_828FA8D8 {
    SinkVtbl_828FA8D8 *vtable;
};

typedef struct Location_828FA8D8 {
    char pad00[0x10];
    const char *file;  /* 0x10 */
    unsigned int line; /* 0x14 */
} Location_828FA8D8;

typedef struct Messages_828FA8D8 {
    char pad00[0xc];
    Sink_828FA8D8 *prefix; /* 0x0c */
    char pad10[8];
    int errorCount; /* 0x18 */
} Messages_828FA8D8;

extern long fn_828F6FA8(char *buffer, unsigned int count, const char *format, ...);
extern long fn_828F5960(char *buffer, unsigned int count, const char *format, va_list args);
extern int fn_828FA798(Messages_828FA8D8 *self, const char *text);

static __forceinline void Advance(char **cursor, unsigned int *remaining)
{
    int length = strlen(*cursor);
    if (length < 0) {
        length = *remaining;
    }
    *cursor += length;
    *remaining -= length;
}

void fn_828FA8D8(Messages_828FA8D8 *self, Location_828FA8D8 *location, unsigned int code, const char *format,
                 ...)
{
    char buffer[0x1000];
    char *cursor = buffer;
    unsigned int remaining = 0xffc;
    const char *text;
    va_list args;
    long hr;

    if (location != 0) {
        if (location->file != 0) {
            if (fn_828F6FA8(cursor, remaining, "%s", location->file) < 0) {
                goto fail;
            }
            Advance(&cursor, &remaining);
        }
        if (fn_828F6FA8(cursor, remaining, "(%u): ", location->line != 0 ? location->line : 1) < 0) {
            goto fail;
        }
        Advance(&cursor, &remaining);
    }
    if (code != 0) {
        if (fn_828F6FA8(cursor, remaining, "error X%u: ", code) < 0) {
            goto fail;
        }
        Advance(&cursor, &remaining);
    }
    if (self->prefix != 0) {
        int written = self->prefix->vtable->write(self->prefix, cursor, remaining);
        if (written < 0) {
            goto fail;
        }
        cursor += written;
        remaining -= written;
    }
    __va_start(&args, format);
    if (remaining > 0x7fffffff) {
        hr = 0x80070057;
    } else {
        hr = fn_828F5960(cursor, remaining, format, args);
    }
    if (hr < 0) {
        goto fail;
    }
    Advance(&cursor, &remaining);
    cursor[0] = '\n';
    cursor[1] = 0;
    self->errorCount++;
    fn_828FA798(self, buffer);
    return;
fail:
    self->errorCount++;
    fn_828FA798(self, "Error creating error string");
}
