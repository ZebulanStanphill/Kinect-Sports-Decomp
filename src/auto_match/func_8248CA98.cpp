#include "stdext/xmemory.h"

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *msg);
void fn_8248CBB8(void *dest, void *src);

void fn_8265CA20(void *p);
}

struct Elem {
    virtual void destroy(int);
    unsigned char b[0x1c];
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
        fn_8248CBB8(dest, first);
    return dest;
}

static void Destroy(Elem *first, Elem *last)
{
    for (; first != last; ++first)
        first->destroy(0);
}

extern "C" void fn_8248CA98(Vec *self, unsigned int count)
{
    if (0x7ffffff < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(self->end - self->first) < count) {
        Elem *ptr = Allocate(count, (Elem *)0);
        Umove(self->first, self->last, ptr);
        unsigned int size = self->last - self->first;
        if (self->first != 0) {
            Destroy(self->first, self->last);
            fn_8265CA20(self->first);
        }
        self->end = ptr + count;
        self->last = ptr + size;
        self->first = ptr;
    }
}
