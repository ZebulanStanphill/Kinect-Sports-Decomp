#include <string.h>

int fn_8291C6F8(char *dst, unsigned int cch, const char *src)
{
    if (cch > 0x7fffffff) {
        return 0x80070057;
    }
    strncpy(dst, src, cch);
    dst[cch - 1] = 0;
    return strlen(src) >= cch ? 0x8007007a : 0;
}
