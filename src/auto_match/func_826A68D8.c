typedef char *va_list;

extern void __cdecl __va_start(va_list *, ...);

typedef struct Sink_826A68D8 Sink_826A68D8;
typedef void (*SinkFn_826A68D8)(Sink_826A68D8 *self, int channel, const char *fmt, va_list ap);
struct Sink_826A68D8 { SinkFn_826A68D8 *vt; };

typedef struct Logger_826A68D8 {
    Sink_826A68D8 *sink;
    int channel;
} Logger_826A68D8;

void fn_826A68D8(Logger_826A68D8 *self, const char *fmt, ...)
{
    if (self->sink != 0) {
        va_list ap;
        __va_start(&ap, fmt);
        self->sink->vt[1](self->sink, self->channel, fmt, ap);
    }
}
