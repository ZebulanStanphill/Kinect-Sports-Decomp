#include <string.h>

typedef struct Key_828A0BE8 {
    unsigned char bytes[0x24];
} Key_828A0BE8;

unsigned char fn_828A0BE8(const Key_828A0BE8 *a, const Key_828A0BE8 *b)
{
    return memcmp(a, b, sizeof(Key_828A0BE8)) == 0;
}
