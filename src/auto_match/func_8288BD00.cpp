#include "stdext/xmemory.h"

struct Elem {
    int v[1];
};

struct Alloc {
    int dummy;
};

extern "C" Elem *fn_8288BD00(Alloc *self, unsigned int count)
{
    return std::_Allocate(count, (Elem *)0);
}
