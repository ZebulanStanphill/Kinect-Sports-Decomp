typedef char *va_list;

extern int fn_82F668C8(char *buf, unsigned int size, unsigned int count, const char *fmt, va_list ap);
extern char *__iob_func(void);
extern int fn_82F6A938(const char *str, void *stream);

void fn_82684BE8(void *ctx, int level, const char *fmt, va_list ap)
{
    char buf[0x800];

    buf[0] = 0;
    if (fn_82F668C8(buf, sizeof(buf), (unsigned int)-1, fmt, ap) == -1) {
        buf[sizeof(buf) - 1] = 0;
    }
    fn_82F6A938(buf, __iob_func() + 0x20);
}
