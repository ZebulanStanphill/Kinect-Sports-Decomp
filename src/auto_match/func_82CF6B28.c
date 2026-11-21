#include <string.h>

extern void fn_82CF69B8(void *dst, const void *src, unsigned int numBytes);

/* Overlap-safe copy: backwards when the destination is above the source. */
void fn_82CF6B28(void *dst, const void *src, unsigned int numBytes)
{
    if (dst > src) {
        fn_82CF69B8(dst, src, numBytes);
    } else if (dst < src) {
        memcpy(dst, src, numBytes);
    }
}
