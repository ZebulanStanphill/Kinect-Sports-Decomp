#include "stdext/xmemory.h"

struct Rep;

extern "C" {
void fn_8265CA20(void *p);
__declspec(noreturn) void fn_82F622A8(const char *msg);
void fn_822315A0(Rep *rep);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

template <class T> inline void swap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

struct Ptr {
    void *ptr;
    Rep *rep;
    Ptr(Ptr &&o) : ptr(0), rep(0) { _Assign_rv(static_cast<Ptr &&>(o)); }
    void _Assign_rv(Ptr &&o)
    {
        if (this != &o)
            _Swap(o);
    }
    void _Swap(Ptr &o)
    {
        swap(rep, o.rep);
        swap(ptr, o.ptr);
    }
    ~Ptr()
    {
        if (rep != 0)
            fn_822315A0(rep);
    }
};

struct Elem {
    int value;
    Ptr p;
    Elem(Elem &&o) : value(o.value), p(static_cast<Ptr &&>(o.p)) {}
};

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
};

extern "C" void fn_823B4230(Vec *self, unsigned int count)
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
            new ((void *)dst) Elem(static_cast<Elem &&>(*src));
        size = self->last - self->first;
        if (self->first != 0) {
            Elem *f = self->first;
            Elem *l = self->last;
            for (; f != l; ++f)
                f->p.~Ptr();
            fn_8265CA20(self->first);
        }
        self->first = ptr;
        self->end = ptr + count;
        self->last = ptr + size;
    }
}
