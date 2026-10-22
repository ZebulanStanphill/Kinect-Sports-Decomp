#include "stdext/xmemory.h"

extern "C" {
void fn_8265CA20(void *p);
__declspec(noreturn) void fn_82F622A8(const char *msg);
}

inline void *operator new(unsigned int, void *p) { return p; }

struct T {
    float x;
    int y;
    T(const T &o) : x(o.x), y(o.y) {}
};

struct Vec {
    T *first;
    T *last;
    T *end;
};

template <class Ty> inline void _Destroy(Ty *p) { p->~Ty(); }
template <class Ty> struct Alloc {
    void destroy(Ty *p) { _Destroy(p); }
};
template <class Al, class Ty> inline void _Dest_val(Al &al, Ty *p) { al.destroy(p); }
template <class Al, class Ty> inline void _Destroy_range(Ty *f, Ty *l, Al &al)
{
    for (; f != l; ++f)
        _Dest_val(al, f);
}

extern "C" void fn_8233EEA8(Vec *v, unsigned int count)
{
    if (0x1fffffff < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(v->end - v->first) < count) {
        void *p0 = 0;
        unsigned int n = count;
        if (n <= 0)
            n = 0;
        else if ((unsigned int)-1 / sizeof(T) < n
                 || (p0 = fn_8265C9E0(n * sizeof(T))) == 0)
            stdext::bad_alloc(0)._Raise();
        T *ptr = (T *)p0;
        {
            T *src = v->first, *last = v->last, *dst = ptr;
            for (; src != last; ++dst, ++src)
                new ((void *)dst) T(*src);
        }
        unsigned int size = v->last - v->first;
        if (v->first != 0) {
            Alloc<T> al;
            _Destroy_range(v->first, v->last, al);
            fn_8265CA20(v->first);
        }
        v->end = ptr + count;
        v->last = ptr + size;
        v->first = ptr;
    }
}
