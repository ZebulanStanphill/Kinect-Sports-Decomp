#include "stdext/xmemory.h"

struct Elem {
    int v[2];
};

struct Alloc {
    int dummy;
};

extern "C" Elem *fn_828E62F0(Alloc *self, unsigned int count)
{
    return std::_Allocate(count, (Elem *)0);
}
