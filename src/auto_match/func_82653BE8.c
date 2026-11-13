typedef char *va_list;
extern void __cdecl __va_start(va_list *, ...);
extern int _vsnprintf(char *buf, unsigned int size, const char *fmt, va_list ap);
extern unsigned long DbgPrint(const char *fmt, ...);

typedef struct Log_82653BE8 {
    void (*handler)(const char *text);
} Log_82653BE8;

void fn_82653BE8(Log_82653BE8 *self, const char *fmt, ...)
{
    va_list ap;
    char buf[0x104];

    __va_start(&ap, fmt);
    _vsnprintf(buf, sizeof(buf), fmt, ap);
    if (self->handler != 0)
        self->handler(buf);
    else
        DbgPrint(buf);
}
