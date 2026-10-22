#include "stdext/xmemory.h"

struct Elem12 { unsigned int a, b, c; };

extern "C" Elem12 *fn_828AEE90(void *self, unsigned int count)
{
    return std::_Allocate(count, (Elem12 *)0);
}
