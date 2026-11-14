#include <string.h>

typedef struct Key_828A0C20 {
    unsigned char bytes[8];
} Key_828A0C20;

unsigned char fn_828A0C20(const Key_828A0C20 *a, const Key_828A0C20 *b)
{
    return memcmp(a, b, sizeof(Key_828A0C20)) < 0;
}
