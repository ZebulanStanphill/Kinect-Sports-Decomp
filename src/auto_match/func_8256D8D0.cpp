#include "stdext/xmemory.h"

extern "C" {
void fn_8265CA20(void *p);
__declspec(noreturn) void fn_82F622A8(const char *msg);
void fn_822315A0(void *rep);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct Ptr {
    void *ptr;
    void *rep;
    Ptr(const Ptr &o);
    ~Ptr()
    {
        if (rep != 0)
            fn_822315A0(rep);
    }
};

extern "C" Ptr *fn_82365BD8(Ptr *self, const Ptr *o);
inline Ptr::Ptr(const Ptr &o) { fn_82365BD8(this, &o); }

struct Elem {
    Ptr p;
    int value;
};

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
};

extern "C" void fn_8256D8D0(Vec *self, unsigned int count)
{
    if (0x15555555 < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(self->end - self->first) < count) {
        Elem *ptr;
        {
            void *q = 0;
            unsigned int n = count;
            if (n <= 0)
                n = 0;
            else if ((unsigned int)-1 / sizeof(Elem) < n
                     || (q = fn_8265C9E0(n * sizeof(Elem))) == 0)
                stdext::bad_alloc(0)._Raise();
            ptr = (Elem *)q;
        }
        Elem *src = self->first;
        Elem *srcend = self->last;
        Elem *dst = ptr;
        unsigned int size;
        for (; src != srcend; ++dst, ++src)
            new ((void *)dst) Elem(*src);
        size = self->last - self->first;
        if (self->first != 0) {
            Elem *f = self->first;
            Elem *l = self->last;
            for (; f != l; ++f)
                f->~Elem();
            fn_8265CA20(self->first);
        }
        self->first = ptr;
        self->end = ptr + count;
        self->last = ptr + size;
    }
}
