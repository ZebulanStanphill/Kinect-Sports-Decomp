#include <string.h>

typedef struct Key_828A0B78 {
    unsigned char bytes[8];
} Key_828A0B78;

unsigned char fn_828A0B78(const Key_828A0B78 *a, const Key_828A0B78 *b)
{
    return memcmp(a, b, sizeof(Key_828A0B78)) == 0;
}
