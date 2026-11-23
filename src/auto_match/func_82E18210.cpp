#include "havok/hkOArchive.h"

extern "C" void fn_82E18210(hkOArchive *archive, unsigned type, int count, unsigned *src)
{
    int *top;
    int base;
    unsigned __int64 *dst;
    int i;

    if (type == 4) {
        archive->writeArrayGeneric(src, 4, count);
    } else {
        top = reinterpret_cast<int *>(fn_82CE5410());
        base = *top;
        *top = ((count * 8 + 0x7f) & ~0x7f) + base;
        dst = (unsigned __int64 *)base;
        for (i = 0; i < count; i++) {
            dst[i] = src[i];
        }
        archive->writeArrayGeneric((void *)base, type, count);
        top = reinterpret_cast<int *>(fn_82CE5410());
        *top = base;
    }
}
