// Logger printf: optionally prefixes the message, then forwards to the sink's
// print slot with level 0x20.

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif

struct LogSink_826ABE30;
typedef struct {
    void *f0;
    void (*print)(struct LogSink_826ABE30 *sink, int level, const char *fmt,
                  va_list ap);
} LogSinkVtbl_826ABE30;
typedef struct LogSink_826ABE30 {
    LogSinkVtbl_826ABE30 *vtbl;
} LogSink_826ABE30;

typedef struct {
    int f0;
    LogSink_826ABE30 *sink;
    char f8[2];
    unsigned char prefix;
    char fb;
    char fc[4];
} Logger_826ABE30;

typedef struct {
    const char *text;
    unsigned int len;
} LogText_826ABE30;

typedef struct {
    int kind;
    char *buf;
    int size;
} LogBuffer_826ABE30;

void __cdecl __va_start(va_list *ap, ...);
unsigned int strlen(const char *s);
void fn_826AACB0(LogBuffer_826ABE30 *out, const char *fmt,
                 LogText_826ABE30 *text, char *arg);

void fn_826ABE30(Logger_826ABE30 *log, const char *fmt, ...)
{
    va_list ap;
    __va_start(&ap, fmt);
    if (log->sink != 0) {
        if (log->prefix) {
            LogText_826ABE30 text;
            LogBuffer_826ABE30 out;
            char buf[0x100];
            unsigned int len = strlen(fmt);
            if (fmt[len - 1] == '\n')
                len--;
            text.text = fmt;
            text.len = len;
            out.kind = 2;
            out.buf = buf;
            out.size = 0x100;
            fn_826AACB0(&out, "{0} : {1}\n", &text, log->fc);
            fmt = buf;
        }
        log->sink->vtbl->print(log->sink, 0x20, fmt, ap);
    }
}

