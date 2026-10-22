#include "stdext/xmemory.h"

extern "C" unsigned short *fn_82297930(unsigned int count)
{
    void *ptr = 0;
    if (count <= 0) {
        count = 0;
    } else if ((unsigned int)-1 / sizeof(unsigned short) < count
               || (ptr = fn_8265C9E0(count * sizeof(unsigned short))) == 0) {
        stdext::bad_alloc(0)._Raise();
    }
    return (unsigned short *)ptr;
}
