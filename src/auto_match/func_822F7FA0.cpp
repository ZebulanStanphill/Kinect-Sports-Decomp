#include "stdext/xmemory.h"

extern "C" {
void fn_8265CA20(void *p);
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

inline void *operator new(unsigned int, void *p) { return p; }

struct Elem {
    int a;
    float b;
    Elem(const Elem &o) : a(o.a), b(o.b) {}
};

template <class T> inline void Destroy(T *p) { p->~T(); }
struct Al { void destroy(Elem *p) { Destroy(p); } };
template <class A, class T> inline void Dest_val(A &al, T *p) { al.destroy(p); }
template <class A> inline void Destroy_range(Elem *f, Elem *l, A &al) { for (; f != l; ++f) Dest_val(al, f); }
struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
};

extern "C" void fn_822F7FA0(Vec *v, unsigned int count)
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
            Al al;
            Destroy_range(v->first, v->last, al);
            fn_8265CA20(v->first);
        }
        v->end = ptr + count;
        v->last = ptr + size;
        v->first = ptr;
    }
}
