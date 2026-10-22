#include "stdext/xmemory.h"

struct Elem {
    unsigned int v[2];
};

extern "C" Elem *fn_822CB2D8(unsigned int count)
{
    void *ptr = 0;
    if (count <= 0) {
        count = 0;
    } else if ((unsigned int)-1 / sizeof(Elem) < count
               || (ptr = fn_8265C9E0(count * sizeof(Elem))) == 0) {
        stdext::bad_alloc(0)._Raise();
    }
    return (Elem *)ptr;
}
