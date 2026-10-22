#include "stdext/xmemory.h"

struct Elem {
    unsigned int v[7];
};

extern "C" Elem *fn_828D4ED0(void *self, unsigned int count)
{
    return std::_Allocate(count, (Elem *)0);
}
