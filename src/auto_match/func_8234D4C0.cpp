#include "stdext/xmemory.h"

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *msg);
void fn_8265CA20(void *p);
void *memmove(void *dst, const void *src, unsigned int n);
}

typedef unsigned short Elem;

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

template <class T> __forceinline T *Umove(T *first, T *last, T *dest)
{
    unsigned int n = (unsigned int)(last - first);
    return (T *)memmove(dest, first, n * sizeof(*first)) + n;
}

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
};

extern "C" void fn_8234D4C0(Vec *self, unsigned int count)
{
    if (0x7fffffff < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(self->end - self->first) < count) {
        Elem *ptr = Allocate(count, (Elem *)0);
        Umove(self->first, self->last, ptr);
        unsigned int size = self->last - self->first;
        if (self->first != 0)
            fn_8265CA20(self->first);
        self->first = ptr;
        self->end = ptr + count;
        self->last = ptr + size;
    }
}
