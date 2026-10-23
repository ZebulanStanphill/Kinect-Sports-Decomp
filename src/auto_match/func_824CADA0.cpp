#include "stdext/xmemory.h"

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *msg);
void fn_8223B688(void *dest, const void *src);
void fn_82230300(void *p, int built, unsigned int newsize);
void fn_8265CA20(void *p);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Str {
    unsigned char b[0x1c];
    Str(const Str &o) { fn_8223B688(this, &o); }
    ~Str() { fn_82230300(this, 1, 0); }
};

struct Elem {
    Str s;
    float f0;
    float f1;
    float f2;
    float f3;
    float f4;
    __forceinline Elem(const Elem &o) : s(o.s), f0(o.f0), f1(o.f1), f2(o.f2), f3(o.f3), f4(o.f4) {}
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

static void Destroy(Elem *first, Elem *last)
{
    for (; first != last; ++first)
        first->~Elem();
}

extern "C" void fn_824CADA0(Vec *self, unsigned int count)
{
    if (0x5555555 < count)
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
