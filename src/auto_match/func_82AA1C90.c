typedef char *va_list;
void __cdecl __va_start(va_list *, ...);
#define va_start(ap, x) (__va_start(&(ap), (x)))
#define va_end(ap) ((ap) = (va_list)0)

typedef struct Writer_82AA1C90 {
    int (*write)(void *context, const char *text, int length); /* 0x0 */
    void *context;                                             /* 0x4 */
    int status;                                                /* 0x8 */
    int padc;
    int atLineStart; /* 0x10 */
} Writer_82AA1C90;

extern int fn_82F6EDE8(char *buffer, unsigned int count, const char *format, va_list args);

static __forceinline unsigned char IsNotNumberStart(char c)
{
    if (c == ' ' || c == '-' || (c >= '0' && c <= '9')) {
        return 0;
    }
    return 1;
}

int fn_82AA1C90(Writer_82AA1C90 *writer, const char *format, ...)
{
    char buffer[0x800];
    va_list args;
    int length;
    int hr;

    va_start(args, format);
    length = fn_82F6EDE8(buffer, 0x7ff, format, args);
    buffer[0x7ff] = 0;
    if (length < 0) {
        return 0x80004005;
    }
    hr = 0;
    if (length > 0) {
        if (writer->atLineStart != 0) {
            writer->atLineStart = 0;
            if (!IsNotNumberStart(buffer[0])) {
                hr = writer->write(writer->context, " ", 1);
                if (hr < 0) {
                    goto failed;
                }
            }
        }
        hr = writer->write(writer->context, buffer, length);
        if (hr < 0) {
        failed:
            if (writer->status >= 0) {
                writer->status = hr;
            }
        }
    }
    return hr;
}
