#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *msg);
void fn_8265CA20(void *p);
}

struct Elem {
    unsigned char b[0x11c];
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

static Elem *Umove(Elem *first, Elem *last, Elem *dest)
{
    for (; first != last; ++dest, ++first)
        ::new ((void *)dest) Elem(*first);
    return dest;
}

extern "C" void fn_82461140(Vec *self, unsigned int count)
{
    if (0xe6c2b4 < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(self->end - self->first) < count) {
        Elem *ptr = Allocate(count, (Elem *)0);
        Umove(self->first, self->last, ptr);
        unsigned int size = self->last - self->first;
        if (self->first != 0)
            fn_8265CA20(self->first);
        self->end = ptr + count;
        self->last = ptr + size;
        self->first = ptr;
    }
}
