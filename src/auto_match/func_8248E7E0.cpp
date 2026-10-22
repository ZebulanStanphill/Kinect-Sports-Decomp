#include "stdext/xmemory.h"

struct Sub {
    int a;
    int b;
};

struct Elem {
    Sub s;
    float f;
};

extern "C" {
void fn_82365BD8(Sub *dst, const Sub *src);
void fn_8248D360(Elem *first, Elem *last);
void fn_8265CA20(void *p);
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
};

static inline Elem *Umove(Elem *f, Elem *l, Elem *d)
{
    for (; f != l; ++d, ++f)
        if ((void *)d != 0) {
            fn_82365BD8(&d->s, &f->s);
            d->f = f->f;
        }
    return d;
}

static inline Elem *Allocate(unsigned int count)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if ((unsigned int)-1 / sizeof(Elem) < count
             || (ptr = fn_8265C9E0(count * sizeof(Elem))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (Elem *)ptr;
}

extern "C" void fn_8248E7E0(Vec *self, unsigned int count)
{
    if (0x15555555 < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(self->end - self->first) < count) {
        Elem *ptr = Allocate(count);
        Umove(self->first, self->last, ptr);
        unsigned int size = self->last - self->first;
        if (self->first != 0) {
            fn_8248D360(self->first, self->last);
            fn_8265CA20(self->first);
        }
        self->end = ptr + count;
        self->last = ptr + size;
        self->first = ptr;
    }
}
