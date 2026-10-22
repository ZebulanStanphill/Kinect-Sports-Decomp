#include "stdext/xmemory.h"

extern "C" unsigned int *fn_82E21DB0(unsigned int count)
{
    void *ptr = 0;
    if (count <= 0) {
        count = 0;
    } else if ((unsigned int)-1 / sizeof(unsigned int) < count
               || (ptr = fn_8265C9E0(count * sizeof(unsigned int))) == 0) {
        stdext::bad_alloc(0)._Raise();
    }
    return (unsigned int *)ptr;
}
