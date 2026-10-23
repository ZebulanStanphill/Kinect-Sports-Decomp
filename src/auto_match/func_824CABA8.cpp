#include "stdext/xmemory.h"

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

struct Elem {
    unsigned char b[0x30];
};

template <class T> __forceinline T *Allocate(unsigned int count, T *)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if ((unsigned int)-1 / sizeof(T) < count
             || (ptr = fn_8265C9E0(count * sizeof(T))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (T *)ptr;
}

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
};

extern "C" bool fn_824CABA8(Vec *self, unsigned int count)
{
    self->first = 0;
    self->last = 0;
    self->end = 0;
    if (count == 0)
        return false;
    else if (0x5555555 < count)
        fn_82F622A8("vector<T> too long");
    else {
        self->first = Allocate(count, (Elem *)0);
        self->last = self->first;
        self->end = self->first + count;
    }
    return true;
}
