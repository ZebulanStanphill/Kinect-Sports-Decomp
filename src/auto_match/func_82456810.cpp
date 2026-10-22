#include "stdext/xmemory.h"

struct Elem;

extern "C" {
void fn_8265CA20(void *p);
__declspec(noreturn) void fn_82F622A8(const char *msg);
void fn_8228E658(Elem *self, Elem *src);
void fn_823210A8(Elem *first, Elem *last);
}

inline void *operator new(unsigned int, void *p) { return p; }

struct Elem {
    void *ptr;
    void *rep;
    Elem(Elem &o) : ptr(0), rep(0) { fn_8228E658(this, &o); }
};

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
};

extern "C" void fn_82456810(Vec *v, unsigned int count)
{
    if (0x1fffffff < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(v->end - v->first) < count) {
        void *p0 = 0;
        unsigned int n = count;
        if (n <= 0)
            n = 0;
        else if ((unsigned int)-1 / sizeof(Elem) < n
                 || (p0 = fn_8265C9E0(n * sizeof(Elem))) == 0)
            stdext::bad_alloc(0)._Raise();
        Elem *ptr = (Elem *)p0;
        {
            Elem *src = v->first, *last = v->last, *dst = ptr;
            for (; src != last; ++dst, ++src)
                new ((void *)dst) Elem(*src);
        }
        unsigned int size = v->last - v->first;
        if (v->first != 0) {
            fn_823210A8(v->first, v->last);
            fn_8265CA20(v->first);
        }
        v->end = ptr + count;
        v->last = ptr + size;
        v->first = ptr;
    }
}
