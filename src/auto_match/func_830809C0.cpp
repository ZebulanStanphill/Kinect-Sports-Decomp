#include "havok/hkString.h"

typedef char *va_list;
extern "C" void __cdecl __va_start(va_list *args, ...);

typedef struct Logger_830809C0 {
    void *unused[2];
    void *output;        /* 0x08 */
    int count;           /* 0x0c */
    char (*filters)[32]; /* 0x10 */
    int filterCount;     /* 0x14 */
} Logger_830809C0;

extern "C" void fn_82CEDF40(void *self, const char *text, int length);

extern "C" void fn_830809C0(Logger_830809C0 *self, const char *category, const char *format, ...)
{
    char buffer[1024];
    const char *text = format;
    va_list args;
    int index;
    for (index = 0; index < self->filterCount; ++index) {
        if (hkString::strCmp(self->filters[index], category) == 0) {
            return;
        }
    }
    ++self->count;
    if (self->output != 0) {
        __va_start(&args, format);
        if (text[0] == '#') {
            hkString::sprintf(buffer, "%4i\t\t", self->count);
            fn_82CEDF40(self->output, buffer, hkString::strLen(buffer));
            hkString::vsnprintf(buffer, 1024, text + 1, args);
        } else {
            hkString::vsnprintf(buffer, 1024, text, args);
        }
        fn_82CEDF40(self->output, buffer, hkString::strLen(buffer));
    }
}
