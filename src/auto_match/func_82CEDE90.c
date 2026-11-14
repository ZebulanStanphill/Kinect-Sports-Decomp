typedef char *va_list;

extern void __cdecl __va_start(va_list *, ...);

typedef struct Sink_82CEDE90 Sink_82CEDE90;

typedef struct SinkVtbl_82CEDE90 {
    void *slot0;
    void *slot1;
    void *slot2;
    void *slot3;
    void (*Write)(Sink_82CEDE90 *self, const char *text, int len);
} SinkVtbl_82CEDE90;

struct Sink_82CEDE90 {
    SinkVtbl_82CEDE90 *vt;
};

typedef struct Owner_82CEDE90 {
    int field0;
    int field4;
    Sink_82CEDE90 *sink;
} Owner_82CEDE90;

extern int fn_82CFBB58(char *buf, int size, const char *fmt, va_list ap);
extern int fn_82CFBE40(const char *s);

void fn_82CEDE90(Owner_82CEDE90 *self, const char *fmt, ...)
{
    va_list ap;
    char buf[10024];
    Sink_82CEDE90 *sink;

    __va_start(&ap, fmt);
    fn_82CFBB58(buf, 0x2728, fmt, ap);
    sink = self->sink;
    sink->vt->Write(sink, buf, fn_82CFBE40(buf));
}
