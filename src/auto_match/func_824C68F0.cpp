#include "stdext/xmemory.h"
extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
}

typedef void *T;

struct Vec {
    T *first;
    T *last;
    T *end;
};

template <class U> inline void destroy_one(U *p)
{
    p->~U();
}

template <class U> inline void destroy_range(U *first, U *last)
{
    for (; first != last; ++first)
        destroy_one(first);
}

extern "C" void fn_824C68F0(Vec *v, unsigned int count)
{
    if (0x3fffffff < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(v->end - v->first) < count) {
        void *p0 = 0;
        if (count <= 0)
            count = 0;
        else if ((unsigned int)-1 / sizeof(T) < count
                 || (p0 = fn_8265C9E0(count * sizeof(T))) == 0)
            stdext::bad_alloc(0)._Raise();
        T *ptr = (T *)p0;
        T *src = v->first;
        T *last = v->last;
        T *dst = ptr;
        for (; src != last; ++dst, ++src)
            if (dst != 0) *dst = *src;
        unsigned int size = v->last - v->first;
        if (v->first != 0) {
            destroy_range(v->first, v->last);
            fn_8265CA20(v->first);
        }
        v->end = ptr + count;
        v->last = ptr + size;
        v->first = ptr;
    }
}
