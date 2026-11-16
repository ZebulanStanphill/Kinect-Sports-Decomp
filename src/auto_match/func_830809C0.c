typedef char *va_list;
extern void __cdecl __va_start(va_list *args, ...);

typedef struct Logger_830809C0 {
    void *unused[2];
    void *output;        /* 0x08 */
    int count;           /* 0x0c */
    char (*filters)[32]; /* 0x10 */
    int filterCount;     /* 0x14 */
} Logger_830809C0;

extern int fn_82CFBBF0(const char *first, const char *second);
extern int fn_82CFBBA8(char *out, const char *format, ...);
extern int fn_82CFBE40(const char *text);
extern void fn_82CEDF40(void *self, const char *text, int length);
extern int fn_82CFBB58(char *out, int size, const char *format, va_list args);

void fn_830809C0(Logger_830809C0 *self, const char *category, const char *format, ...)
{
    char buffer[1024];
    const char *text = format;
    va_list args;
    int index;
    for (index = 0; index < self->filterCount; ++index) {
        if (fn_82CFBBF0(self->filters[index], category) == 0) {
            return;
        }
    }
    ++self->count;
    if (self->output != 0) {
        __va_start(&args, format);
        if (text[0] == '#') {
            fn_82CFBBA8(buffer, "%4i\t\t", self->count);
            fn_82CEDF40(self->output, buffer, fn_82CFBE40(buffer));
            fn_82CFBB58(buffer, 1024, text + 1, args);
        } else {
            fn_82CFBB58(buffer, 1024, text, args);
        }
        fn_82CEDF40(self->output, buffer, fn_82CFBE40(buffer));
    }
}
