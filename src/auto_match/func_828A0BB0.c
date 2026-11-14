#include <string.h>

typedef struct Key_828A0BB0 {
    unsigned char bytes[0x10];
} Key_828A0BB0;

unsigned char fn_828A0BB0(const Key_828A0BB0 *a, const Key_828A0BB0 *b)
{
    return memcmp(a, b, sizeof(Key_828A0BB0)) == 0;
}
