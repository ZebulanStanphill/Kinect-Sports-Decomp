#include <stdarg.h>
#include <string.h>

typedef struct Format_830677A0 {
    void *vtable;
    const char *prefix; /* 0x04 */
    int unknown08;
    int minimum;  /* 0x0c */
    int divisor;  /* 0x10 */
    int value;    /* 0x14 */
    int quotient; /* 0x18 */
    int written;  /* 0x1c */
    int state;    /* 0x20 */
} Format_830677A0;

extern void __cdecl __va_start(va_list *, ...);
extern void fn_830676A8(Format_830677A0 *self, const char *format, ...);
extern int fn_82F66768(char *buffer, unsigned int size, const char *format, va_list args);
extern void *fn_83065B90(unsigned int size);
extern void fn_83065BA8(void *buffer);

void fn_830677A0(Format_830677A0 *self, int value, const char *format, ...)
{
    va_list args;
    char buffer[0x80];
    int written;

    self->value = value;
    self->written = 0;
    self->quotient = value / self->divisor;
    self->state = 0;
    if (self->prefix != 0)
        fn_830676A8(self, self->prefix);

    __va_start(&args, format);
    written = fn_82F66768(buffer, sizeof(buffer), format, args);
    va_end(args);

    if (written < self->minimum) {
        int count = self->minimum - written;
        char *padding = (char *)fn_83065B90(count + 1);
        char *end = padding;
        if (count > 0) {
            int i;
            for (i = 0; count > i; ++i)
                padding[i] = '.';
            end += count;
        }
        *end = '\0';
        fn_830676A8(self, buffer);
        fn_830676A8(self, padding);
        fn_83065BA8(padding);
    } else {
        fn_830676A8(self, buffer);
    }
}
