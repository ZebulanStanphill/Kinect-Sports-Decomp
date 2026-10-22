#include "stdext/xmemory.h"

struct Elem {
    int v[8];
};

struct Alloc {
    int dummy;
};

extern "C" Elem *fn_8288BF40(Alloc *self, unsigned int count)
{
    return std::_Allocate(count, (Elem *)0);
}
