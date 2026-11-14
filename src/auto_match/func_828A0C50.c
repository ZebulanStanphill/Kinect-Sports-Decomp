#include <string.h>

typedef struct Key_828A0C50 {
    unsigned char bytes[8];
} Key_828A0C50;

unsigned char fn_828A0C50(const Key_828A0C50 *a, const Key_828A0C50 *b)
{
    return memcmp(a, b, sizeof(Key_828A0C50)) != 0;
}
