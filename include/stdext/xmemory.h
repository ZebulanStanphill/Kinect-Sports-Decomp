// Allocation helper from Visual C++ 2010's <xmemory>, which the standard
// containers inline. The game's global operator new is fn_8265C9E0; it keeps
// that name because C units that already match call it.
#ifndef STDEXT_XMEMORY_H
#define STDEXT_XMEMORY_H
#include "stdext/exception.h"
extern "C" void *fn_8265C9E0(unsigned int size);
namespace std {
template <class T>
inline T *_Allocate(unsigned int count, T *)
{
    void *ptr = 0;
    if (count <= 0) {
        count = 0;
    } else if ((unsigned int)-1 / sizeof(T) < count
               || (ptr = fn_8265C9E0(count * sizeof(T))) == 0) {
        stdext::bad_alloc(0)._Raise();
    }
    return (T *)ptr;
}
}
#endif
