// stdext::bad_alloc-style constructor: stores the message at +4, then the vtable.
#include "stdext/exception.h"

extern "C" void fn_822300A0(stdext::bad_alloc *p, const char *message)
{
    p->stdext::bad_alloc::bad_alloc(message);
}
